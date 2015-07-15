//计算2/1,3/2,5/3,8/5,13/8,21/13...前N项和

#include <stdio.h>
#define N 1

int main(int argc, char *argv[])
{
	float a[N+1]={0};
	int i=0;
	float sum=0;
	a[0]=1.0;
	a[1]=1.0;//1 2 3 5 8 13 21...
	printf("a[0] = %f\na[1] = %f\n",a[0],a[1]);
	if (N<=1)    sum = a[i+2] / a[i+1] ; 
	else {
	    for (;i<=N-2;i++ ){
	        a[i+2] = a[i+1] + a[i];
			printf("a[%d] = %f\n",i+2,a[i+2]);
			sum = sum + a[i+1]/a[i];
			printf("sum = %f\n",sum);
	    }
	}
	printf("sum = %f\n",sum);
	return 0;
}