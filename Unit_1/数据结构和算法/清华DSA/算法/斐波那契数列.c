#include <stdio.h>

int main(int argc, char *argv[])
{
    int a[100] = {0};
    a[0] = 1;
    a[1] = 1;
    printf("fib(%d): %d\n",0,a[0]);
    printf("fib(%d): %d\n",1,a[1]);
    int i = 2;
    while (i <43){//超过45项就超出长度了！
        a[i] = a[i-1] + a[i-2];
        printf("fib(%d): %d\n",i,a[i]);
        i++;
    }
    int f=0,g=1;
    int n,m ;
    m = n =43;
    while (0<n--){
        g = g + f;
        f = g - f;
        printf("fib(%d): %d\n",m-n,f);
    }
    return 0;
}
