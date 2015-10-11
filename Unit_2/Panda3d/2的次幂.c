#include <stdio.h>
#define false 0
#define true 1
typedef int bool;

bool checkPowerOf2(int n) {
    // write your code here    
    int numOnes = 0;
    if (n < 0){
        return false;
    }
    while (n) {
        if (n % 2 == 1) {
            numOnes+=1;
        }
        n = n>>1;
    }
    if (numOnes != 1){
        return false;
    }
    return true;
}

int main(int argc, char *argv[])
{
    int i = 0 ;
    while (i <= 1024){
        if (checkPowerOf2(i)){
            printf("i = %4d , true\n" , i);
            i++; continue;
        }
        i++;
    }
    return 0;
}
