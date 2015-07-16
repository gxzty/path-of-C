#include <stdio.h>
#include <malloc.h>

int main(int argc, char *argv[]){
	int a[3][3]={0};
	int i,j;
	for (i=0;i<=2 ;i++ ){
		for (j=0;j<=2 ;j++ ){
			scanf("%d",&a[i][j]);
		}
	}
	for (i=0;i<=2 ;i++ ){
	    for (j=0;j<=2 ;j++ ){
			if (a[i][j] != 0) printf("%d|",a[i][j]);
			else if (a[0][0] != a[0][1]+a[0][2]+a[1][0]+a[1][1]+a[1][2]+a[2][0]+a[2][1]+a[2][2])
			{
			}
		}
		printf("\n");
	}

/*	int a[9][3][3]={0};
	int i,j,k,n=0;
	for (i=0;i<=8 ;i++ ){
		for (j=0;j<=2 ;j++ ){
			for (k=0;k<=2 ;k++ ){
				scanf("%d",&a[i][j][k]);
				n++;
			}
			printf("\n");
		}
		printf("\n");
	}
	for (i=0;i<=8 ;i++ ){
		for (j=0;j<=2 ;j++ ){
			for (k=0;k<=2 ;k++ ){
				if (a[][][]){
				}
			    printf("%d|",a[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}*/
	return 0;
}
