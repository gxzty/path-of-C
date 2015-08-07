#include <stdio.h>
#include "InvSqrt.c"

int main(int argc, char *argv[])
{
	float a,b;
	a = 4;
	b = InvSqrt(a);
	printf("%g\n",b);
	return 0;
}
