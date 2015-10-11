/*利用一维整型数组可以实现超长整数的加法，编程实现；从键盘输入两个 
40位正整数，输出其和 
*/
#include<stdio.h>  
#define N 2  
void main()  
{  
    int a[N],b[N],s[N+1],i,t=0;  
    for(i=N-1;i>=0;i--)       /*输入数组a*/  
        scanf("%d",&a[i]);  
  
    for(i=N-1;i>=0;i--)       /*输入数组b*/  
        scanf("%d",&b[i]);  
    for(i=0;i<N-1;i++)  
    {  
        s[i]=a[i]+b[i]+t;  
        if(s[i]>10)  
        {  
            t=s[i]/10;  
            s[i]=s[i]%10;  
        }  
        else  t=0;  
    }  
  
    if(t==0)  
        for(i=N-1;i>=0;i--)  
            printf("%d",s[i]);  
    else  
    {  
        s[i]=t;  
        for(i=N;i>=0;i--)  
            printf("%d",a[i]);  
    }  
} 