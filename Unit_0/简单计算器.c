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
	        default:printf("��������ֻ�ܽ�+ ��* /��%%����"); 
        }
	}
    return 0;
}