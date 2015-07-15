#include<stdio.h>

int main()
{
	float a1,a2,a3,a4,a5,a6,a7,a8;
    for (a1=0;a1<=9 ;a1++ ){
        for (a2=0;a2<=9 ;a2++ ){
            for (a3=0;a3<=9 ;a3++ ){
                for (a4=0;a4<=9 ;a4++ ){
                    for (a5=0;a5<=9 ;a5++ ){
                        for (a6=1;a6<=9 ;a6++ ){
                            for (a7=0;a7<=9 ;a7++ ){
                                for (a8=0;a8<=9 ;a8++ ){
									if (a1+a2-9==4 && a3-a4*a5==4 && a6+a7-a8==4 && a1+a3/a6==4 && a2-a4*a7==4 && 9-a5-a8==4 )
									{
										printf("%f%f%f%f%f%f%f%f\n",a1,a2,a3,a4,a5,a6,a7,a8);
									}
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    printf("无解\n");





	/*
	int a,b,c;
	
	for(a=0;a<=9;a++){
	    if (a=4) printf("wujie\n"); break;
        for(b=0;b<=9;b++){
            for(c=1;c<=9;c++){
                if (((9)-((b-4)/c)-(b/(4-a)+(9-a)/c-4))==4)
				//if (((b/(4-a))+((9-a)/c)-(5-(b-4)/c))==4)
                {
					printf("%d,%d,%d\n",a,b,c);
                }
            }
        }
    }
    for(a=5;a<=9;a++){
		if (a=9) printf("wujie\n"); break;
        for(b=1;b<=9;b++){
            for(c=1;c<=9;c++){
                if (((9)-((b-4)/c)-(b/(4-a)+(9-a)/c-4))==4)
				//if (((b/(4-a))+((9-a)/c)-(5-(b-4)/c))==4)
                {
					printf("%d,%d,%d\n",a,b,c);
                }
            }
        }
    }
	*/
	return 0;
}