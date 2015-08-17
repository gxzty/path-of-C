/*
描述
有以下等式：a1*x1^3+a2*x2^3+a3*x3^3+a4*x4^3+a5*x5^3=0

x1,x2,x3,x4,x5都就在区间[-50,50]之间的整数，且x1,x2,x3,x4,x5都不等于0.

问：给定a1,a2,a3,a4,a5的情况下，x1,x2,x3,x4,x5共有多少种可能的取值？

输入
第一行输入一个整数T(T<=10)表示测试数据的组数。
每组测试数据都只有一行，是5个整数,分表表示a1,a2,a3,a4,a5。(a1,a2,a3,a4,a5都在区间[-50,50]之间）

输出
对于每组数据输出一行，表示x1,x2,x3,x4,x5可能的取值种数

样例输入
1
37 29 41 43 47

样例输出
654
*/

/*
//暴力穷举法
#include <stdio.h>

int main(int argc, char *argv[])
{
    int x1,x2,x3,x4,x5;
    int count=0,i;
    int a1,a2,a3,a4,a5;
    scanf("%d%d%d%d%d",&a1,&a2,&a3,&a4,&a5);
    for (x1=-50;x1<=50 ;x1++ ){
        if (x1==0) continue;
        for (x2=-50;x2<=50 ;x2++ ){
            if (x2==0) continue;
            for (x3=-50;x3<=50 ;x3++ ){
                if (x3==0) continue;
                for (x4=-50;x4<=50 ;x4++ ){
                    if (x4==0) continue;
                    for (x5=-50;x5<=50 ;x5++ ){
                        if (x5==0) continue;
                        i=a1*x1*x1*x1+a2*x2*x2*x2+a3*x3*x3*x3+a4*x4*x4*x4+a5*x5*x5*x5;
                        if (i==0){
                            count++;
                        }
                    }
                }
            }
        }
    }
    printf("%d\n",count);
    return 0;
}
*/
//hash
#include <stdio.h>  
#include <string.h>  
  
short hash[25000001];  
  
int main()
{  
    int a1,a2,a3,a4,a5,x1,x2,x3,x4,x5,sum;  
  
    while(~scanf("%d%d%d%d%d",&a1,&a2,&a3,&a4,&a5)){  
        memset(hash,0,sizeof(hash));  
        for(x1 = -50; x1<=50; x1++){  
            if(!x1)  
                continue;  
            for(x2 = -50; x2<=50; x2++){  
                if(!x2)  
                    continue;  
                sum = -1*(a1*x1*x1*x1+a2*x2*x2*x2);  
                if(sum<0)  
                    sum+=25000000;//数字下标没有负数，换一种储存方式  
                hash[sum]++;  
            }  
        }  
        int cnt = 0;  
        for(x3 = -50; x3<=50; x3++) {  
            if(!x3)  
                continue;  
            for(x4 = -50; x4<=50; x4++) {  
                if(!x4)  
                    continue;  
                for(x5 = -50; x5<=50; x5++){  
                    if(!x5)  
                        continue;  
                    sum = a3*x3*x3*x3+a4*x4*x4*x4+a5*x5*x5*x5;  
                    if(sum<0)  
                        sum+=25000000;  
                    cnt+=hash[sum];  
                }  
            }  
        }  
        printf("%d\n",cnt);  
    }  
  
    return 0;  
}  