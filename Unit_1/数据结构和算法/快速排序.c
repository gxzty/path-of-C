#include <stdio.h>

void q_sort(int *a, int len){
    int k = 0 , i = k+1, j = len-1;//定义key和哨兵i和j
    
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
    q_sort(a,10);
	putchar('\n');
	n = 0;
	while (n < 10){
	    printf("%d|",a[n++]);	
	}
	return 0;
}
