#include <stdio.h>
#include <string.h>

void parseFileName( char *filename,
	char *name,char *ext)
{
	char *ptr=filename;
	while(*ptr != '\0')
	{
		ptr++;
	}
	char *endPtr=ptr;//结尾的指针
	//ptr移动到了字符串的结尾
	//再把ptr移动到“.”的位置
	while(*ptr!='.')
	{
		ptr--;
	}
	memcpy(name,filename,(ptr-filename)*sizeof(char)) ;
	memcpy(ext,ptr+1,(endPtr-ptr)*sizeof(char));
}

int main(int argc, char *argv[])
{
	char str[]="[TK-300]美.女.avi";
	char name[20]={0};
	char ext[20]={0};
	parseFileName(str,name,ext);
	printf("文件名:%s\n后缀:%s",name,ext);
	return 0;
}
