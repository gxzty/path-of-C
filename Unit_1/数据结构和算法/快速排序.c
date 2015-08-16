#include <stdio.h>


void qsort(int arr[],int l,int r){
	int i=l,j=r,k=arr[(l+r)>>1];
	while (i<j){
		while (arr[i]<k)i++;
		while (arr[j]>k)j--;
		if (i<=j){
			arr[i] = arr[i] + arr[j];
			arr[j] = arr[i] - arr[j];
			arr[i] = arr[i] - arr[j];
			i++;
			j--;
		}
	}
	if (l<j)qsort(arr,l,j);
	if (i<r)qsort(arr,i,r);
}

int main(int argc, char *argv[])
{
	int n;
	int a[10] = {5,3,1,2,6,9,7,8,10,4} ;
	n=0;
	while (n < 10){
	    printf("%d|",a[n++]);	
	}
	putchar('\n');
    qsort(a,0,10);
	putchar('\n');
	n = 0;
	while (n < 10){
	    printf("%d|",a[n++]);	
	}
	return 0;
}
