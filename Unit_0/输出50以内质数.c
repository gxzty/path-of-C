#include <stdio.h>
#define MAX 100000
int main()
{
    int m, n;
    printf("2|3|5|7|9|11|13|17|19|23|");
    for(m=3; m<=MAX; m+=2){
        if (m%3 == 0) continue;
        else if (m%5 == 0) continue;
        else if (m%7 == 0) continue;
        else if (m%9 == 0) continue;
        else if (m%11 == 0) continue;
        else if (m%13 == 0) continue;
        else if (m%17 == 0) continue;
        else if (m%19 == 0) continue;
        else if (m%23 == 0) continue;//并没有什么用貌似
        for(n=2; n<m; n++){
            if(m%n==0)       //什么条件下跳出当前循环
           break;          //这里应该退出当前循环了
        }    
        if(m == n)   //n循环结束后，如果m=n的话就输出m
    printf("%d|", m);
    }
    putchar('\n');
    return 0;    
}