#include <stdio.h>
#include <malloc.h>
#include "define.c"

typedef int ElemType;


typedef struct LNode{
    ElemType data;
    struct LNode *next;//后一个指针
}LNode,*LinkList;


Status InitList(LinkList *L){
    //建立带头节点的链表
    (*L) = (LinkList)malloc(sizeof(LNode));
    if (!(*L)){
        exit(OVERFLOW);
    }
    (*L)->next = NULL;
    printf("init success\n");
    return OK;
}

Status DestroyList(LinkList L){
    LinkList q ,p = L;
    //只有p被赋值L，q则只是声明，没有具体赋值
    while (p){
        q = p->next;
        free(p);
        p = q;
    }
    printf("Destroy success\n");
}

Status EmptyList(const LinkList L){
    if (L->next == NULL) return OK;
    else return FALSE;
}

int GetLength(LinkList L){
    int i = 0 ;
    while (L->next){//如果该节点的下一个节点不为空
        i++;
        L = L->next;
    }
    return i;
}

Status PosFindElem(LinkList L , int i ,ElemType *e){
    //根据位置查找对应元素
    LinkList p = L->next;
    int j = 0;
    while (j < i && (p != NULL)){
        j++;
        p = p->next;
    }
    if (p == NULL){
        printf("FinePos %d failure\n",i);
        return ERROR;
    }
    (*e) = p->data;
    printf("FindElem %d in %d position\n",(*e),j);
}

Status ElemFindPos(LinkList L , int *i ,ElemType e){
    //根据元素查找对应位置
    LinkList p = L->next;
    int j = 0;
    while (p){
        if (e == p->data){
            printf("FindElem %d in %d position\n",e, j);
            return OK;
        }
        j++;
        p = p->next;
    }
    printf("FindElem %d failure\n",e);
    return ERROR;
}

Status PreElem(LinkList L , ElemType e , ElemType *pre){
    LinkList s , p = L->next;
    *pre = -1;
    int flag = 0;
    while (p->next){
        s = p->next;
        if (e == s->data){
            if (flag){
                *pre = p->data;
                return OK;
            }
            else return FALSE;
        }
        p = s;
        flag ++;
    }
    return FALSE;
}

Status InsertElem(LinkList L ,int i , ElemType e){
    //在L链表中的i位置插入e元素
    LinkList s , p = L;
    s = (LinkList)malloc(sizeof(LNode));
    s->data = e;
    int j = 0;
    while (j < i && (p != NULL)){
        j++;
        p = p->next;
    }
    if (p == NULL){
        printf("Insert %d failure\n",e);
        return ERROR;
    }
    s->next = p->next;
    p->next = s;
    printf("Insert %d success\n",e);
    return OK;
}






void visit(ElemType e){
    printf("%d ", e);
}

void TraverseList(LinkList L, void (*visit)(ElemType)){
    L = L->next;
    while (L){
        visit(L->data);
        L = L->next;
    }
}



int main(int argc, char *argv[])
{
    LinkList L;
    InitList(&L);
    TraverseList(L,visit);
    int i = 0;
    for (i = 0;i< 10 ;i++ ){
        InsertElem(L,i,10-i);
    }
    printf("Length = %d\n",GetLength(L));
    TraverseList(L,visit);
    puts("\n");
    int j = 0;
    PosFindElem(L,4,&j);
    int s = -1;
    ElemFindPos(L,&s,1);
    int pre;
    PreElem(L,10,&pre);
    printf("!!!%d!!!\n",pre);
    DestroyList(L);
    return 0;
}