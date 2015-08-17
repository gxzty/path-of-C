//二分查找
#include <stdio.h>
#define LENGTH 10
#define INSERT 8

//传入数组长度，数组和需要插入的数
int binary_search(int len, int num[], int request) {
    int left = 0, right = len - 1, mid;//num[0]是第一个元素，num[len -1]是最后一个元素
    while (left < right) {
        mid = (left+right)/2; 
        if (request <= num[mid]) right = mid; //如果插入数小于中间数，则将right边界设置为mid
        else left = mid+1 ; //否则说明中间数仍小于插入数，则将left边界设置为mid+1
    }
    if (num[len -1] < request) left++;
    return left;//返回第几位
}
int main() { 
    int num[LENGTH] = {1, 3, 4, 5, 7, 8, 8, 9, 10, 13};
    printf("%d\n", binary_search(LENGTH, num, INSERT));
    return 0;
}