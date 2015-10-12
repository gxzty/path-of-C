#include<stdio.h>
#include<string.h>


void print_1(char m[][66], int h, int k, int n)
// print       'L'
{
    int b[2],y;
    n=n+1;
    h=h-2;
    k=k-1;
    b[0]=h;
    b[1]=k+1;

    for(y=0;y<2*n-1;y++)
    {
        b[y/(n-1)]++;
        m[b[0]][b[1]]=3;
    }
    m[b[0]][b[1]]=0;
}

void print_2(char m[][66], int h, int k, int n)
// print     '7'
{
    int b[2],y;
    n=n+1;
    h=h-1;
    k=k-1;
    b[0]=k;
    b[1]=h;

    for(y=0;y<2*n-1;y++)
    {
        b[y/(n-1)]++;
        m[b[1]][b[0]]=3;

    }
    m[b[1]][b[0]]=0;
}

void print(char m[][66], int h, int k, int n, int f)   // print_1的print_2的合成
{
    int b[2],y;

    h=h+1;
    k=k-1;
    b[0]=h-1;
    b[1]=k;

    for(y=0;y<2*n-1;y++)
    {
        b[y/(n+1)]=b[y/(n+1)]+f;
        m[b[0]][b[1]]=3;
    }
}

void print_3(char m[][66], int h, int k, int n)
// print    '-'
{
    int t;

    k=k-1;
    h=h-1;

    for(t=0;t<n;t++)
        m[h][k+t]=3;
}

void print_4(char m[][66], int h, int k, int n)
// print   '|'
{
    int t;

    k=k-1;
    h=h-1;

    for(t=0;t<n;t++)
        m[h+t][k]=3;
}

void print_5(char m[][66], int h, int k, int n)
// print  '/'
{
    int t,p;

    h=h-n;
    k=k-1;

    for(t=0;t<n;t++)
        for(p=0;p<n;p++)
            if(p+t==n-1)
                m[t+h][p+k]=3;

}

void print_6(char m[][66], int h, int k, int n)
// print    '\'
{
    int t,p;

    h=h-1;
    k=k-1;

    for(t=0;t<n;t++)
        for(p=0;p<n;p++)
            if(t==p)
                m[t+h][p+k]=3;
}

int main()
{
    char c[26]={0};
    char a[100][66]={0};

    int i,q,w=0,j,l,s=0;

    //程序的输出结果已用 ASCII 码“加密".
    printf("\n\t\t\tSpecially writting for you ");
    printf("\n\n\n\t@. The result has been encrypted by using ASCII;\n\n\t ");
    printf("Enter your name and the last four numbers of your birthday\n");
    printf("\t\t(just for example : huzhenyang0520);");
    //为了不影响输出，请先将输出框的属性改为：宽度（缓存区和窗口）156.
    printf("\n\n\t@. In order to see clear ,"
           "modify the width of the output window: width 156. \n\n");
    printf("\t   Now enter your password :\t");

    gets(c);
    l=strlen(c);
    for(q=0;q<l;q++)
        s=s+c[q];

    if(s==1398)
    {
        print_5(a,c[13]-38,12,9);
        print_3(a,3,c[6]-90,6);         // 内层
        print_6(a,3,27,c[5]-89);
        print_5(a,11,c[8]-70,8);
        print_3(a,3,c[7]-70,6);
        print_6(a,3,c[12],9);
        print_4(a,12,c[3]-62,c[7]-103);
        print_4(a,c[7]-101,12,10);
        print_6(a,22,12,c[10]-80);
        print_5(a,c[8]-60,35,24);


        print_5(a,11,11,10);
        print_3(a,c[9]-109,21,6);
        print_6(a,1,c[5]-70,8);
        print_5(a,9,c[4]-70,8);
        print_3(a,c[9]-109,43,6);       // 外层
        print_6(a,1,49,c[6]-100);
        print_4(a,c[7]-101,60,10);
        print_4(a,12,10,c[10]-93);
        print_6(a,c[12]-27,10,25);
        print_5(a,47,c[4]-70,26);


        print_6(a,16,28,4);
        print_6(a,c[5]-77,27,4);
        print_5(a,30,26,c[8]-99);
        print_3(a,18,34,c[10]-96);
        print_3(a,c[6]-90,35,5);
        print_3(a,24,33,c[5]-88);       // qing
        print_4(a,14,37,11);
        print_4(a,c[10]-76,35,11);
        print_3(a,27,35,c[8]-100);
        print_4(a,c[10]-76,39,11);
        print_3(a,c[10]-73,35,c[8]-100);
        print_3(a,33,35,5);


        print(a,60,12,5,c[9]-109);      // O
        print(a,67,15,5,109-c[9]);

        print_4(a,62,c[10]-86,c[8]-99); // N
        print(a,67,20,c[8]-100,-1);

        print_4(a,c[12]+7,22,12);       // L
        print_3(a,c[14]+13,22,4);

        print(a,60,27,c[8]-100,1);      // Y
        print_4(a,62,30,c[7]-101);
        print_3(a,73,27,c[14]-50);

        print(a,60,37,5,c[6]-110);
        print_4(a,62,40,12);            // Y
        print_3(a,73,37,4);

        print(a,60,42,5,1);
        print(a,67,45,c[8]-100,-1);     // O

        print(a,60,47,c[8]-100,1);      // U
        print_4(a,62,50,c[8]-99);

        print_4(a,58,58,10);
        print_4(a,58,59,c[9]-100);      // |

        print_4(a,70,58,2);
        print_4(a,70,59,2);             // 。

        print(a,82,26,4,-1);
        print_3(a,82,24,3);             // 2
        print(a,80,24,4,1);

        print_4(a,78,29,9);             // 0
        print_3(a,86,29,4);
        print_3(a,78,29,4);
        print_4(a,78,32,9);

        print_4(a,78,35,9);             // 1

        print_4(a,78,38,9);
        print_3(a,86,38,4);
        print_3(a,78,38,4);             // 0
        print_4(a,78,41,9);

        print_4(a,90,40,10);
        print_3(a,90,40,4);
        print_5(a,93,40,4);
        print_6(a,92,40,4);
        print_5(a,98,40,4);             // yang
        print_4(a,90,45,10);
        print_3(a,90,45,4);
        print_4(a,90,48,10);
        print_3(a,94,45,4);
        print_3(a,99,45,4);

        print_6(a,c[1]-20,55,3);
        print_4(a,c[5]-7,58,4);
        print_5(a,93,59,c[4]-102);      // guang
        print_3(a,93,c[5]-43,9);
        print_5(a,99,c[10]-50,5);
        print_4(a,93,59,  c[8]-99);
        print_3(a,c[9]-11,59,5);

        // printf(" *");                // 基准点
        printf("\n\n\n\n\n\n");

        for(i=0;i<100;i++)
        {
            printf("\n");
            for(j=0;j<66;j++)
                printf("%2c",a[i][j]);
        }
        printf("\n\n\n\n\n\n\n");
    }
    else
        printf("\n\n\t Sorry ! This is not writting for you ......\n\n");

    printf("\n\n\n\t\t\t 阳光boy 原创 （*^_^*）！！！\n\n");
    getchar();

    return 0;
}