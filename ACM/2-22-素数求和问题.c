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

int sushu (int a){
	int j , flag = 1;
	if (a <= 1){
		flag = 0;
	}
	else if (a == 2){
		flag = 1;
	}
	else {
		for (j = 3;j < a ;j+=2 ){
		    if (a == a/j*j){
			    flag = 0 ;return 0; break;
		    }
	    }
	}
	if (flag){
		return a;
	}
	else return 0;
}


int main()
{
	int n , count, i,b,sum;
	scanf("%d",&n);
	while (n--){
		scanf("%d",&count);
	    i = 0;
		sum = 0;
	    int num[1000] = {0};
		while (i < count){
            scanf("%d",&num[i]);
            b = sushu(num[i]);
			sum += b;
			i++;
		}
		printf("%d\n",sum);
	}
	return 0;    
}
