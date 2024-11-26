#include <stdlib.h>
#include <stdio.h>
#include <string.h>
char * strdifffunc(char * str){
  char del[] = {" "};
  char* Half = strtok(str, del);
  char* New = (char*)malloc(sizeof(char)*strlen(str));
  while (Half!=NULL){
    strcat(New, Half);
    Half = strtok(NULL, del);
  }
  return New;

}
char * strdiffc(char * str){
  char del = ' ';
  char * it = str;
  int CountDelimiters = 0;
  while ((*it) != '\0'){ // NULL summon warning, i dunno why
    if ((*it) == ' ') CountDelimiters++;
    it++;
  }
  //printf("%s %s",it,str);
  char* New = (char *)malloc(sizeof(char)*(it - str-CountDelimiters));
  ///*
  ///
  //printf("%d %d %d %d", strlen(New),strlen(str),CountDelimiters,(it - str-CountDelimiters));
  char* itStr;
  itStr = str;
  char* itNew = New;
  while ((*itStr) !=  '\0'){
    if ((*itStr) == del){
      itStr++;
     // printf("%c", *itStr);
      continue;
    }
    (*itNew) = (*itStr);
    //printf("%c %c ", *itNew, *itStr);
    itNew++;itStr++;
  }
//*/
  *(itNew--) = '\0';
  //printf("||%c||",*(itNew-1));
  return New;
}

int main(){
  char* str = NULL;
  size_t n;
  getline(&str, &n,stdin);
  //n = strlen(str);
  //printf("%s %zu " , str,n);

  char* FalseNew = strdiffc(str);
  printf("%s",FalseNew);
  return 0;
}
