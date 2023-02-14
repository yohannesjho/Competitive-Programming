 # Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """

        C = 0
        s = 0
        dummy = ListNode()
        curr = dummy
        
        while l1 or l2 or C:
            if (not l1 or not l2) and not C:
                curr.next = l1 or l2
                break
            s = C
            if l1:
                s += l1.val
                l1 = l1.next
            if l2:
                s += l2.val
                l2 = l2.next
            C = s / 10
            curr.next = ListNode(s % 10)
            curr = curr.next
        
        return dummy.next