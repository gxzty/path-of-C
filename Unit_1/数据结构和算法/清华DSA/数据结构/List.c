#include <stdio.h>
#include <malloc.h>
#include "define.c"

#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10

#define ElemType int

typedef struct SqList{
	ElemType *elem;
	int length;
    int listsize;
}SqList;

Status InitSqList(SqList *L){
    //构造一个空的线性表
	L->elem = (ElemType *)malloc(LIST_INIT_SIZE * sizeof(ElemType));
    if (!L->elem) exit(OVERFLOW);
	L->length = 0;
	L->listsize = LIST_INIT_SIZE;
	return OK;
}//InitSqList

Status DestroySqList(SqList *L){
    free(L);
}

Status ClearSqList(SqList *L){
    L->elem = NULL;
}

Status SqListEmpty(SqList L){
	if (L.length == 0) return TRUE;
    else return FALSE;
}


int main(int argc, char *argv[])
{
	
	return 0;
}
