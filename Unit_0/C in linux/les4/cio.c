#include <stdio.h>
/*
stdin
stdout
stderr
*/
int main()
{
  // printf("pleas input the value a :\n");
  fprintf(stdout,"pleas input the value a :\n");
  int a;
  //scanf("%d,&a");
  fscanf(stdin,"%d",&a);
  if(a<0){
    fprintf(stderr,"the value must >0\n");
    return 1;
  }
  return 0;
}
