/**
Given a non-empty, singly linked list with head node head, 
return a middle node of linked list.
If there are two middle nodes, return the second middle node.

Examples:
    Input: [1,2,3,4,5]
    Output: Node 3

    Input: [1,2,3,4,5,6]
    Output: Node 4

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
    ListNode* middleNode(ListNode* head) {
        // Traverse through List with 2 pointers: fast = 2x slow
        // When fast reaches the end, slow must be in middle
        // Time: O(n) for traversing through the list
        // Space: O(1) for each ptr
        ListNode * slow = head;
        ListNode * fast = head;
        
        while(fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        return slow;
    }
};