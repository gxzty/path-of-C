#include <stdio.h>
#include <malloc.h>
#include "define.c"

#define LIST_INIT_SIZE 20  //存储空间初始分配量
#define LISTINCREMENT 5   //存储空间分配增量

typedef int ElemType;

typedef struct LinkList{
    ElemType date;
    struct LinkList *pre;//前一个指针
    struct LinkList *next;//后一个指针
}LinkList;

LinkList InitList(LinkList *L);
Status EmptyList(LinkList L); 

LinkList InitList(LinkList *L){
    //建立链表
    L = (LinkList *)malloc(LIST_INIT_SIZE * sizeof(ElemType));
    if (! L) exit(OVERFLOW);
    L->pre = L->next =NULL;
}

Status DestroyList(LinkList *L){
    L->next = L->pre;
    free(L);
}

Status EmptyList(LinkList L){
    if (L.next == L.pre) return OK;
    else return FALSE;
}

int GetLength(LinkList L){
    LinkList *p;
    p = L.next;
    int i ;
    while (p){
        i++;
        p = L.next;
    }
    return i;
}


Status InsertList(LinkList *L , int i ,ElemType e){
    LinkList *n;
    n = (LinkList *)malloc(sizeof(LinkList));
    if (i = -1){
        while (L->next != NULL){
            L = L->next;
        }
        L->next = n;
        n->next = NULL;
    }
    else if(0 == i){
        
        n->next = L;
    }
    
    
    }
}

int main(int argc, char *argv[])
{
    return 0;
}
