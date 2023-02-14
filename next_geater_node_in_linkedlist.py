# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def nextLargerNodes(self, head: Optional[ListNode]) -> List[int]:
         # 4 5 6
        # 5 6 0
        l,stack,res =[] , [] , []
        while(head):
            l.append(head.val)
            head = head.next

        i= len(l)-1
        
        while(i>=0):
            while(stack!=[] and l[i]>=stack[-1]):
                stack.pop()

            if stack == []:
                stack.append(l[i])
                res.append(0)
            else:
                res.append(stack[-1])
                stack.append(l[i])
            i-=1
        return res[::-1]