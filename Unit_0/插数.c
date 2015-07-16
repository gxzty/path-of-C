#include <stdio.h>
int main(int argc, char *argv[])
{
    int count = 5;  // 现存了5个数
	int a[6] = {1, 3, 5, 7, 9 };
	int b=6;
	int i,j,k;
    //如果i小于count,比较b和a[i]谁大，若i=count，则执行a[i]=b;count++;
	//若a[i]>=b，a[i]后所有元素后移一位，a[i]=b，同时终止for循环
	//若b>a[i]，执行i++，比较b和a[i+1]
    for (i=0;i<count ;i++ ){
		if (b<a[i]){
			for (j=count-1;j>=i ;j-- ){
				a[j+1]=a[j]; a[j]=0;
			}
			a[i] = b;count++;break;
		}
    }
	if (i == count) {
		a[i]=b;
	    count++;
	}
	for (k=0;k<count;k++ ){
		printf("%d|",a[k]);
	}
	printf("\n%d\n",count);
	return 0;
}