/*
描述
设计一个从5个整数中取最小数和最大数的程序

输入
输入只有一组测试数据，为五个不大于1万的正整数

输出
输出两个数，第一个为这五个数中的最小值，第二个为这五个数中的最大值，两个数字以空格格开。

样例输入
1 2 3 4 5

样例输出
1 5
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int a[5] = {0};
    int i,t,k;
    for (i=0;i <=4 ;i++ ){
        scanf("%d",&a[i]);
    }
    t =a[1] < a[0] ? a[1] : a[0];
    for (i=2;i<=4 ;i++ ){
        t = t>a[i]?t:a[i];
    }
    k = a[0]<a[1]?a[0]:a[1];
    for (i=2;i<=4 ;i++ ){
        k = k<a[i]?k:a[i];
    }
    printf("%d %d\n",k,t);
    return 0;
}