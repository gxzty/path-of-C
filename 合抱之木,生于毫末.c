1.注意大小写。.C是C++的后缀，.c才是C的；还要注意变量的大小写（常见于首字母）。
2.'&'是C++的，叫做引用，C中没有。
3.最好多用'<'号来代替'>'。因为使用'<'时，小的在左边，这和数轴中的相对位置相同。
4.重视模块化。
5.WIN下不习惯用gdb调试，可以用puts()和printf()来查看程序运行到哪一步出问题了。
6.写好注释。但是除了注释少用中文，因为UTF-8中，打印出来的中文是乱码。
7.注意使用fflush(stdin);fflush(stdout);
8.结构体指针中用"->" ；非指针用'.'。
9.传需要修改的参数时，应该传它的指针，或者让函数返回其值，在原函数中找参数接收。
10.fopen()中的"w+",打开时将文件清空，所以无法读取内部数据。
11.一个函数中传入指针如aaa(int *a){},在使用的时候不一定非要int *a; aaa(a)，还可以int a; aaa(&a); 类似scanf("%d",&a);
12.{
    if (i == 3)，有时候会错写成if (i = 3)，导致程序出BUG，所以可以将常数放在前边if (3 == i)，这样即使写成if (3 = i)
    编译器会提示(error: lvalue required as left operand of assignment)
    }
13.{
    scanf(&i)遇到Space,Tab,Enter结束(while(scanf("%c",&a[i]))可以循环输入字符包括Space,Enter),
    getchar()遇到Enter结束不删除缓冲区Enter,
    gets(&i)遇到Enter结束删除缓冲区Enter
    }
14.C中数组从0开始计算，如int a[n] = {0} ;  则a[n-1]为其最后一项。
15.ElemType a[n]中，其实n就是偏移量。代表指针向后移动n个sizeof(ElemType)。
16.函数中传入函数如先声明void visit (Elemtype e){ ... } 需要使用visit()函数时，void TraverseList(SqList L , void (*visit)(ElemType)){ ... }
17.typedef struct LNode{...} LNode,*LinkList;这样每当需要链表时LinkList L，当LNode时LNode s;
18.LinkList q ,p = L;其中只有p被赋值L，q则只是声明，没有具体赋值。
19.运算符>>和<<优先级低于+,-,弄不清楚就用好括号。
