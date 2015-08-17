#include <stdio.h>
//#include <conio.h>替换头文件，用windows.h替换conio.h
#include <windows.h>

void main(void)
{
    int i,j;// 定义相乘数字i,j
    //clrscr();替换清屏函数，用system("cls");代替clrscr();
    system("cls");
    //使用for循环
    printf("!!!!!!!乘法口诀表!!!!!!!\n\n");
    for (i=9;1 <= i;i--){
        for (j=1;j<=i;j++){
            printf("%d*%d=%d  ",i,j,i*j);
        }
        printf("\n");
    }
    
    /*
    x=9;
    y=5;
    for(i=1;i<=9;i++)
    {
        gotoxy(x,y);
        printf("%2d ",i);
        x+=3;
    }
    x=7;
    y=6;
    for(i=1;i<=9;i++)
    {
        gotoxy(x,y);
        printf("%2d ",i);
        y++;
    }
    x=9;
    y= 6;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9;j++)
        {
            gotoxy(x,y);
            printf("%2d ",i*j);
            y++;
        }
        y-=9;
        x+=3;
    }
    */
}





















