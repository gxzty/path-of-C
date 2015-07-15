#include<stdio.h>
#include "GetLevel.c"//GetLevel.c是经验需求表


//定义一个结构体
typedef struct Hero{
    char Name[20];
    int Hp;
    int Atk;
}hero;

//根据输入编号，返回该编号对应的英雄名称
char GetName(int NameNumber){
    char Name;
    //输入错误的编号，则提示重新输入。
    if (NameNumber <=0 || NameNumber >=3){
    printf("Wrong NameNumber,please reinput (1-2):\n");
    scanf("%d",&NameNumber);
    GetName(NameNumber);
    }
    else{
	switch (NameNumber){
        case 1: Name = "Slark";break;
        case 2: Name = "Norton";break;
        }
    }
    return Name;
}


int main(){
    char Hero,Name;
    int NameNumber,Exp = 0,Hp,Atk,Level;
    printf("Please input 编号和经验:\n");
    scanf("%d,%d",&NameNumber,&Exp);
    Name = GetName(NameNumber);
    Level = GetLevel(Exp);
    hero Slark = {"Slark",100+(10*Level),13+(2*Level)};
    //hero Norton = {"Norton",150+(15*Level),8+(1*Level)};
    printf("Hero Name:%s\nLevel:%d\nHp:%d\nAttack:%d\n",Name,Level,Slark.Hp,Slark.Atk);
    return 0;
}
