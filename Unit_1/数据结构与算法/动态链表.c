#include <stdio.h>
#include <malloc.h>

struct people
{
	int id;
	int age;
    struct people *next;
};

struct people * Creat()
{
	struct people * head;
	struct people * p1,* p2;
	int n=0;
	p1=p2=(struct people*)malloc(sizeof(struct people));
	printf("input id and age:\n");
	scanf("%d,%d",&p1->id,&p1->age);//scanf是格式化输入语句，输入数据方式要按照"1,2"的方式来输入！记得逗号！！
	while (p1->id != 0){
		n++;
		if (n==1){
			head = p1;
		}
		else p2->next = p1;
        p2 = p1;
		p1 = (struct people*)malloc(sizeof(struct people));
		scanf("%d,%d",&p1->id,&p1->age);
	}
	p2->next =NULL;
	return (head);
}

int main(int argc, char *argv[])
{
	struct people * p;
    p = Creat();
	printf("%d,%d\n",p->id,p->age);
	return 0;
}