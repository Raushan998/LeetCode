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
    int length(ListNode* head){
      int l=0;
      while(head){
        head=head->next;
        l++;
      }
      return l;
    }
    bool isPalindrome(ListNode* head) {
      int l=length(head);
      ListNode* temp=head;
      ListNode* c;
      ListNode* p=NULL;
      ListNode* N;
      int t=l/2;
      while(t--){
        temp=temp->next;
      }
      c=temp;
      while(c!=NULL){
        N=c->next;
        c->next=p;
        p=c;
        c=N;
      }
      temp=p;
      while(temp){
        if(temp->val==head->val){
          head=head->next;
          temp=temp->next;
        }
        else
          return false;
      }
      return true;
    }
};
