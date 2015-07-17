/*
描述
现在给你N个数（0<N<1000），现在要求你写出一个程序，找出这N个数中的所有素数，并求和。

输入
第一行给出整数M(0<M<10)代表多少组测试数据
每组测试数据第一行给你N，代表该组测试数据的数量。
接下来的N个数为要测试的数据，每个数小于1000

输出
每组测试数据结果占一行，输出给出的测试数据的所有素数和

样例输入
3
5
1 2 3 4 5
8
11 12 13 14 15 16 17 18
10
21 22 23 24 25 26 27 28 29 30

样例输出
10
41
52
*/
#include <stdio.h>
#include <malloc.h>
#include <math.h>
int count=0;
int *sushu (int a[]){
    int m, n,i=0,max;
	m=a[count];
//    for(m=a[i]; m<=50; ){
//		for(n=2; n<max; n++){
//            if(m%n==0)       //什么条件下跳出当前循环
 //          break;          //这里应该退出当前循环了
//		}	
//        if(m == n)   //n循环结束后，如果m=n的话就输出m
    printf("|%d\n  ", m);
}

int main()
{
	int i,j;
	scanf("%d",&i);
		while (i--&&scanf("%d",&j)){
			int a[j];
			a[j]=(int)malloc(j*sizeof(int));
			while (j){
				count++;
				scanf("%d",&a[j-1]);
				printf("%d\n",a[j-1]);
				sushu(a);
				j--;
			}
		}
		printf("over\n");
	return 0;    
}
