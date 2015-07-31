#include <stdio.h>

typedef struct _Person
{
    char *name;
    int age;
}Person;

void zeromem(void *date,int byteSize)
{
	//char就是一个字节
	//而计算机中是以字节为单位进行处理的
	char *ptr = (char *)date;
	int i;
	for (i=0;i<byteSize ; i++)
	{
		*ptr = 0;
		ptr++;
	}
}


int main(int argc, char *argv[])
{
	int nums[20];
	zeromem(nums,sizeof(nums));
	char chs[20];
	zeromem(chs,sizeof(chs));
	int i;
	for (i=0;i<sizeof(nums)/sizeof(int) ;i++ )
	{
	printf("%d|",nums[i]);
	}
	Person p1;
	zeromem(&p1,sizeof(Person));
	printf("\n%d\n",p1.age);
	return 0;
}
