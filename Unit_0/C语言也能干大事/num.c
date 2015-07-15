#include <stdio.h>

int main(int argc, char *argv[])
{
	/*
	int num[] = {22,33,44,55,66};
	printf("%d,%d,%d,%d,%d\n",&(num[0]),&(num[1]),
		&(num[2]),&(num[3]),&(num[4]));
	int *ptr1 = &(num[0]);
	int *ptr2 = num;//!!!
	printf("ptr1=%d,ptr2=%d\n",ptr1,ptr2);

	char s1[] = "helloworld";//长度为5+5+1（隐含的\0占一个长度）
	char *ps1 = s1;
	*/

	int num[] = {33,55,88,99,22};
	int *p = num;
	printf("%d\n",*p);
	p++;//因为P是int类型的指针
		//所以向后移动了1*4个字节
	printf("%d\n",*p);
	p=p+2;//移动了2*4个字节
		  //跳过了88
	printf("%d\n",*p);
	p--;
	printf("%d\n",*p);



	return 0;
}
