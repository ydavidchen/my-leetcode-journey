/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode rotateRight(ListNode head, int k) {
        // Handle head & base cases:
        if(head==null) return head;

        ListNode tmp = head;
        int len=1;
        while(tmp.next != null) {
            tmp = tmp.next;
            len++;
        }

        if(k > len) k %= len;
        k = len - k;
        if(k==0 || k==len) return head;

        // Handle current nodes:
        ListNode curr = head;
        int count = 1;
        while(count < k && curr != null) {
            curr = curr.next; //update
            count++;
        }
        if(curr==null) return head;

        //Handle k-th node:
        ListNode nodeK = curr;
        tmp.next = head;
        head = nodeK.next;
        nodeK.next = null;
        return head;
    }
}
