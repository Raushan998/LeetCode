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
    void deleteNode(ListNode* node){
      if(!node)
        return;
      ListNode* prev=node;
      while(node && node->next){
        node->val=node->next->val;
        prev=node;
        node=node->next;
      }
      if(!node->next)prev->next=nullptr;
    }
};

