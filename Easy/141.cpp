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
    unordered_set<ListNode*>mp;
    bool hasCycle(ListNode *head) {
        while(head){
          if(mp.find(head)!=mp.end())
            return true;
          else
            mp.insert(head);
          head=head->next;
        }
      return false;
    }
};
