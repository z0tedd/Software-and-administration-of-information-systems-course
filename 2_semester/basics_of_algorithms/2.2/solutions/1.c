#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(){
  size_t n;
  char * str = NULL;
  getline(&str,&n,stdin);
  if (!(strlen(str)>1 && strlen(str)<5)){
    printf("%s\n", "01") ;
    return 0;
  }
  char abc[] = "QWERTYUIOPASDFGHJKLMNBVCXZ";
 // printf("%d\n", strlen(abc));
  char *ret = strpbrk(str, abc);
  //printf("%s",ret);
  if (!(ret == str)){
    printf("%s", "02");
    return 0;
  }
  ///*
  char abcd[] = {'Q','W','E','R','T','Y','U','I','O','P','A','S','D','F','G','H','J','K','L','Z','X','C','V','B','N','M'};
  char *ld = strtok(str,abcd);
  //ld = strtok(str,abc);
 printf("%d\n",strlen(str));

 //printf("%d\n",strlen(ld));
  if (ld==NULL||strlen(ld)+1!= strlen(str)){
    printf("%s","03");
  }

  else{ printf("%d\n",1);}
  //printf("%s\n", ld);
  

  //*/

  return 0;
}
