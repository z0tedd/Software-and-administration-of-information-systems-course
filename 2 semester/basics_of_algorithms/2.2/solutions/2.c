#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
  size_t n;
  char* str = NULL;
  getline(&str, &n,stdin);
  char divdrs[] = {'.'};
  char *p = strtok(str,divdrs);
  int k = 0;
  while (p){
    long int num = strtol(p,NULL,10);
    k++;
    //printf("%ld",num);
    if (!(num<=255 && num>=0)||k>4){
      printf("%d",0);
      return 0;
    }
    p = strtok(NULL,divdrs);
  }
  printf("%d",1);



  //printf("%s", str);
  return 0;


}


