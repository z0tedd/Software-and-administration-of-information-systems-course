#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define SIZE 128

char * strdiffc(char * str){
    //bool megamas[SIZE];

    bool *megamas = (bool*)malloc(sizeof(bool)*SIZE);
    for (bool* it = megamas;(size_t)(it-megamas)<SIZE; it++ ){
       *it = 0;
    }
    int n = 0;
    char * it = str;
    while ((*it) != '\0'){ // NULL summon warning, i dunno why
      if (!(*(megamas+int(*it)))){
        *(megamas+int(*it)) = 1;
        //megamas[int(*it)] = 1;
        n++;
      } 
      it++;
    }
    char * New = (char*)malloc(sizeof(char)*n+1);
    char * itstr = New; 
    for (bool* it = megamas;(size_t)(it- megamas)<SIZE; it++ ){
      if (*it){
        *itstr = (char)(it-megamas);
        itstr++;
      }
    }
    *(New+n)='\0';
  /*
    for (int i=0;i<strlen(New);i++){
    
    printf("-----%c---%d---%d\n",New[i],i,int(New[i])); 
  }*/
    //printf("%d\n",strlen(New));

    return New;
}

int main(){
  char * str = NULL;
  size_t n; 
  getline(&str,&n,stdin);
  char*New = strdiffc(str);
  printf("%s",New);


  return 0;
}
