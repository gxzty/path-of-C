#include <stdio.h>
#define N 5
#define INSERT 2

int main(int argc, char *argv[])
{
    int count = N;  // 现存了N个数
	int a[6] = {1, 3, 5, 7, 9 }; //a[0]~a[4],a[5]为INSERT预留
	int b=INSERT;
	int i,j,k;
    //如果i小于count,比较b和a[i]谁大，若i=count，则执行a[i]=b;count++;
	//若a[i]>=b，a[i]后所有元素后移一位，a[i]=b，同时终止for循环
	//若b>a[i]，执行i++，比较b和a[i+1]
	int lo = 0,hi = N-1 , mi = (lo+hi)/2;
	printf("%d|%d\n%d|%d\n",mi+1,a[mi],mi+2,a[mi+1]);
    while ( b < a[mi] || b > a[mi+1] ){
		//二分查找
	    if ( b < a[mi]) hi = mi;
	    else if (b > a[mi]) lo = mi; 
		mi = (lo+hi)/2;
    }
    for (j=count;j>mi ;j-- ){
		a[j]=a[j-1]; a[j-1]=0;
	}
	a[mi] = b;count++;
	/*if (b > a[N-1]) {
		a[N]=b;
	    count++;
	}*/
	for (k=0;k<count;k++ ){
		printf("%d|",a[k]);
	}
	printf("\n%d\n",count);
	return 0;
}