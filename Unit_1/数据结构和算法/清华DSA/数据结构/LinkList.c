#include <stdio.h>
#include <malloc.h>
#include "define.c"

#define LIST_INIT_SIZE 20  //存储空间初始分配量
#define LISTINCREMENT 5   //存储空间分配增量

#define ElemType int

typedef struct LinkList{
	ElemType date;
    struct LinkList *head;//前一个指针
	struct LinkList *tail;//后一个指针
}LinkList;

LinkList InitList(LinkList *L);
Status EmptyList(LinkList L); 

LinkList InitList(LinkList *L){
	L = (LinkList *)malloc(LIST_INIT_SIZE * sizeof(ElemType));
	if (! L) exit(OVERFLOW);
    L->head = L->tail =NULL;
}

Status DestroyList(LinkList *L){
    L->tail = L->head;
	free(L);

}

Status EmptyList(LinkList L){
    if (L.tail == L.head) return OK;
	else return FALSE;
}


int main(int argc, char *argv[])
{
	
	return 0;
}
