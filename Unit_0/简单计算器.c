#include<stdio.h>
  
int main()
{      
    float a,b;
	int e,f;  
	char c;
	while (~scanf("%f%c%f",&a,&c,&b)){
        switch(c) {
			case '+':printf("=%g\n\n",a+b);break;
		    case '-':printf("=%g\n\n",a-b);break;
		    case '*':printf("=%g\n\n",a*b);break;
		    case '/':printf("=%g\n\n",a/b);break;
		    case '%': e=(int)a; f=(int)b; printf("=%d\n\n",e%f);break;
	        default:printf("本计算器只能进+ —* /和%%运算"); 
        }
	}
    return 0;
}