/* 用二维数组实现矩阵的转置 */
#include <stdio.h>
void main()
{
	int i,j,ROW,COL;
	printf("Enter how big the matrix you want build (ex. 3*4):\n");
	scanf("%d*%d",&ROW,&COL);
	int matrixA[ROW][COL],matrixB[COL][ROW];
	printf("Enter elements of the matrix A,%d*%d:\n",ROW,COL);
	for( i=0; i<ROW; i++ )
	{
		for( j=0; j<COL; j++ )
		{
			scanf("%d",&matrixA[i][j]);
		}
	}

	for( i=0; i<ROW; i++ )
	{
		for( j=0; j<COL; j++ )
		{
			matrixB[j][i] = matrixA[i][j];
		}
	}

	printf("Matrix B is %d*%d:\n",COL,ROW);
	for( i=0; i<COL; i++ )
	{
		for( j=0; j<ROW; j++ )
		{
			printf("%8d",matrixB[i][j]);
		}
		printf("\n");
	}
	printf("\n  Press Any Key to Quit...  \n");
}
