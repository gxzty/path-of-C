/*
Given an array of integers, every element appears twice except for one. Find that single one.

Note:
Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?
*/

//只有一个数出现一次，其他都是两次，找到这个数
#include <stdio.h>

int singleNumber(int* nums, int numsSize) {
    //异或位运算，复杂度O(n)
    int result = 0 , i = 0;
    for (i = 0; i < numsSize ; i++ ){
        result ^= nums[i];
    }
    return result;
}

int main(int argc, char *argv[])
{
    int a[21] = {17,12,5,-6,12,4,17,-5,2,-3,2,4,5,9,-3,-4,15,15,-4,-5,-6};
    printf("%d\n",singleNumber(a,21));
    return 0;
}
