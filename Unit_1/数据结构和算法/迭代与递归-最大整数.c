#include <stdio.h>
#define arraymax 12 //数组元素个数
//建立一个结构体，用来存储最大元素x1和次大元素x2
struct max{
	int x1,x2;
};
//迭代
struct max twomax(int a[],int lo,int hi ){
    struct max x;
	int i,j=0,temp;
	while (j++ < 2){	
	    for (i=lo;i<hi ;i++ ){
		    if (a[i] > a[i+1]){
			    temp = a[i+1]; a[i+1] = a[i]; a[i] = temp;
		    }
	    }
	}
	x.x1 = a[hi]; x.x2 = a[hi-1];
    return x;
}

//递归
int twomax2(int a,int lo,int hi ){
    int x1,x2;
    
    return x1,x2;
}

int twomax3(int a,int lo,int hi ){
    int x1,x2;
    
    return x1,x2;
}

int main(int argc, char *argv[])
{
    int a[arraymax] = {1,2,11,2,3,4,5,6,7,0};
	struct max x = twomax(a,0,arraymax-1);
    printf("%d\n%d\n",x.x1,x.x2);
	return 0;
}
