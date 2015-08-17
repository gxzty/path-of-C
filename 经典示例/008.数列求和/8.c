//求1+(1+2)+(1+2+3)+...+(1+...+n)的和
#include <stdio.h>
void main()
{
    int i,j,n;
    long sum=0,temp=0;

    printf("Please input a number to n:\n");
    scanf("%d",&n);
    if(n<1)
    {
        printf("The n must no less than 1!\n");
        return;
    }

    for(i=1;i<=n;i++)//如果n=2,i=1,i=2
    {
        temp=0;
        for(j=1;j<=i;j++)//j=1,j=2
        {
            temp+=j;//temp=1,=2
            sum+=temp;//sum=1+(1+2)+(1+2+3)+(1+2+3+4)
            //n*1+(n-1)*2+(n-2)*3+..+1*n
        }
    }
    printf("The sum of the sequence(%d) is %d\n",n,sum);
}