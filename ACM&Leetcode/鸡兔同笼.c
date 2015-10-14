#include<stdio.h>

int main() {
    int array;
    int head, leg, ji, tu;
    scanf("%d",&array);
    while (array--) {
        scanf("%d%d",&head,&leg);
        tu = (leg - 2 * head) / 2;
        ji = head - tu;
        if ((ji * 2 + tu * 4 == leg) && ji >= 0 && tu >= 0) {
            printf("%d %d\n", ji, tu);
        } else {
            printf("No answer\n");
        }
    }
    return 0;
}