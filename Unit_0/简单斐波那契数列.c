//计算2/1,3/2,5/3,8/5,13/8,21/13...前N项和

#include <stdio.h>
#define N 20

int main(int argc, char *argv[])
{
	float f,g;
	int i=0;
	float sum=0;
	f=1.0;
	g=2.0;//1 2 3 5 8 13 21...
	printf("f = %g\ng = %g\n",f,g);
	while (i++ < N){
		sum += g/f;
		g = g + f;
		f = g - f;
	}
	printf("sum = %f\n",sum);
	return 0;
}