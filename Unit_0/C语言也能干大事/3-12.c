#include <stdio.h>

typedef void(* intFunc)(int i);

void test1(int age)
{
	printf("test1:%d\n",age);
}
int test2(char *str,int i)
{
}

void foreachNums(int *nums,int len,intFunc func)
{
	int i;
	for(i=0;i<len;i++)
	{
		int n = nums[i];//*(nums+i)
		func(n);
	}
}

void printIt(int i)
{
	printf("value=%d\n",i);
}

int main(int argc, char *argv[])
{
	//test1(5);
	//intFunc f1 = test1;//intFunc类型的函数指针指向test1
	//f1(8);//执行f1函数指针指向的代码
	//intFunc f2 = test2;
	int nums[]={1,5,666,23423,223};
	foreachNums(nums,sizeof(nums)/sizeof(int),printIt);
	return 0;
}
