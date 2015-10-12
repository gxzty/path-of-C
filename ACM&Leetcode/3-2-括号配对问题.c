/*
描述
现在，有一行括号序列，请你检查这行括号是否配对。

输入
第一行输入一个数N（0<N<=100）,表示有N组测试数据。后面的N行输入多组输入数据，每组输入数据都是一个字符串S(S的长度小于10000，且S不是空串），测试数据组数少于5组。数据保证S中只含有"[","]","(",")"四种字符

输出
每组输入数据的输出占一行，如果该字符串中所含的括号是配对的，则输出Yes,如果不配对则输出No

样例输入
3
[(])
(])
([[]()])

样例输出
No
No
Yes
*/
#include <stdio.h>
#include <malloc.h>

#define OK                     1
#define ERROR               0
#define OVERFLOW        -2
#define TRUE                  1
#define FALSE                0

#define STACK_INIT_SIZE 20  //存储空间初始分配量
#define STACKINCREMENT 5   //存储空间分配增量

#define SElemType char

typedef int Status;

typedef struct stack{
    SElemType *base;
    SElemType *top;
    int stacksize;
}SqStack;

SqStack InitStack(SqStack *S){
    //构造一个空栈
    S = (SqStack *)malloc(sizeof(SqStack));
    if(!(S)) exit (OVERFLOW);    //存储分配失败 返回-2
    S->base = (SElemType *)malloc(STACK_INIT_SIZE * sizeof(SElemType));
    S->top = S->base;
    S->stacksize = STACK_INIT_SIZE;
    return *S;
}

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



int main(int argc, char *argv[])
{
    int len = 10000 , i = 0, flag = 1 ,num = 0;
    char ch[10000] = {0},c;
    SqStack S;
    scanf("%d",&num);
    while (num--){
        flag = 1;
        scanf("%s",&ch);
        i = 0;
        S = InitStack(&S);
        while (flag && i < len &&  (ch[i] == '[' || ch[i] == ']' || ch[i] == '(' || ch[i] == ')')){
            if (ch[i] == '[' || ch[i] == '('){
                Push(&S,ch[i]);
            }
            else if (ch[i] == ')' && !EmptyStack(S)){
                GetTop(S,&c);
                if ( c == '('){
                    Pop(&S,&c);
                }
                else {
                    flag = 0;
                }
            }
            else if (ch[i] == ']' && !EmptyStack(S) ){
                GetTop(S,&c);
                if ( c == '['){
                    Pop(&S,&c);
                }
                else {
                    flag = 0;
                }
            }
            else {
                flag = 0;
            }
            i++;
        }
        if (flag == 1 && EmptyStack(S) &&  i < len ){
            puts("Yes");
        }
        else if (!flag || !EmptyStack(S)){
            puts("No");
        }
        else if (i >= len){
            puts("Too long!\n");
        }
    }
    return 0;
}