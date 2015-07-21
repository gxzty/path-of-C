
#include <stdio.h>
int main()
{
	char ch,nch;
	int count;
	int k;

	printf("Please input a string with a # in the end.\n");
	scanf("%c",&ch);
	while(ch != '#')//输入#结束循环
	{
		if('0' <= ch && ch <= '9')
		{
			count = ch-'0'+1;//没看太懂这要干什么，二进制减去00000000 00000000 00000000 00000000，再加上00000000 00000000 00000000 00000001？
			scanf("%c",&nch);
			for(k=0;k<count;k++)
				printf("%c",nch);
		}
		else
			printf("%c",ch);
		scanf("%c",&ch);
	}
	printf("#\n");
	return 0;
}
