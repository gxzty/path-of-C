/*
描述
请判断一个数是不是水仙花数。
其中水仙花数定义各个位数立方和等于它本身的三位数。

输入
有多组测试数据，每组测试数据以包含一个整数n(100<=n<1000)
输入0表示程序输入结束。

输出
如果n是水仙花数就输出Yes
否则输出No

样例输入
153
154
0

样例输出
Yes
No
*/


#include <stdio.h>
#include <malloc.h>

struct sx
{
	int a;
	struct sx * next;
};

struct sx *Input(){
    struct sx *head,*p1,*p2;
    int n=0;
	head=NULL;
	p1=p2=(struct sx *)malloc(sizeof(struct sx));
	scanf("%d",p1->a);
	while (p1->a !=0){
		n++;
		if (n==1) head = p1;
		else p2->next = p1;
		p2 = p1;
		p1 = (struct sx *)malloc(sizeof(struct sx));
		scanf("%d",p1->a);
	}
    return (head);
}

int *shuixian(struct sx *p){
    int a1,a2,a3;
	a1=p->a/100;
	a2=(p->a%100)/10;
	a3=((p->a%100)%10);
	printf("%d,%d,%d\n",a1*a1*a1,a2*a2*a2,a3*a3*a3);
	if (a1*a1*a1+a2*a2*a2+a3*a3*a3==p->a) printf("Yes\n");
	else printf("No\n");
}

int main(int argc, char *argv[])
{
	struct sx *q;
	q = Input();
	shuixian(q);
	return 0;
}