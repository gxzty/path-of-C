#include <stdio.h>

void q_sort(int *a, int len){
    int K = 0 , i = 0, j = len-1;//定义Key和哨兵i和j
	int temp,n;
		while (i != j){
		    while (a[K] <= a[j]  && i<j){j--;}
		    while (a[i] <= a[K] && i<j){i++;}
		    if (a[j] <a[K] && a[K] < a[i]  ){
			    temp = a[j]; a[j] = a[i]; a[i] = temp;
		    }
	     }
	    temp = a[j]; a[j] = a[K]; a[K] = temp;
}


int main(int argc, char *argv[])
{
	int n;
	int a[10] = {5,3,6,2,1,9,7,8,10,4} ;
	n=0;
	while (n < 10){
	    printf("%d|",a[n++]);	
	}
	putchar('\n');
    q_sort(a,10);
	putchar('\n');
	return 0;
}
