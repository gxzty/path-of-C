#include <stdio.h>
#define N 5
#define INSERT 0
//特殊INSERT 无外乎大于最大值或者小于最小值
//重视模块化
int binary_insert(int *a, int len , int insert)
{
    int j,k;
    //如果j小于count,比较b和a[j]谁大，若j=count，则执行a[j]=b;count++;
    //若b <= a[j]，a[j]后所有元素后移一位，a[j]=b，同时终止for循环
    //若a[j] < b，执行j++，比较b和a[j+1]
    int lo = 0,hi = len-1 , mi = (lo+hi)/2 ;
    int b = insert , count = len;
    if (a[hi] <= b) {
        //若b不小于a[]中最大值a[hi]，则直接将b置入a[len]中
        a[len]=b;
        count++;
    }
    else if (b <= a[lo]){
        for (j=count;lo < j ;j-- ){
            a[j]=a[j-1]; a[j-1]=0;
        }
        a[lo] = b;count++;
    }
    else {
        printf("%d\n",mi);
        while ( b < a[mi] || a[mi+1] < b ){
            //二分查找
            if ( b < a[mi]) hi = mi-1;
            else if (a[mi] < b) lo = mi+1; 
             mi = (lo+hi)/2;
            printf("%d\n",mi);
        }
        for (j=count;mi+1 < j ;j-- ){
            a[j]=a[j-1]; a[j-1]=0;
        }
        a[mi+1] = b;count++;
    }

    for (k=0;k<count;k++ ){
        printf("%d|",a[k]);
    }
    printf("\n%d\n",count);
    return 0;
}

int main(){
    int a[N+1] = {1, 3, 5, 7, 9 }; //a[0]~a[4],a[5]为INSERT预留
    int count = N;  // 现存了N个数
    int b=INSERT;
    binary_insert(a,count,b);
}