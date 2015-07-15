#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    int a,b,i,j,k;
	/*
	for (a=0;a<10 ;a++ )
	{
		b=a%2;
		if (b==0)
	    {
			Sleep(3);
			*/
			for (k=0;k<=4 ;k++ )
			{
				if (k<=2)
				{
					for (i=0;i<=2 ;i++)
					{
						for (j=i;j<=2 ;j++ )
						{
							if (i==j)
							{
								printf("*");
								printf("\n");
							}
							else
							{
								printf(" ");
							}
						}
					}
					printf("\n");
				}
			}
			/*
			if (i<=2)
			{
				for (i=0;i<=2 ;i++ )
			    {
				    for (j=0;j<=i ;j++ )
				    {
				    	if (i==j)
					    {
					    	printf("*");
					    	printf("\n");
					    }
					    else
					    {
					    	printf(" ");
					    }
					}
				}
			}
		    else
			{
				for (i-=1;i<=5 ;i-- )
			    {
				    for (;j<=i ;j-- )
				    {
				    	if (i==j)
					    {
					    	printf("*");
					    	printf("\n");
					    }
					    else
					    {
					    	printf(" ");
					    }
				    }
			    }
			}
			*/
			//}*
	    //}
	    /*else 
	    {
			Sleep(3);
		    system("cls");
	    }
		*/
	
	
	return 0;
}
