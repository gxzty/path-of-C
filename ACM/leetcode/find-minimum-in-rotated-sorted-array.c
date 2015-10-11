#include <stdio.h>
/*
假设一个旋转排序的数组其起始位置是未知的（比如0 1 2 4 5 6 7 可能变成是4 5 6 7 0 1 2）。

你需要找到其中最小的元素。

你可以假设数组中不存在重复的元素。
*/

//粗暴版，可以用二分法降低时间复杂度
int findMin(int num[], int len) {
    // write your code here
    int maxNum = num[0];
    for (int i = 1;i < len;i++) {
        if (maxNum > num[i]) {
            return num[i];
        }
    }

int main(int argc, char *argv[])
{
    
    return 0;
}
