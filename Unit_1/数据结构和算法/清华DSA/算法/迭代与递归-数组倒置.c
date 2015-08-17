#include <stdio.h>
#define arraymax 9 //数组元素个数
//迭代倒置
int reverse(int *a, int lo, int hi){
    int i,j,temp;
    for (i = lo,j = hi ;i < j ; i++,j-- ){
        temp = a[j]; a[j] = a[i]; a[i] = temp;
    }
    return *a;
}

//迭代精简版！
int reverse3(int *a, int lo, int hi){
    int temp;
    while (lo<hi) {
        temp = a[hi]; a[hi--] = a[lo]; a[lo++] = temp;
    }
    return *a;
}

//递归倒置
int reverse2(int *a, int lo, int hi){
    int temp;
    if (lo<hi){
        temp = a[hi]; a[hi] = a[lo]; a[lo] = temp;
        reverse2(a,++lo,--hi);
    }
}


int main(int argc, char *argv[])
{
    int a[arraymax] = {1,2,3,4,5,6,7,8,9};
    int i;
    for (i=0;i<arraymax ;i++ ){
        printf("%d|",a[i]);
    }
    putchar('\n');

    reverse(a,0,arraymax-1);
    for (i=0;i<arraymax ;i++ ){
        printf("%d|",a[i]);
    }
    putchar('\n');

    reverse2(a,0,arraymax-1);
    for (i=0;i<arraymax ;i++ ){
        printf("%d|",a[i]);
    }
    putchar('\n');

    reverse3(a,0,arraymax-1);
    for (i=0;i<arraymax ;i++ ){
        printf("%d|",a[i]);
    }
    putchar('\n');
    return 0;
}
