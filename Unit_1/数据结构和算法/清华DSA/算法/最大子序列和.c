#include <stdio.h>
#define SIZE 6

int maxsub(int a[],int size){
	// {1,1,1,1,-2,3};
    int i , max = 0 , temp_max = 0;
    for (i = 0;i < size ;i++ ){
        temp_max += a[i];
		if (temp_max > max){
		    max = temp_max;
		}
		else if (temp_max < 0){
		    temp_max = 0;
		}
    }
	return max;
}



int main(int argc, char *argv[])
{
	int a[SIZE] = {1,1,1,1,-2,3};
	printf("%d\n",maxsub(a,SIZE));
	return 0;
}