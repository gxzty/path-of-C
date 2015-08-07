#include <stdio.h>
#include <malloc.h>
#include "define.c"

#define ElemType int


typedef struct BinaryTree{
	ElemType date;
	struct BinaryTree *LifeChild;
	struct BinaryTree *RightChild;
}BiTree;

BiTree CreateBiTree(BiTree *T){
	ElemType ch;
	ch = getchar();
    if (ch == ' '){
        T = NULL;    
    }
	else {
		if (!(T = (BiTree *)malloc(sizeof(BiTree)))) exit(OVERFLOW);
	    T->date = ch;
		CreateBiTree(T->LifeChild);
		CreateBiTree(T->RightChild);
	}
	return *T;
}

Status DestroyBiTree(BiTree *T){
    if (T->date = ' ') return OK;
	else free(T);
    return OK;
}


int main(int argc, char *argv[])
{
	BiTree T;
	CreateBiTree(&T);//因为T一开始没有用malloc划分区域，所以需要T来接收一次？？
	

	return 0;
}
