#include <stdio.h>
//计算A+B，不用常规数学运算符号
int aplusb(int a, int b) {
    // write your code here, try to do it without arithmetic operators.
    if (a >= 0 && b >= 0) {
        //a = 07(0111);
        //b = 10(1010);
        //
        return a|b;
    }
}

int main(int argc, char *argv[])
{
    int sum = 0;
    sum = aplusb(1,1);
    printf("%d\n",sum);
    return 0;
}
