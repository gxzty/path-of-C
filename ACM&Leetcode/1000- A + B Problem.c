#include <stdio.h>

int main()
{
    int a,b;
    while(scanf("%d %d",&a, &b) != EOF)//EOF!!end of files!!!
        printf("%d\n",a+b);
    return 0;
}