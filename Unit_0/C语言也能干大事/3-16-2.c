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
	char *endPtr=ptr;//��β��ָ��
	//ptr�ƶ������ַ����Ľ�β
	//�ٰ�ptr�ƶ�����.����λ��
	while(*ptr!='.')
	{
		ptr--;
	}
	memcpy(name,filename,(ptr-filename)*sizeof(char)) ;
	memcpy(ext,ptr+1,(endPtr-ptr)*sizeof(char));
}

int main(int argc, char *argv[])
{
	char str[]="[TK-300]��.Ů.avi";
	char name[20]={0};
	char ext[20]={0};
	parseFileName(str,name,ext);
	printf("�ļ���:%s\n��׺:%s",name,ext);
	return 0;
}
