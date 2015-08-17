#include <stdio.h>
typedef struct _Person
{
    char *name;//指针为4个字节
    int age;//4个字节
    double height;//8个字节
}Person;
/*
typedef struct _Person Person;
//把让Person变为struct _Person的简写
*/
int main(int argc, char *argv[])
{
    /*
    struct _Person p1;
    memset(&p1,0,sizeof(struct _Person));
    */
    Person p1={0};
    p1.name = "ys";
    p1.age = 18;
    p1.height = 169.11;
    printf("%s|%d|%3.2f\n",p1.name,p1.age,p1.height);
    //printf("%d\n",sizeof(Person));
    //所以sizeof(struct _Person)占16个字节
    Person p2={0};
    p2.name = "zty";
    p2.age = 22;
    p2.height = 176.22;
    printf("%s|%d|%3.2f\n",p2.name,p2.age,p2.height);
    
    Person p3 = p2;//创建一个Person结构体内存，复制p2的内容
    p3.age = 3333;
    printf("%d\n",p3.age);
    
    Person *p4 = &p1;//p4,p1公用一段地址
                    //所以p1改变p4也会变
    printf("%d,%d\n",p4,&p1);
    /*
    p4->name = 333;
    //不能这样赋值
    */
    printf("%s,%d\n",p4->name,p4->age);
    return 0;
}
