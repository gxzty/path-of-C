#include <stdio.h>
#define N 10
int main()
{
    int i, j, k;
    for(i=1; i<N; i++)
    {
        /* 观察每行的空格数量，补全循环条件 */
        for(j=i;j<N;j++)  
        {
            printf(" ");    //输出空格
        }
        /* 观察每行*号的数量，补全循环条件 */
        for(k=0;k<2*i-1;k++) 
        {
            printf("*");   //每行输出的*号
        }
        printf("\n");     //每次循环换行
    }
    return 0;
}