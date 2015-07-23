#include <stdio.h>

int main(int argc, char *argv[])
{
	float a=0,b=1+0.06/12,i=0;
	while (i++ <= 240){
		a = (a+1000) * b;
	}
	printf("%g\n",a);
	return 0;
}
