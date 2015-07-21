#include <stdio.h>
#define N 5
#define INSERT 0
//特殊INSERT 无外乎大于最大值或者小于最小值
int main(int argc, char *argv[])
{
    int count = N;  // 现存了N个数
	int a[6] = {1, 3, 5, 7, 9 }; //a[0]~a[4],a[5]为INSERT预留
	int b=INSERT;
	int i,j,k;
    //如果i小于count,比较b和a[i]谁大，若i=count，则执行a[i]=b;count++;
	//若b <= a[i]，a[i]后所有元素后移一位，a[i]=b，同时终止for循环
	//若a[i] < b，执行i++，比较b和a[i+1]
	int lo = 0,hi = N-1 , mi = (lo+hi)/2;
    if (a[hi] <= b) {
		//若b不小于a[]中最大值a[hi]，则直接将b置入a[N]中
		a[N]=b;
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