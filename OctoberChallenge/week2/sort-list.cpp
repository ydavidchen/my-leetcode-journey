/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        vector<int> lst;
        ListNode* ptr = head;
        
        while(ptr) {
            lst.push_back(ptr->val);
            ptr = ptr->next;
        }
        
        sort(lst.begin(), lst.end());
        
        ptr = head;
        for(auto val : lst) {
            ptr->val = val;
            ptr = ptr->next;
        }
        return head;
    }
    
};
