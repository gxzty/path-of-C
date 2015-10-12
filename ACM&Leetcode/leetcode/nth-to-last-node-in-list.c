#include <stdio.h>

//返回一个链表倒数第n个节点的值

typedef struct ListNode {
    int val;
    struct ListNode *next;
}ListNode;

ListNode *nthToLast(ListNode *head, int n) {
    // write your code here
    ListNode* pFast , * pSlow;
    pFast = pSlow = head;
    while (n > 0) {
        pFast = pFast->next;
        n--;
    }
    while (pFast != NULL) {
        pSlow = pSlow->next;
        pFast = pFast->next;
    }
    return pSlow;
}

int main(int argc, char *argv[])
{
    
    return 0;
}