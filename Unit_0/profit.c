#include <stdio.h>
#define M 30*30*12

int main(int argc, char *argv[])
{
	float a=M,b=1+0.06,i=1;
	while (i++ <= 12){
		a = (a+M) * b;
	}
	printf("%g\n",a);
	return 0;
}
