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

int main(int argc, char *argv[])
{
    int n , a ,b ,gcdab;
    scanf("%d",&n);
    while (n--){
        scanf("%d%d",&a,&b);
        gcdab = gcd(a,b);
        printf("%d %d\n",gcdab,a*b/gcdab);
    }
    return 0;
}
