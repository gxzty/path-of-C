#include <stdio.h>
#define arraymax 10 //数组元素个数
//建立一个结构体，用来存储最大元素x1和次大元素x2
struct max{
    int x1,x2;
};
//迭代,最优(最坏)时间复杂度O(n²)
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
	 i = 0;
	while ( i < arraymax){
	    printf("%d,",a[i++]);
	}
		putchar('\n');

    return x;
}

//迭代,最优时间复杂度O(n),最坏时间复杂度O(n²)
struct max twomax2(int a[],int lo,int hi ){
	struct max x;
    int i;
	x.x1 = a[lo] > a[lo+1] ? a[lo] : a[lo+1];
	x.x2 = a[lo] > a[lo+1] ? a[lo+1] : a[lo];
	printf("a[lo] = %d|x1 = %d|a[lo+1] = %d|x2 = %d\n",a[lo],x.x1,a[lo+1],x.x2);
	i = lo+2;
	while (i <= hi){		
		if (a[i] > x.x2){
			if ( a[i] > x.x1 ){
				x.x2 = x.x1;
				x.x1 = a[i];
			}
			else x.x2 = a[i];
		}
		i++;
	}
    return x;
}

int twomax3(int a,int lo,int hi ){
    int x1,x2;
    
    return x1,x2;
}

int main(int argc, char *argv[])
{
    int a[arraymax] = {0,33123,3,4,223,11,33,1,41,31} ;
	printf("%d|||",a[0]);
	struct max x = twomax(a,0,arraymax-1);
    printf("%d\n%d\n",x.x1,x.x2);
	putchar('\n');
	int i = 0;
	while ( i < arraymax){
	    printf("%d,",a[i++]);
	}putchar('\n');
	struct max x2 = twomax2(a,0,arraymax-1);
	printf("%d\n%d\n",x2.x1,x2.x2);
	return 0;
}
