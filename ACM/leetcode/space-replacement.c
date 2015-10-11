#include <stdio.h>

//将一个句子中的空格替换为"%20"
//如"hello world"---->"hello%20world"

char* replaceBlank(char string[], int length) {
        int count = 0;
        int spaceNumbers = 0;
        while (string[count] != '\0') {
            if (string[count] == ' ') {
                spaceNumbers += 1;
            }
            count++;
        }
        int movePos = 2*spaceNumbers;
        string[count+movePos] = '\0';
        while (movePos > 0) {
            if (string[count-1] == ' ') {
                string[count-1+movePos] = '0';
                movePos--;
                string[count-1+movePos] = '2';
                movePos--;
                string[count-1+movePos] = '%';
                count--;
            }
            string[count-1+movePos] = string[count-1];
            count--;
        }
        return &string[0];
}

int main(int argc, char *argv[])
{
    char s[200] = {"hello world hi34902 f32 32 4134"};
    char* ok ;
    ok = replaceBlank(s,11);
    printf("%s",ok);
    return 0;
}
