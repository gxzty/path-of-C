#include <stdio.h>


int endsWith(char *str,char *substr)
{
    int strlen=0;
    while(*str!='\0')
    {
        str++;
        strlen++;
    }
/*
	for (int j=0;j<strlen;j++)
	{
		str--;
	}
	//通过最后几位字符对比
*/
    int substrlen=0;
    while(*substr!='\0')
    {
        substr++;
        substrlen++;
    }
    if(strlen < substrlen)
    {
        return 0;
    }
    int i;
    for(i=0;i<=substrlen;i++)
    {
        char ch1 = *str;
        char ch2 = *substr;
        if(ch1!=ch2)
        {
            return 0;
        }
        str--;
        substr--;
    }
    return 1;
}

 int main()

 {
    printf("%d\n",endsWith("rupeng","eng"));
    printf("%d\n",endsWith("rupeng","ing"));
    printf("%d\n",endsWith("rupeng","afasfasdfaing"));
	return 0;
 }