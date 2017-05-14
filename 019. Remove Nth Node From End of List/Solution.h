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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *now = head;
        int cnt = 1;
        while(now->next)
        {
            cnt++;
            now = now->next;
        }
        n = cnt - n;
        now = head;
        if(n == 0)
            return head->next;
        while(--n)
        {
            now = now->next;
        }
        now->next = now->next->next;
        return head;
    }
};