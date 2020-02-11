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
    ListNode* reverseList(ListNode* head) {
        ListNode* c=head;
        ListNode* p=NULL;
        ListNode* N;
        while(c!=NULL){
            N=c->next;
            c->next=p;
            p=c;
            c=N;
        }
        head=p;
        return head;
    }
};
