#include <stdio.h>
int main()
{
    /* 定义需要计算的日期 */
    int year,month,day,n;
    int m = 1,y;
    printf("input date like year-month-day (input 0-0-0 to finish):\n");
    while (scanf("%d-%d-%d",&year,&month,&day),(year||month||day)){
        y =((year%4 == 0 && year%100 != 0) || year%400 == 0);
        while ( day <= 0 || 31 < day || (month == 2 && 28+y < day) || ((month == 4 || month == 6 || month == 8 || month == 9 || month == 11 || month == 12 ) &&  30 < day)){
            printf("\nWrong day ! \n\ninput date like year-month-day (input 0-0-0 to finish):\n");
            scanf("%d-%d-%d",&year,&month,&day);
            y =((year%4 == 0 && year%100 != 0) || year%400 == 0);
        }
        switch (month){
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
            default : printf("Wrong month !\n");m = 0;break;
        }
        n+=day;
        if ( y && 2 < month ) n++;
        if ( m ) printf("%d\n\n",n);
        printf("input date like year-month-day (input 0-0-0 to finish):\n");
    }
    return 0;
}