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
    ListNode* rotateRight(ListNode* head, int k) {
        // Handle head & base cases:
        if(! head) return head;

        ListNode* tmp = head;
        int len=1; //size of LinkedList
        while(tmp->next) { //TODO
            tmp = tmp->next;
            len++;
        }

        if(k > len) k %= len;
        k = len - k; //SOURCE OF ERROR
        if(k==0 || k==len) return head; //if nortation not needed

        // Handle current nodes:
        ListNode* curr = head;
        int count = 1;
        while(count < k && curr) {
            curr = curr->next; //update
            count++;
        }
        if(! curr) return head;

        //Handle k-th node:
        ListNode* nodeK = curr;
        tmp->next = head;
        head = nodeK->next;
        nodeK->next = NULL;
        return head; //not nodeK
    }
};
