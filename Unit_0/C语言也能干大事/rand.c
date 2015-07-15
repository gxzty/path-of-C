#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int num[]={};
	int i;
	for (i=0;i<30 ;i++ )
	{
		num[i]= rand()%20;
		printf("%d\n",num[i]);
	}
	

	return 0;
}
