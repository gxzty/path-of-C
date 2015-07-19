#include<stdio.h>
#include <malloc.h>
#include "GetLevel.c"//GetLevel.c是经验需求表

int count;
//定义一个结构体
typedef struct Hero{
    char Name[20];
    int Exp,Level,Hp,Atk;
	struct Hero *next;//TMD问题出在这里！！！这里的hero忘记首字母大写了！！Hero才对！！
}hero;

hero *CreatHero(){
	hero *head,*p,*q;
    head =NULL;
	p=q=(hero *)malloc(sizeof(hero));
	scanf("%c,%d",p->Name,p->Exp);
	while (p->Name != 0){
		count++;
		if (count==1) head=p;
        else q->next = p; //为什么会warning: assignment from incompatible pointer type
								  //因为定义结构体的时候，写的是struct hero *next！！！Hero要大写！！
		q=p;
		p=(hero *)malloc(sizeof(hero));
		scanf("%c,%d",p->Name,p->Exp);
	}
	printf("\n");
    p->next=NULL;
    return (head);
}



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

    }
    return Name;
}


int main(){
    char hero,Name;
    int NameNumber,Exp = 0,Hp,Atk,Level;
    printf("Please input  Exp:\n");
    scanf("%d",&Exp);
//    Name = GetName(NameNumber);
    Level = GetLevel(Exp);
    struct Hero Slark = {"Slark",0,Level,100+(10*Level),13+(3*Level)};
	struct Hero Norton = {"Norton",0,Level,150+(13*Level),10+(2*Level)};
    printf("Hero Name:%s\nLevel:%d\nHp:%d\nAttack:%d\n\n",Slark.Name,Slark.Level,Slark.Hp,Slark.Atk);
	printf("Hero Name:%s\nLevel:%d\nHp:%d\nAttack:%d\n\n",Norton.Name,Norton.Level,Norton.Hp,Norton.Atk);
    
	return 0;
}
