# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def rotateRight(self, head, k):
        """
        :type head: ListNode
        :type k: int
        :rtype: ListNode
        """
        if not head:
            return head;

        tmp = head;
        length = 1;
        while tmp.next:
            tmp = tmp.next;
            length += 1;

        if k > length:
            k %= length;
        k = length - k;
        if k==0 or k==length:
            return head;

        ## Handle current nodes:
        curr = head;
        count = 1;
        while count < k and curr:
            curr = curr.next;
            count += 1;

        if not curr:
            return head;

        ## Handle k-th node:
        nodeK = curr;
        tmp.next = head;
        head = nodeK.next;
        nodeK.next = None;
        return head;
