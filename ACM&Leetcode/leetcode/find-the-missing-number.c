#include <stdio.h>
/*
给出一个包含 0 .. N 中 N 个数的序列，找出0 .. N 中没有出现在序列中的那个数。
*/
int findMissing(int nums[], int lenNums) {
    // write your code here
    int  sureNumsSum , trueNumsSum ,i;
    sureNumsSum = (0 + lenNums) * (lenNums+1) / 2;
    trueNumsSum = 0;
    i = 0;
    while (i < lenNums) {
        trueNumsSum += nums[i];
        i++;
    }
    int missNum = sureNumsSum - trueNumsSum;
    return missNum;
}


int main(int argc, char *argv[])
{
    int a[6] = {0,1,2,3,5,6};
    printf("%d\n",findMissing(a,6));
    return 0;
}
