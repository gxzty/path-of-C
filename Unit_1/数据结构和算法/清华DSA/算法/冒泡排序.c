//冒泡排序
#include <stdio.h>
#include <stdio.h>

int bubblesort(int a[], int n){
    int i,temp,sorted=-1;
	int j = n;//将元素总个数存入j中，因为n要做变动
	while (sorted != 1){//定义一个sorted，若sorted=-1则为排序未完成，当sorted=1时判定为排序完成
	    sorted =1;	//假定排序完成
		for (i=1;i<n;i++ ){//开始遍历，检查排序是否真完成
			if (a[i-1]>a[i]){//若发现某元素大于其后元素，则交换两个元素
    		    printf("%d|%d|%d|%d\n",j-n+1,i,a[i-1],a[i]);//第几次循环，当前循环比较到第几位元素，两个比较元素分别是
				temp = a[i]; a[i] = a[i-1]; a[i-1]=temp;
				sorted = -1;//并且标记sorted仍为-1
			}
		}
		putchar('\n');
		n--;//每次循环都不必再循环整遍，每次都会将最大元素后置，所以只要循环到上次循环末前一个位置就好
	}
    n=j;//将总数目取出，重新赋给n
    printf("%d\n\n",n);//显示这是个多少元素组成的数组
	while (~j) printf("%d|",a[n-j--]); //逐个打印排序好的数组
}


int main(int argc, char *argv[])
{
	int random;
	srand((unsigned)time(NULL));//创建时间种子
	random=rand()%(100-1+1)+1;//创建1-100间的随机数
	int a[random] ;//随即生成一个1-100元素数组
	bubblesort(a,random);//冒泡排序
	putchar('\n');
	return 0;
}
