
#include <stdio.h>

struct ListNode 
{
 int val;
 struct ListNode *next;

};



struct ListNode* swapPairs(struct ListNode* head){
    struct ListNode *tmp1 = NULL;
    struct ListNode *tmp2 = NULL;
    struct ListNode *tmp3 = NULL;

    if(tmp1 = head) {
        if (tmp2 = head->next) {
                tmp3 = head->next->next;
            
                head = tmp2;
                head->next = tmp1;

                /* If there are more than 2 nodes, swap remaining list recursively */
                head->next->next = swapPairs(tmp3);
        }
    }

    return head;
}