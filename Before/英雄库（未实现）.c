#include<stdio.h>
#include "GetLevel.c"//GetLevel.c�Ǿ��������


//����һ���ṹ��
typedef struct Hero{
    char Name[20];
	int Hp;
	int Atk;
}hero;

//���������ţ����ظñ�Ŷ�Ӧ��Ӣ������
char GetName(int NameNumber){
	char Name;
	//�������ı�ţ�����ʾ�������롣
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


void main(){
	char Hero,Name;
	int NameNumber,Exp = 0,Hp,Atk,Level;
	printf("Please input ��ź;���:\n");
    scanf("%d,%d",&NameNumber,&Exp);
	Name = GetName(NameNumber);
	Level = GetLevel(Exp);
	hero Slark = {"Slark",100+(10*Level),13+(2*Level)};
	//hero Norton = {"Norton",150+(15*Level),8+(1*Level)};
	printf("Hero Name:%s\nLevel:%d\nHp:%d\nAttack:%d\n",Name,Level,Slark.Hp,Slark.Atk);
}