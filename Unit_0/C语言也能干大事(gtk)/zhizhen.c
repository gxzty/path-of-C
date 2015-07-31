#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 5;
	printf("%d\n",&i);
	/*
	char c1 = 'a';
	int ic1 = &c1;
	printf("%d\n",ic1);
	*/
	int *iPtr = &i;//星号和类型在一起就是声明
	printf("%d\n",&iPtr);
	int i1 = *iPtr;//取iPtr指针指向的内存中的数据
	//类型化的指针，知道从内存中取几个字节
	printf("%d\n",i1);

	*iPtr = 100;//把100存到iPtr指向的内存中
	printf("i=%d\n",i);

	/*
	char c1 = 'a';
	char *c1p = &c1;
	char c2 = *c1p;
	printf("%d\n",c2);
	*/
	return 0;
}
