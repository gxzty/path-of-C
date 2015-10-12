#include <stdio.h>

//整数开方

int sqrtx(int x) {
    // write your code here，用的二分
    if (x <= 1) {
        return x;
    }
    int left = 1;
    int right = x;
    int mid = 0;
    while (left <= right) {
        mid = left + ((right - left)>>1);
        if (mid == x / mid) {
            return mid;
        } else {
            if (mid < x / mid) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
    }
    return right;
}

int main(int argc, char *argv[])
{
    printf("%d\n",sqrtx(5444));
    return 0;
}
