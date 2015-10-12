#include <stdio.h>

int isUnique(char str[] , int len) {
    // write your code here
    int index = 0;
    while (index < len - 1) {
        int i = 1;
        while (index + i < len) {
            if (str[index] == str[index + i]) {
                return 0;
            }
            i++;
        }
        index++;
    }
    return 1;
}

int main(int argc, char *argv[])
{
    char str[3] = {'a','b','b'};
    printf("%d\n",isUnique(str,3));
    return 0;
}
