#include <stdio.h>
int main() 
{ 
    /* 定义需要计算的日期 */
    int year = 2008;
    int month = 8;
    int day = 8;
	int i,n;

	switch (month)
	{
	    case 1: n=0;break;
	    case 2: n=31;break;
	    case 3: n=31+28;break;
	    case 4: n=31+28+31;break;
	    case 5: n=31+28+31+30;break;
	    case 6: n=31+28+31+30+31;break;
	    case 7: n=31+28+31+30+31+30;break;
	    case 8: n=31+28+31+30+31+30+31;break;
	    case 9: n=31+28+31+30+31+30+31+31;break;
	    case 10: n=31+28+31+30+31+30+31+31+30;break;
	    case 11: n=31+28+31+30+31+30+31+31+30+31;break;
	    case 12: n=31+28+31+30+31+30+31+31+30+31+30;break;
	    default : printf("月份输入错误!");break;
	}	
	n+=day;
	if ((year%4==0 && year%100 != 0)||year%400 == 0) n++;
	printf("%d年%d月%d日是该年的第%d天\n",year,month,day,n);




	return 0;
} 
