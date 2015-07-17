//二分查找
#include <stdio.h>

//传入数组长度，数组和需要插入的数
int binary_search(int len, int num[], int request) {
    int left = 0, right = len - 1, mid;//num[0]是第一个元素，num[len -1]是最后一个元素
    while (left < right) {
        mid = (left+right)/2; 
        if (request <= num[mid]) { 
            right = mid; //如果插入数小于中间数，则将中间数设置为right
        } 
		else { 
            left = mid+1 ; //否则说明中间数仍
        }
    }
    if (request > num[len -1]) left++;
    return left;
}
int main() {
    int num[10] = {1, 3, 4, 5, 7, 8, 8, 9, 10, 13};
    printf("%d\n", binary_search(10, num, 2));
    return 0;
}