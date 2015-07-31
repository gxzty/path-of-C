#include <stdio.h>

int main(int argc, char *argv[])
{
	int i1=555;
	int i2=666;
	int *p = &i1;
	printf("%d,%d\n",&i1,&i2);
	p--;
	int i3=*p;
	//从p当前指向的内存中取出4个字节，解释成int
	printf("%d\n",i3);

	p--;
	printf("%d\n",*p);
	p-=99999;
	printf("%d\n",*p);

	return 0;
}
