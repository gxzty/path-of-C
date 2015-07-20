#include <malloc.h>
#include "define.c"
#define STACK_INIT_SIZE 100  //存储空间初始分配量
#define STACKINCREMENT 10   //存储空间分配增量

#define SElemType int


//创建一个栈的数据类型
typedef struct {
	SElemType *base;//栈底指针，构造之前和销毁之后均为NULL
	SElemType *top;//栈顶指针
	int stacksize;//栈空间大小，以元素为单位
}SqStack;

/*top指针初始和base一样，都指向栈底（此时两者均为NULL），增加一个元素，base保持不变，top增加1
反之，减少一个元素，base保持不变，top减少1
    |        |                         |        |                         |        |          
	|        |                         |        |                         |        |top   
    |        |                         |        |top                    |   B   |
	|        |base & top         |  A   |base                  |    A  |base   

*/

Status InitStack(SqStack S){
    //构造一个空栈
    S.base = (SElemType *)malloc(STACK_INIT_SIZE * sizeof(SElemType));
	if ( !S.base ) exit (OVERFLOW);    //存储分配失败 返回-2
	S.top = S.base;
	S.stacksize = STACK_INIT_SIZE;
	return OK;
}//InitStack

Status GetTop(SqStack S,SElemType *e){
    //若栈不空，则用e返回S的栈顶元素，并返回OK；否则返回ERROR
    if (S.top == S.base) return FALSE;
	e = *(S.top - 1);
	return OK;
}//GetTop

Status Push(SqStack S,SElemType e){
	//插入元素e为新的栈顶元素
	if (S.top - S.base >= S.stacksize ){
    S.base = (SElemType *)realloc(S.base , 
		                (S.stacksize+STACKINCREMENT)*sizeof(SElemType));
	if (!S.base) exit (OVERFLOW);
	S.top = S.base + S.stacksize;
	S.stacksize += STACKINCREMENT;
	}
	*S.top++ =e;
	return OK;
}//Push

Status Pop (SqStack S,SElemType *e){
    //若栈不空，则删除S的栈顶元素，用e返回其值，并返回OK；否则返回ERROR
    if (S.top == S.base) return ERROR;
	e =  --S.top;
	return OK;
}//Pop

Status DestroyStack(SqStack *S){
    //销毁栈S,S不再存在
}

Status ClearStack(SqStack *S){
    //把S置为空栈
}

Status StackEmpty(SqStack *S){
    //若栈S为空栈，则返回TRUE，否则返回FALSE
}

int StackLength(SqStack *S){
    //返回S的元素个数，即栈的长度，栈的规模
}


Status StackTraverse(SqStack S,Status( * visit)());
    //从栈底到栈顶依次对栈中每个元素调用函数visit()，一旦visit()失败，则操作失败

int main(int argc, char *argv[])
{
	SqStack S;
	InitStack(S);
	Push(S,1);
	GetTop(S);
	return 0;
}