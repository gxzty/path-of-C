#include <stdio.h>
#define true 1
#define false 0
typedef int bool;

bool isPalindrome(char s[], int len) {
    // Write your code here
    int left = 0;
    int right = len - 1;
    while (left < right) {  // 左边小于右边，未查完
        while (!((s[left] <= 'z' && s[left] >= 'a') || (s[left] <= 'Z' && s[left] >= 'A') || (s[left] <= '9' && s[left] >= '0'))) {  // 如果左不为字母和数字则left++;
            left++;
            if (left >= right) {
                return true;
            }
        }
        if (s[left] <= 'Z' && s[left] >= 'A') {  // 如果左为大写
            while (!((s[right] <= 'z' && s[right] >= 'a') || (s[right] <= 'Z' && s[right] >= 'A') || (s[right] <= '9' && s[right] >= '0'))) {  // 如果右不为字母和数字则right--;
                right--;
                if (left >= right) {
                    return true;
                }
            }
            if (!((s[left] - s[right] != 0) || (s[left] - s[right] != -32))) {
                return false;
            }
            left++;
            right--;
            continue;
        } else {  // 如果左为小写或者数字
            if (s[left] <= 'z' && s[left] >= 'a') {  // 如果左为小写
                while (!((s[right] <= 'z' && s[right] >= 'a') || (s[right] <= 'Z' && s[right] >= 'A') || (s[right] <= '9' && s[right] >= '0'))) {  // 如果右不为字母和数字则right--;
                    right--;
                    if (left >= right) {
                        return true;
                    }
                }
                if ((s[left] - s[right] != 0) && (s[left] - s[right] != 32)) {
                    return false;
                }
                left++;
                right--;
                continue;
            } else {   // 数字情况
                if (s[left] <= '9' && s[left] >= '0') {
                    while (!((s[right] <= 'z' && s[right] >= 'a') || (s[right] <= 'Z' && s[right] >= 'A') || (s[right] <= '9' && s[right] >= '0'))) {  // 如果右不为字母和数字则right--;
                        right--;
                        if (left >= right) {
                            return true;
                        }
                    }
                    if (s[left] != s[right]) {
                            return false;
                    }
                }
                left++;
                right--;
            }
        }
    }
    return true;
}

int main(int argc, char *argv[])
{
    char s[99] = "A mana plana canal: Panama";
    printf("%d\n",isPalindrome(s,28));
    return 0;
}
