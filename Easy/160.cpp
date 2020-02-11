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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode* > s;
        ListNode* first = headA;
        ListNode* second = headB;
        
        while (first != NULL) {
            s.insert(first);
            first = first->next;
        }
        
        while (second != NULL) {
            if (s.find(second) == s.end()) {
                second = second->next;
            } else {
                return second;
            }
        }
        return NULL;
    }
};
