/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ret = new ListNode(0);
        ListNode* tret = ret;
        int temp = 0;
        while(l1 != NULL || l2 != NULL)
        {
            (tret->next) = new ListNode(temp);
            tret = (tret->next);
            if(l1 != NULL)
            {
                (tret->val) += (l1->val);
                l1 = (l1->next);
            }
            if(l2 != NULL)
            {
                (tret->val) += (l2->val);
                l2 = (l2->next);
            }
            temp = (tret->val) / 10;
            (tret->val) %= 10;
        }
        if(temp != 0)
        {
            tret->next = new ListNode(temp);
        }
        return ret->next;
    }
};