/*
描述
根据输入的半径值，计算球的体积。

输入
输入数据有多组，每组占一行，每行包括一个实数，表示球的半径。（0<R<100）

输出
输出对应的球的体积，对于每组输入数据，输出一行，计算结果四舍五入为整数
Hint:PI=3.1415926

样例输入
1
1.5

样例输出
4
14
*/
#include <stdio.h>
//#define PI 3.1415926

int main(int argc, char *argv[])
{
    double r,s1;
    int s2;
    while (~scanf("%lf",&r)){
    // s1 =4/3.0*PI*r*r*r;//从左到右算，如果是4/3，则两个都是整数在算，结果会被强制转换为1
        s1 = 4/3.0*3.1415926*r*r*r;
        s2 = (int)(s1+0.5);
        printf("%d\n\n",s2);
    }
    return 0;
}