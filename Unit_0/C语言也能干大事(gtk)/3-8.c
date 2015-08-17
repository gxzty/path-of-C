#include <stdio.h>

int main(int argc, char *argv[])
{
    /*
    //通过memset初始化数组
    char str[20];//这里申请的20个字节可能被用过
    //printf("%s\n",str);
    //memset(str,88,sizeof(str));
    //str[19]='\0';//并不能看懂
    //printf("%s\n",str);
    memset(str,0,sizeof(str));
    */
    //char str[20]={3,5,6};//前三个是3,5,6，其他的都是0
    char str[20]={};//也可以，但是最好str[20]={0};
    int i;
    for (i=0;i<sizeof(str)/sizeof(char) ;i++ )
    {
        printf("%d|",str[i]);
    }

    return 0;
}
