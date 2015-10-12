#include <stdio.h>
//判断链表是否有环
 struct ListNode {
     int val;
     struct ListNode *next;
 };
int hasCycle(struct ListNode *head) {
    struct ListNode *q = head;
    struct ListNode *p = head;
    while((p != q) && (q != NULL) ) {
        *p++;
        *q++;
        *q++;
    }
    if (q == NULL) {
        return 0;
    }
    return 1;
}

int main(int argc, char *argv[])
{
    
    return 0;
}
