#include <stdio.h>
#include <malloc.h>
#include "define.c"

#define STACK_INIT_SIZE 20  //存储空间初始分配量
#define STACKINCREMENT 5   //存储空间分配增量

typedef int SElemType;


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

//功能列表
SqStack InitStack(SqStack *S);     //构造一个空栈，需要用栈接收，如SqStack S; S = InitStack(&S);
Status EmptyStack(SqStack S);     //检测是否为空栈，若为空，返回1，不为空，返回0
Status Push(SqStack *S,SElemType e);
int LengthStack(SqStack S);
Status GetTop(SqStack S,SElemType *e);
Status Pop (SqStack *S,SElemType *e);
void BTPrintStack(SqStack S);       //遍历栈，从栈底base到栈顶top
void TBPrintStack(SqStack S);       //遍历栈，从栈顶top到栈底base
Status CleanStack(SqStack *S);
Status DestroyStack(SqStack *S);


//具体构造
SqStack InitStack(SqStack *S){
    //构造一个空栈
    S = (SqStack *)malloc(sizeof(SqStack));
    if(!(S)) exit (OVERFLOW);    //存储分配失败 返回-2
    S->base = (SElemType *)malloc(STACK_INIT_SIZE * sizeof(SElemType));
    S->top = S->base;
    S->stacksize = STACK_INIT_SIZE;
    printf("InitStack successfully!\n");  
    return *S;
}//InitStack

Status EmptyStack(SqStack S){
    if (S.top == S.base){
        return OK;
    }
    else return FALSE;
}

Status Push(SqStack *S,SElemType e){
    //插入元素e为新的栈顶元素
    if (S->stacksize <= S->top - S->base){
        S->base = (SElemType *)realloc(S->base , 
                        (S->stacksize+STACKINCREMENT)*sizeof(SElemType));
        if (!S->base) {
            exit (OVERFLOW);
        }
        S->top = S->base + S->stacksize;
        S->stacksize += STACKINCREMENT;
    }
    *S->top = e;
    S->top++;
    return OK;
}//Push

Status GetTop(SqStack S,SElemType *e){
    //若栈不空，则用e返回S的栈顶元素，并返回OK；否则返回ERROR
    if (EmptyStack(S)) return FALSE;
    *e = *(S.top - 1);
    return OK;
}//GetTop

Status Pop (SqStack *S,SElemType *e){
    //若栈不空，则删除S的栈顶元素，用e返回其值，并返回OK；否则返回ERROR
    if (EmptyStack(*S)){
        return ERROR;
    }
    --S->top;
    *e =  *S->top;
    return OK;
}//Pop

void BTPrintStack(SqStack S){
    //遍历栈，从栈底base到栈顶top
    SElemType *elem = S.base;
    int i = 1;
    while (elem != S.top){
        printf("elem %d = %d\n",i++,*elem++);
    }
}

void TBPrintStack(SqStack S){
    //遍历栈，从栈顶top到栈底base
    SElemType *elem = --S.top;
    int i = S.top - S.base + 1;
    while (elem >= S.base){
        printf("elem %d = %d\n",i--,*elem--);
    }
}

int LengthStack(SqStack S){
    return S.top - S.base;
}

Status CleanStack(SqStack *S){
    SElemType *elem;
    elem = S->base;
    while (elem != S->top){
        *elem = 0;
        elem++;
    }
}

Status DestroyStack(SqStack *S){
    //若栈存在，销毁返回OK;否则返回ERROR
    if (S){
        free(S->base);
        S->top = S->base;
        S->stacksize = 0;
        free(S);
        return OK;
    }
    else return ERROR;
}//DestroyStack

int main(){
    int i,j,elem;
    SqStack S;
    S = InitStack(&S);
    printf("Empty? %d\n",EmptyStack(S));

    for(j = 0 ; j < 20 ; j++){  
        elem = rand()%100;  
        Push(&S,elem);  
    }
    printf("Empty? %d\n",EmptyStack(S));
    printf("Length = %d\n",LengthStack(S));

    puts("\n");
    BTPrintStack(S);
    puts("\n");

    Pop(&S,&i);
    printf("%d\n",i);
    puts("\n");

    TBPrintStack(S);
    puts("\n");

    CleanStack(&S);
    TBPrintStack(S);
    puts("\n");
    return 0;
}