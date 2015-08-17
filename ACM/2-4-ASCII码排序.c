/*
描述
输入三个字符（可以重复）后，按各字符的ASCII码从小到大的顺序输出这三个字符。
输入
第一行输入一个数N,表示有N组测试数据。后面的N行输入多组数据，每组输入数据都是占一行，有三个字符组成，之间无空格。
输出
对于每组输入数据，输出一行，字符中间用一个空格分开。
样例输入
2
qwe
asd
样例输出
e q w
a d s
*/
#include <stdio.h>

int main(int argc, char *argv[])
{
    char ch[3] = {0},temp;
    int i = 0,n,flag;
    scanf("%d",&n);
    while (n--){
        scanf("%s",&ch);
        flag = 1;
        while (flag){
            flag = 0;
            i = 0;
            while (i < 2){
                if (ch[i+1] < ch[i] ){
                    temp = ch[i+1]; ch[i+1] = ch[i]; ch[i] = temp; 
                    flag = 1;
                }
                i++;
            }
        }
        printf("%c %c %c\n",ch[0],ch[1],ch[2]);
    }
    return 0;
}
