#include <stdio.h>
#include <malloc.h>
#include "define.c"

#define LIST_INIT_SIZE 20
#define LISTINCREMENT 5

#define ElemType int

typedef struct SqList{
	ElemType *elem;
	int length;
    int size;
}SqList;

Status InitList(SqList *L){
    //构造一个空的线性表
	L->elem = (ElemType *)malloc(LIST_INIT_SIZE * sizeof(ElemType));
    if (!L->elem) exit(OVERFLOW);
	L->length = 0;
	L->size = LIST_INIT_SIZE;
	return OK;
}//InitList

Status DestroyList(SqList *L){
	//销毁线性表
    free(L->elem);
	L->length = 0;
	L->size = 0;
}//DestroyList

Status ClearList(SqList *L){
	//清空线性表
    L->length = 0;
	return OK;
}

Status ListEmpty(const SqList L){
	//若线性表 为空 返回1，否则返回-1
	if (0 == L.length) return TRUE;
    else return FALSE;
}

int getLength(const SqList L){
	//获取线性表长度
    return L.length;
}

Status GetElem(const SqList L, int i,ElemType *e){
	//获取第i个位置的元素，下标为i-1
    if (i < i || i > L.length){
        exit (FALSE);
    }
	*e = L.elem[i-1];
	return 0;
}

Status compare(ElemType e1,ElemType e2){
	//比较两个元素 相等返回0，e1<e2 返回-1，e1>e2返回1
    if (e1 == e2){
        return 0;
    }
	else if (e1 < e2){
	    return -1;
	}
	else {
	    return 1;
	}
}

Status FindElem(const SqList L,ElemType e){
	//在线性表中找元素e，如果有则返回其位置，否则返回-1
    int i ;
	for (i = 0; i < L.length ;i++ ){
	    if ( e == L.elem[i]){
	        return i+1;
	    }
	}
	if (i >= L.length){
	    return ERROR;
	}
}

Status PreElem(const SqList L , ElemType cur_e , ElemType *pre_e){
	//获取cur_e元素的前驱元素pre_e 
    int i ;
	for (i = 0; i < L.length ;i++ ){
	    if ( cur_e == L.elem[i]){
			if (i != 0){
				*pre_e = L.elem[i-1];
				return OK;
			}
			else return ERROR;
	    }
	}
	if (i >= L.length){
	    return ERROR;
	}
}

Status NextElem(const SqList L , ElemType cur_e , ElemType *next_e){
	//获取cur_e元素的后继元素next_e 
    int i ;
	for (i = 0; i < L.length ;i++ ){
	    if ( cur_e == L.elem[i]){
			if (i != L.length-1){
				*next_e = L.elem[i+1];
				return OK;
			}
			else return ERROR;
	    }
	}
	if (i >= L.length){
	    return ERROR;
	}
}

Status InsertElem(SqList *L , int i ,ElemType e){
	//在i位置插入元素e
    if (i < 1 || i > L->length + 1){
        return ERROR;
    }
	ElemType *new;
	if (L->length >= L->size){
	    new = (ElemType *)realloc(L->elem,(L->size + LISTINCREMENT) * sizeof(ElemType));
		if ( !new ){
		    exit (OVERFLOW);
		}
		L->elem = new;
		L->size += LISTINCREMENT;
	}
	ElemType *q = &L->elem[i - 1];
	ElemType *p = &L->elem[L->length - 1];
	for (; q <= p ;p-- ){
	    *(p+1) = *p;
	}
	//当p=q时，指针指向位置为i，将e插入即可
	*p = e;
	L->length++;
	return OK;
}

Status DeleteElem(SqList *L , int i ,ElemType *e){
    //删除i位置的元素，并且用e返回其值
	if (i < 1 || i > L->length){
	    return ERROR;
	}
	ElemType *p = &L->elem[i - 1];
	ElemType *q = &L->elem[L->length - 1];
	for (;p < q ; p++ ){
	    *p = *(p + 1);
	}
	--L->length;
	return OK;
}

void visit(ElemType e){
	//注意，当ElemType不是int时，需要修改%d为别的
    printf("%d ",e);
}

Status TraverseList(const SqList L , void (*visit)(ElemType)){
    int i ;
	for (i = 0; i < L.length - 1 ;i++ ){
	    visit(L.elem[i]);
	}
	return OK;
}


int main(int argc, char *argv[])
{
    SqList L;
    if (InitList(&L))
    {
        ElemType e;
        printf("init_success\n");
        int i;
        for (i = 0; i < 10; i++)
        {
            InsertElem(&L, i + 1, i);
        }
        printf("length is %d\n", getLength(L));
        if (GetElem(L, 1, &e)) {
            printf("The first element is %d\n", e);
        }
        else
        {
            printf("element is not exist\n");        
        }
        if (ListEmpty(L))
        {
            printf("list is empty\n");
        }
        else
        {
            printf("list is not empty\n");
        }
        printf("The 5 at %d\n", FindElem(L, 5));
        PreElem(L, 6, &e);
        printf("The 6's previous element is %d\n", e);
        NextElem(L, 6, &e);
        printf("The 6's next element is %d\n", e);
        DeleteElem(&L, 1, &e);
        printf("delete first element is %d\n", e);
        printf("list:");
        TraverseList(L,visit);
        if (DestroyList(&L))
        {
            printf("\ndestroy_success\n");
        }
    }
}