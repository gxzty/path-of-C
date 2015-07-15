#include <stdio.h>
#include <malloc.h>

int main(int argc, char *argv[])
{
	int a[9][3][3]={0};
	int i,j,k,n=0;
	for (i=0;i<=8 ;i++ )
	{
		for (j=0;j<=2 ;j++ )
		{
			for (k=0;k<=2 ;k++ )
			{
				a[i][j][k]=0;
				n++;
			    printf("%d|",a[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
