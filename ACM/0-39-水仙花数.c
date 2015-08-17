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

/*太麻烦了！！！我把题目想复杂了！！！
要求不是一次性输入153 154 0，
而是输入153，输出yes，再输入154，输出no，当输入0时，程序结束！！
用while(scanf("%d",n),n)就可以了！！
*/
#include <stdio.h>
#include <malloc.h>
int count=0;
struct sx{
    int a;
    struct sx * next;
};

struct sx *Input(){
    struct sx *head,*p1,*p2;
    head=NULL;
    p1=p2=(struct sx *)malloc(sizeof(struct sx));
    scanf("%d",&p1->a);
    while (p1->a !=0){
        count++;
        if (count==1) head = p1;
        else p2->next = p1;
        p2 = p1;
        p1 = (struct sx *)malloc(sizeof(struct sx));
        scanf("%d",&p1->a);
    }
    printf("\n");
    p1->next=NULL;
    return (head);
}

int *shuixian(struct sx *p){
    int a1,a2,a3;
    int i=1;
    for (;i<=count ;i++ ){
            a1=p->a/100;
            a2=(p->a%100)/10;
            a3=((p->a%100)%10);
            if (a1*a1*a1+a2*a2*a2+a3*a3*a3==p->a) printf("Yes\n");
            else printf("No\n");
            p=p->next;
    }
}

int main(int argc, char *argv[]){
    struct sx *q;
    q = Input();
    shuixian(q);
    return 0;
}