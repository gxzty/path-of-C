#include <stdio.h>
/*
void pirntEach(int *nums,int len)
{
	int i;
	for(i=0;i<len;i++)
	{
		printf("第%d个元素是%d\n",i+1,nums[i]);
	}
}


//void printEach(int *nums)
//void printEach(int nums[])//即使定义成数组的样子
//也无法sizeof()获得数组字节数
{
	//sizeof(nums)计算指针的字节数
	//int len = sizeof(nums)/sizeof(int);
	//printf("%d,%d,%d\n",len,sizeof(nums),sizeof(int));
	int i;
	for(i=0;i<len;i++)
	{
		printf("第%d个元素是%d\n",i+1,nums[i]);
	}
}
*/
int main(int argc, char *argv[])
{
	int nums[] = {11,22,33,44,55,66};
	//printEach(nums);
	printEach(nums,sizeof(nums)/sizeof(int));
	    //如果nums是当前声明范围之内的数组的名字，
    //则sizeof(nums)就是数组的字节数（编译时）
	/*
	int i;
	int len = sizeof(nums)/sizeof(int);
	printf("%d,%d,%d\n",len,sizeof(nums),sizeof(int));
		//sizeof(nums)计算nums数组的字节数
		//sizeof(int)计算int类型的字节数
	for(i=0;i<len;i++)
	{
		printf("第%d个元素是%d\n",i+1,nums[i]);
	}
	*/

	return 0;
}
