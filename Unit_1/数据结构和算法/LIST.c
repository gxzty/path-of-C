#include <stdio.h>
#include "define.c"

#define LIST_INIT_SIZE 100 //线性表存储个空间的初始分配量
#define LISTINCREMENT  10//线性表存储空间的分配增量
#define ElemType                int

typedef struct {
	ElemType *elem;        //存储空间基址
	int length;                  //当前长度
	int listsize;                //当前分配的存储容量（以sizeof(ElemType)为单位）
}SqList;


int main(int argc, char *argv[])
{
	return 0;
}
