#include <stdio.h>
//计算一个数的二进制表示中有几个1

int countOnes(int num) {
    // write your code here
    int numOnes = 0;
    while (num) {
        if (num % 2 == 1) {
            numOnes+=1;
        }
        num = num>>1;
    }
return numOnes;
}


int main(int argc, char *argv[])
{
    printf("%d\n",countOnes(99));
    return 0;
}
