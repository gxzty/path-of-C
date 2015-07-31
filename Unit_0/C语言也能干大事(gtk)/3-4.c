#include <stdio.h>

int main(int argc, char *argv[])
{
	int i1 = 88888888;//00000101,01001100,01010110,00111000
	/*
	short *p2 = &i1;
	//short &p2 = (short *)&i1;
	//不做强制转换会报warning，但是没错
	printf("%d\n",*p2);
	//得到22072，就是01010110,00111000
	p2++;
	printf("%d\n",*p2);
	//得到1356，就是00000101,01001100
	*/

	char *ch = (char *)&i1;
	printf("%d,%d,%d,%d\n",ch[0],ch[1],ch[2],ch[3]);
	printf("%d,%d,%d,%d\n",*(ch+0),*(ch+1),*(ch+2),*(ch+3));
	//ch[n]→*(ch+n)
	/*
	int nums[] = {11,22,33,44,55};
	int *p = nums;
	printf("%d\n",p[3]);
	printf("%d\n",*(p+3));
	*/
	
	
	return 0;
}
