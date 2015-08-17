/*
描述
求A+B是否与C相等。
输入
T组测试数据。
每组数据中有三个实数A,B,C(-10000.0<=A,B<=10000.0,-20000.0<=C<=20000.0)
数据保证小数点后不超过4位。

输出
如果相等则输出Yes
不相等则输出No
样例输入
3
-11.1 +11.1 0
11 -11.25 -0.25
1 2 +4
样例输出
Yes
Yes
No
*/
#include <stdio.h>

int main(int argc, char *argv[])
{
    int n,i;
    scanf("%d",&n);
    double a[n],b[n],c[n];//不能用float必须用double
    for (i=1;i<=n ;i++ ){
        scanf("%lf%lf%lf",&a[i],&b[i],&c[i]);//这里也不是%f，要用%lf
    }
    for (i=1;i<=n ;i++ ){
        if (-.0001 < a[i]+b[i]-c[i] &&  a[i]+b[i]-c[i] < -.0001) printf("Yes\n");//精度！！！我也不知道为什么
        else printf("No\n");
    }
    return 0;
}
/*
#include <cstdio>
#include <math.h>

double a,b,c;
main()
{
    for(scanf("%lf",&a);~scanf("%lf%lf%lf",&a,&b,&c);puts(fabs(c-(a+b))<1e-6?"Yes":"No"));
}
*/