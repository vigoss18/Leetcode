/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    struct cmp{
        bool operator ()(const ListNode *a,const ListNode *b)
        {
            return a->val > b->val;
        }
    };
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*,vector<ListNode*>,cmp>q;
        for(int i = 0;i < lists.size();i++)
        {
            if(lists[i])
                q.push(lists[i]);
        }
        if(q.empty())
            return NULL;
        ListNode *ret = q.top();
        q.pop();
        ListNode *tmp = ret;
        if(ret->next)
            q.push(ret->next);
        while(!q.empty())
        {
            tmp->next = q.top();
            tmp = tmp->next;
            q.pop();
            if(tmp->next)
                q.push(tmp->next);
        }
        return ret;
    }
};