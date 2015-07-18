//冒泡排序
#include <stdio.h>

int bubblesort(int a[], int n){
    int i,temp,sorted,j=n;
	for (sorted = -1 ; !sorted == -1  ; n+=0 ){//定义一个sorted，当sorted=1时判定为排序完成
		for (i =1;i<n ;i++ ){//开始遍历
			if (a[i-1]>a[i]){//若发现某元素大于其后元素，则交换两个元素
				temp = a[i]; a[i] = a[i-1]; a[i-1]=temp;
				sorted = -1;//并且标记sorted仍为-1
			}
			else sorted = 1;
		}
    }
	n=j;
	while (j != 0){
		printf("%d|",a[n-j]);
		j--;
	}
}


int main(int argc, char *argv[])
{
	int a[10] = {2,3,1,4,6,2,9,3,5,7};
    int n = 10,i=n;
	bubblesort(a,10);
	putchar('\n');
	return 0;
}
