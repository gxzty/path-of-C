#include <stdio.h>
#define MAX 100
int main()
{
    int m, n;
    int sum = 0;
    for(m=2; m<=MAX; m+=1){
        for(n=2; n<m; n++){
            if(m%n==0)       //什么条件下跳出当前循环
            break;          //这里应该退出当前循环了
        }
        if(m == n){   //n循环结束后，如果m=n的话就输出m
            printf("%d|", m);
            printf("sum : %d\n",sum+=m);
        }
    }
    putchar('\n');
    return 0;    
}