#include <stdio.h>

int main(int argc, char *argv[])
{
    char s1[] = "hello YS";
    char *p = s1;
    p=p+2;//char是一个字节，向后移动2*1个字节
    printf("%s\n",s1);
    printf("%s\n",p);

    char *p2 = s1;
    p2+=5;
    int i = p2-p;
    printf("%d\n",i);
    //指针相减得到指针间相差的字节数

    int nums[] = {11,22,33,44,55};
    int iP1 = nums;
    int iP2 = nums;
    iP2=iP2+3;//三个单位
    printf("%d\n",iP1-iP2);
    //同类型指针相减，得到的是相距的数据类型的长度



    return 0;
}
