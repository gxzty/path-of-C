#include <stdio.h>
#include <malloc.h>
#include "define.c"

#define ElemType int


typedef struct BTN{
	ElemType date;
	struct BTN *LifeChild;
	struct BTN *RightChild;
}BTN, *BiTree;

Status CreateBiTree(BTN *T){
	ElemType ch;
	ch = getchar();
    if (ch == ' '){
        T = NULL;    
    }
	else {
		if (!(T = (BTN *)malloc(sizeof(BTN)))) exit(OVERFLOW);
	    T->date = ch;
		CreateBiTree(T->LifeChild);
		CreateBiTree(T->RightChild);
	}
	return OK;
}


int main(int argc, char *argv[])
{
	BTN BT;
	CreateBiTree(&BT);
	return 0;
}
