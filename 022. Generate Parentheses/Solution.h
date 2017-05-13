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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *ret = new ListNode(0);
        ListNode *tret = ret;
        while(l1 != NULL || l2 != NULL)
        {
            tret->next = new ListNode(0);
            tret = tret->next;
            if(l1 == NULL)
            {
                tret->val = l2->val;
                l2 = l2->next;
            }
            else if(l2 == NULL)
            {
                tret->val = l1->val;
                l1 = l1->next;
            }
            else
            {
                if(l1->val < l2->val)
                {
                    tret->val = l1->val;
                    l1 = l1->next;
                }
                else
                {
                    tret->val = l2->val;
                    l2 = l2->next;
                }
            }
        }
        return ret->next;
    }
};