#include <stdio.h>
int gcd(int a, int b) {
//辗转相除法
    if (a < b){
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
    }
    if (b == 0) {
        return a;
    } 
    else {
        return gcd(b, a % b);
    }
}


int gongyue(int a , int b){
    int i = 1, c , j = 0 ,gy = 1;
    c = a > b?a:b;
    while ( i <= c ){
        if (a / i * i == a && b / i * i ==b ){
            gy = i ;
        }
        i++;
    }
    return gy;
}


//最小公倍数等于两个数的乘机除以他们的最大公约数
int gbd

int gongbei(int a , int b){
    int i , j ,c;
    c = a < b? b:a;
    for ( i = 1;i <= b ;i++ ){
        for (j = 1; j <= a ;j++ ){
            if ( a * i == b * j){
                return a*i;
            }
        }
    }
}

int main(int argc, char *argv[])
{
    int n , a ,b ;
    scanf("%d",&n);
    while (n--){
        scanf("%d %d",&a,&b);
        printf("%d %d %d\n",gcd(a,b),gongyue(a,b),gongbei(a,b));
    }
    return 0;
}
