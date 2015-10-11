#include <stdio.h>
#define false 0
#define true 1
typedef int bool;

//检查一个数是否是2的次幂


bool checkPowerOf2(int n) {
    // write your code here
    if (n < 0) {
        return false;
    }
    int numOnes = 0;
    while (n) {
        if (n % 2 == 1) {
            numOnes+=1;
       }
        n = n>>1;
    }
    if (numOnes != 1) {
        return false;
    }
    return true;
}

int main(int argc, char *argv[])
{
    int i = 0;
    while (i < 100) {
        printf("%d|",checkPowerOf2(i));
        i++;
    }
    return 0;
}
