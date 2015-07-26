#include <stdio.h>
void main(){
  int var = 81;
  while( var-- )
  {
    if( var / 9 % 3 == var % 9 % 3 )//发生冲突 
     continue;
    else printf("%d\n",var);
  }
}