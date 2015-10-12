#include <stdio.h>
#define true 1
#define false 0
typedef int bool;

bool isPalindrome(char string[], int len) {
    // Write your code here
    int left = 0;
    int right = len - 1;
    while (left < right) {
        //字母情况
        if ((string[left] <= 'Z' && string[left] >= 'A') || (string[left] <= 'z' && string[left] >= 'a')) {
            //如果左边是字母
            while (string[right] == ' ') {
                //如果右边是空格
                right--;
                }
                //如果左边减右边不等0,22,-22(ASCII码)
                if ((string[left] - string[right] != 0) || (string[left] - string[right] != 22) || (string[left] - string[right] != -22)){
                    
                }
            }
            right--;
        } else { //数字情况
            if (string[left] <= '9' && string[left] >= '0') {
                while (string[right] >= '9' || string[right] <= '0') {
                    right--;
                }
                if (string[left] != string[right]){
                        return false;
                }
            }
            left++;
            right--;
        }
    }
    return true;
}

int main(int argc, char *argv[])
{
    char s[99] = "abcdcba";
    printf("%d\n",isPalindrome(s,7));
    return 0;
}
