#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>


int main(){
  char * str = NULL;
  size_t sdv = 10;
  size_t n;
  getline(&str, &n, stdin);
  char * name = str+10;
  for (int i = 0; i>-1;i++){
    if (name[i] == ' '){
      name[i]='\0';
      break;
    }
  }
  printf("%s\n",name);
  char * ns = NULL;
  int j = 0;
  while (true){
    getline(&ns,&n,stdin);
    if (!strcmp(ns+strlen(ns)-4,"off\n\0")) break;
    /*
    if (strcmp(ns+strlen(ns)-3,"off")){
      ns+=10;
    size_t lns = strlen(ns);
    if (ns[lns-2]=='.') ns[lns-2] = ',';
    if (j%2==0)
    printf("\"%s\" --- skazal Fedya.\n",ns);
    else
    printf("\"%s\" --- skazal %s\n",ns,name);
    j++;
    //delete [] ns;
    ns = NULL;
    //delete [] str;
break;*/
    //}
    ns+=10;
    size_t lns = strlen(ns);
    ns[lns - 1] = '\0';
    if (!(ns[lns-2]=='?' && ns[lns-2]!='!' || ns[lns-2]!='?' && ns[lns-2]=='!')) ns[lns-1] = ',';
    if (ns[lns-2]=='.') ns[lns - 2] = ',';
/*
    if (ns[lns-3]=='.'){ ns[lns-3] = ','; ns[lns-1] = '\0';} 
    
    if (ns[lns-3]!='?' && ns[lns-3]!='!') ns[lns-1] = '.';*/
    if (j%2==0)
    printf("\"%s\" --- skazal Fedya.\n",ns);
    else
    printf("\"%s\" --- skazal %s\n",ns,name);
    j++;
    //delete [] ns;
    ns = NULL;

  }


  return 0;
}
