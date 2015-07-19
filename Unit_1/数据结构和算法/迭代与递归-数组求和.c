#include <stdio.h>
#define arraymax 12 //数组元素个数
//迭代求和
int arraysum (int a[],int lo,int hi){
    int sum=0;
	while (lo <= hi) sum+=a[lo++];
    return sum;
}

//递归求和
int arraysum2 (int a[],int lo,int hi){
	int sum = 0;
    if (lo <= hi) sum = arraysum2(a,lo+1,hi) + a[lo];
    return sum;
}

//二分迭代？并没有二分迭代。。
int arraysum3 (int a[],int lo,int hi){
	int sum = 0;
    while(lo < hi){
	    sum += a[lo++]+a[hi--];//O(n/2) == O(n) !!!!
	}
    if (lo == hi) sum += a[lo];
    return sum;
}

//二分递归
int arraysum4 (int a[],int lo,int hi){
	int sum = 0, mi = (lo + hi)>>1;
	if(lo == hi) return a[lo]; //当左和右相等的时候（即是递归到最下层）返回递归基arraysum4(a,lo,lo) ！！！！
	sum = arraysum4(a,lo,mi) + arraysum4(a,mi+1,hi); //2*O(n/2) = O(n)
	return sum;
}


int main(int argc, char *argv[])
{
	int a[arraymax] = {1,2,1,2,3,4,5,6,7,0};
    int sum;
	sum = arraysum(a,0,arraymax-1);
	printf("%d|",sum);

	sum = arraysum2(a,0,arraymax-1);
	printf("%d|",sum);

	sum = arraysum3(a,0,arraymax-1);
	printf("%d|",sum);

	sum = arraysum4(a,0,arraymax-1);
	printf("%d|",sum);

	putchar('\n');
	return 0;
}
