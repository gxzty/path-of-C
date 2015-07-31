#include <stdio.h>

int main(int argc, char *argv[])
{
	char str1[] = "hello world\n";
	char str2[30];
	strncpy(str2,str1,sizeof(str1)/sizeof(char));
	strncat(str2,str1,sizeof(str1)/sizeof(char));
	//strcpy(str2,str1);
	//strcat(str2,str1);
	//恶意攻击者可以创造一个不包含\0的字符串
	//然后让数据写入数组之外的程序空间内
	//缓冲区溢出漏洞
	printf("%s\n",str2);
	return 0;
}
