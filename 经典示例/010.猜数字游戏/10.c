/*====This is a Number Guess Game!====*/

#include <stdio.h>
#include <math.h>
#include <time.h>

void main()
{
	float Number=0,goal,d;
	int count,score,t;
	printf("\n====This is a Number Guess Game!====\n");
	printf("please guess a number between 1-100:\n");
	srand((unsigned)time(NULL));//创建时间种子
	goal=rand()%(100-1+1)+1;//创建1-100间的随机数
	printf("input how many times u can finger it out(10 is max times): \n");
	scanf("%d",&count);
	while (10 < count || count <1){
		printf("only 1-10 times can be choiced,reinput:\n");
	    scanf("%d",&count);
	}
	t = count;
//	printf("%g\n",goal);//显示目标值
	printf("Game beginning, %d times left,input the number you guess:\n",count);
	scanf("%g",&Number);
	count-=1;
	    while (Number - goal != 0 && count !=0){
			d=(Number-goal)/10;
//   		printf("%g\n",d);//显示差值的十分之一大小
			if (0 < d) printf("big\n");
			if (d < 0) printf("small\n");
            /*
            if (0 < d && d<1) printf("very close , but still big, %d times left\n",count);
		    else if (-1 < d && d < 0) printf("very close , but still small, %d times left\n",count);
		    else if (1 <= d && d < 2) printf("a little big, %d times left\n",count);
		    else if (-2 < d && d <= -1) printf("a little small, %d times left\n",count);
		    else if (2 <= d && d < 5) printf("big, %d times left\n",count);
		    else if (-5 < d && d <= -2) printf("small, %d times left\n",count);
		    else if (5 <= d && d < 10) printf("too big, %d times left\n",count);
		    else if (-10 < d && d<=-5) printf("too small, %d times left\n",count);
			//有bug，多次游戏后可能发现规律，例如目标是34
			//当猜到44时提示a little big，猜43则会提示very close , but still small，则可以推出答案为34
			*/
			scanf("%g",&Number);
			count--;
	    }
		if (~count && Number-goal ==0){
			score =(10-(t-count))*(11-t)+(13-(t-count))*(12-(t-count))+(10/(t));
        	printf("You Guess Right in %d round!! \nYour score is %d bye!\n",t-count,score);//接收输入数值
        }
		else printf("\nsorry no time left, you lose the game,right number is %g bye!\n",goal);
}