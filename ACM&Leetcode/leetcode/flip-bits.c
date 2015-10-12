#include <stdio.h>
//如果要将整数A转换为B，需要改变多少个bit位？

int bitSwapRequired(int a, int b) {
    // write your code here
    int required = 0;
    while (a != 0 || b!= 0) {
        if ((unsigned int)a % 2 != (unsigned int)b % 2) {
            required++;
        }
        a = (unsigned int)a>>1;
        b = (unsigned int)b>>1;
    }
    return required;
}

int main(int argc, char *argv[])
{
    
    return 0;
}
