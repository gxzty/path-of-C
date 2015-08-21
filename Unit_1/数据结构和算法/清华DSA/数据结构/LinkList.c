#include <stdio.h>
#include <malloc.h>
#include "define.c"

typedef int ElemType;

typedef struct LNode{
    ElemType data;
    struct LNode *next;//后一个指针
}LNode,*LinkList;


LinkList InitList(LinkList L){
    //建立链表，因为C中没有引用&，所以返回L供外界使用
    L = (LinkList)malloc(sizeof(LNode));
    if ( !L ) exit(OVERFLOW);
    L->next = NULL; 
    printf("init success\n");
    return L;
}

Status DestroyList(LinkList L){
    LinkList p,q = L;
    while (p){
        q = p->next;
        free(p);
        p = q;
    }
}

Status EmptyList(const LinkList L){
    if (L->next ==NULL) return OK;
    else return FALSE;
}

int GetLength(LinkList L){
    int i = 0 ;
    L = L->next;//指向第一个节点
    while (L){//如果该节点不为空
        i++;
        L = L->next;
    }
    return i;
}



Status InsertElem(LinkList L , int i , ElemType e){
    LinkList s,p = L->next;
    int j  = 0;
    while (p && j < i - 1){
        p = p->next;
        j++;
    }
    if (!p || j > i - 1){
        pri(FALSE);
        return FALSE;
    }
    s = (LinkList)malloc(sizeof(LNode));
    s->data = e;
    printf("Insert %d|",e);
    s->next = p->next;
    p->next = s;
    return TRUE;
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
    L = InitList(L);
    int i ;
    for (i = 0;i< 3 ;i++ ){
        InsertElem(L,i+1,i);
    }
    pri(GetLength(L));
    pri(EmptyList(L));
    TraverseList(L,visit);
    return 0;
}