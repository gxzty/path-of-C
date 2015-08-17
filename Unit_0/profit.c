#include <stdio.h>
#define M 1.3*365

int main(int argc, char *argv[])
{
    float a=M,b=1+0.05,i=1;
    while (i++ <= 10){
        a = (a+M) * b;
    }
    printf("%g\n",a);
    return 0;
}