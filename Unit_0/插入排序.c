#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int a[] = {1, 3, 5, 7, 9 };
    int count = 5;  // 现存了5个数
    int b = 10;
	int i,j=count,k,temp;
	for (i=0;i<=count;i++)//数组下标
	{
		if (b<a[0])
		{
			for (;j>=1 ;j-- )
			{
				swap (a[j],a[j-1]);
			}
			a[0] = b;
			count++;break;
		}
		else if (b>=a[i] && b<a[i+1] && i<count)//当b大于a[i]且小于a[i+1]
		{
			//交换第a[j]个元素和第a[j-1]个
            for (;j>=i+1 ;j-- )
            {
				a[j] = a[j-1];
            }
			a[i+1] = b;
			count++;break;
		}
		
		else if (i=count)
		{
			a[i] = b;
			count++;break;
		}
	}
	for (k=0;k<count;k++ )
	{
		printf("%d|",a[k]);
	}
	printf("\n%d\n",count);
	return 0;
}
