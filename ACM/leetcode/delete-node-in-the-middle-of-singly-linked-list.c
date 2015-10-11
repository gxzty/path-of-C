#include <stdio.h>

/*
给定一个单链表中的表头和一个等待被删除的节点(非表头或表尾)。
请在在O(1)时间复杂度删除该链表节点。并在删除该节点后，返回表头。
给定 1->2->3->4，和节点 3，返回 1->2->4。
google面试题
*/

void deleteNode(ListNode *node) {
    // write your code here
    node->val = node->next->val;
    node->next = node->next->next;
}

int main(int argc, char *argv[])
{
    
    return 0;
}
