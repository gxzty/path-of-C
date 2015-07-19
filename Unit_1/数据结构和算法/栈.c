#include <stdio.h>
#include <malloc.h>
#define STACK_INIT_SIZE 100  //存储空间初始分配量
#define STACK_INCREMENT 10   //存储空间分配增量
typedef struct Hero{
    char Name[20];
    int Exp,Hp,Atk;
	struct Hero *next;
}hero;

//创建一个栈的数据类型
typedef struct {
	hero *base;//栈底指针，构造之前和销毁之后均为NULL
	hero *top;//栈顶指针
	int stacksize;//栈空间，以元素为单位
}sqStack;

/*top指针初始和base一样，都指向栈底（此时两者均为NULL），增加一个元素，base保持不变，top增加1
反之，减少一个元素，base保持不变，top减少1
    |        |                         |        |                         |        |          
	|        |                         |        |                         |        |top   
    |        |                         |        |top                    |   B   |
	|        |base & top         |  A   |base                  |    A  |base   

*/

int InitStack(){
	sqStack *S;
    //构造一个空栈
    S->base = (hero *)malloc(STACK_INIT_SIZE * sizeof(hero));
}




int main(int argc, char *argv[])
{
	
	return 0;
}
