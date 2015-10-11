#include <stdio.h>

void sortarray(int a[] , int alen, int b[] , int blen ){
    int *pa = &a[0] , *pb = &b[0];
    int c[alen+blen];
    int *pc = &c[0];
    while (alen && pb != NULL){
        pc = pa<pb?pa++:pb++;
    }
    if (pa == NULL){
        while (pb != NULL){
            pc = pb++;
        }
    }
    else {
        while (pa != NULL){
            pc = pa++;
        }
    }
}

int main(int argc, char *argv[])
{
    int a[3] = {1,2,3};
    int b[3] = {1,3,5};
    int c[6] = {0};

    return 0;
}
