#include <stdio.h>

int main(int argc, char *argv[])
{
    int i ;
    for (i = 0;i <= 100 ;i ++ ){
        printf("!!!!!%3d%%!!!!!",i);
        fflush(stdout);
        scanf("%d",&i);
        fflush(stdin);
    }
    return 0;
}
