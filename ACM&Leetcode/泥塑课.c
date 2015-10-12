/*样例1
输入：
3
10 10 2 Jill
5 3 10 Will
5 5 10 Bill
4
2 4 10 Cam
4 3 7 Sam
8 11 1 Graham
6 2 7 Pam
-1
输出：
Bill took clay from Will.
Graham took clay from Cam.
*/
#include <stdio.h>
typedef struct littlefriend{
    char name[8];//不超过八个字符的名字
    int a,b,c,v;//泥团长宽高，体积
}lf;


int main(int argc, char *argv[])
{
    int n;//班里有n个人
    lf a[9] = {0};
    while (scanf("%d",&n), n != -1 && n != 0){
        int i = 0;
        int count = n;
        while (i < count){
            scanf("%d%d%d%s",&a[i].a , &a[i].b , &a[i].c , &a[i].name);
            a[i].v = a[i].a * a[i].b * a[i].c;
            i++;
        }
        lf temp;
        i--;
        while (0 < i){
            if (a[i].v < a[i-1].v){
                temp = a[i]; a[i] = a[i-1]; a[i-1] = temp; 
            }
            i--;
        }
        while (i < count-1){
            if (a[i].v > a[i+1].v){
                temp = a[i]; a[i] = a[i+1]; a[i+1] = temp; 
            }
            i++;
        }
        printf("%s took clay from %s\n",a[count-1].name,a[0].name);
    }
    return 0;
}
