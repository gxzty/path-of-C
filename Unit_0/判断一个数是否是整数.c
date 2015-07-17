#include <stdio.h>

int main(int argc, char *argv[])
{
	float a[20]={0.0};
	int i=1;
	printf("input %d numbers:\n",i);
	scanf("%f",&a[i]);
	while (a[i] != 0){
		i++;
		printf("input %d number:\n",i);
	    scanf("%f,%d",&a[i],i);
	}
	int k=1;
	for (;k<i ;k++ ){
		if (a[k] == (float)((int)(a[k]))) printf("%d is zhengshu----YES\n",(int)a[k]);
		else printf("%g is xiaoshu----NO\n",a[k]);
	}
	return 0;
}
