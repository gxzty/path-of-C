#include <stdio.h>

void pirntEach(int *nums,int len)
{
    int i;
    for(i=0;i<len;i++)
    {
        printf("第%d个元素是%d\n",i+1,nums[i]);
    }
}

int main(int argc, char *argv[])
{
    int nums[] = {11,22,33,44,55,66};
    printEach(nums,sizeof(nums)/sizeof(int));
    return 0;
}