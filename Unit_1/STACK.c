#include <malloc.h>
#include "define.c"

#define STACK_INIT_SIZE 20  //存储空间初始分配量
#define STACKINCREMENT 5   //存储空间分配增量

#define SElemType int


//创建一个栈的数据类型
typedef struct stack{
	SElemType *base;//栈底指针，构造之前和销毁之后均为NULL
	SElemType *top;//栈顶指针
	int stacksize;//栈空间大小，以元素为单位
}SqStack;

/*top指针初始和base一样，都指向栈底（此时两者均为NULL），增加一个元素，base保持不变，top增加1
反之，减少一个元素，base保持不变，top减少1
    |        |                         |        |                         |        |          
	|        |                         |        |                         |        |top   
    |        |                         |        |top                    |   B   |
	|        |base & top        |  A   |base                 |    A  |base   
*/

Status InitStack(SqStack *S){
	puts("1");
    //构造一个空栈
    if(!(S->base = (SElemType *)malloc(STACK_INIT_SIZE * sizeof(SElemType)))) exit (OVERFLOW);    //存储分配失败 返回-2
    puts("2");
	S->top = S->base;
	S->stacksize = STACK_INIT_SIZE;
	return OK;
}//InitStack

Status DestoryStack(SqStack *S){
	//若栈存在，销毁返回OK;否则返回ERROR
    if (S){
		free(S);
		S->top = NULL;
		S->base = NULL;
        S->stacksize = 0;
		return OK;
	}
	else return ERROR;
}//DestoryStack

Status GetTop(SqStack S,SElemType *e){
    //若栈不空，则用e返回S的栈顶元素，并返回OK；否则返回ERROR
    if (S.top == S.base) return FALSE;
	*e = *(S.top - 1);
	return OK;
}//GetTop

Status Push(SqStack *S,SElemType e){
	//插入元素e为新的栈顶元素
	if (S->stacksize <= S->top - S->base){
    S->base = (SElemType *)realloc(S->base , 
		                (S->stacksize+STACKINCREMENT)*sizeof(SElemType));
	if (!S->base) exit (OVERFLOW);
	S->top = S->base + S->stacksize;
	S->stacksize += STACKINCREMENT;
	}
	*(S->top)++ = e;
	return OK;
}//Push

Status Pop (SqStack *S,SElemType *e){
    //若栈不空，则删除S的栈顶元素，用e返回其值，并返回OK；否则返回ERROR
    if (S->top == S->base) return ERROR;
	*e =  *--(S->top);
	return OK;
}//Pop

int main(){
    SqStack S;
	SqStack *pS;
	InitStack(pS);
	S = *pS;
    return 0;
}