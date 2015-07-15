#include <stdio.h>

int main(int argc, char *argv[])
{
	int nums[]={3,5,6,7,9};
	void *ptr1 = nums;
	//int i = *ptr1;
	int *ptr2 = nums;
	printf("%d,%d\n",ptr1,ptr2);
	int i = *ptr2;
	printf("%d\n",i);
	
	
	return 0;
}
