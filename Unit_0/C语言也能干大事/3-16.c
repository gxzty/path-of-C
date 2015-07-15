#include <stdio.h>
#include <stdlib.h>
#define intLen sizeof(int)

int *getDate()
{
	int *nums=(int *)malloc(intLen*3);
	nums[0]=1;
	nums[1]=2;
	nums[2]=3;
	return nums;
}

int *getDate2()
{
	int *nums=(int *)malloc(intLen*3);
	nums[0]=9;
	nums[1]=8;
	nums[2]=7;
	return nums;
}

char *getStr()
{
	static char str[] = "asdfjkwioej";
	return str;
}



int main(int argc, char *argv[])
{
	//void *malloc(分配的字节数)
	/*
	int *nums = (int *)malloc(intLen*10);
	nums[0]=1;
	nums[1]=8;
	printf("%d|%d|",nums[0],nums[1]);
	free(nums);
	printf("%d|%d",nums[0],nums[1]);
	*/
	int *nums = getDate();
	int *nums2 = getDate2();
	printf("%d|%d|%d\n",nums[0],nums[1],nums[2]);
	printf("%d|%d|%d\n",nums2[0],nums2[1],nums2[2]);
	free(nums);
	free(nums2);
	char *str = getStr();
	return 0;
}
