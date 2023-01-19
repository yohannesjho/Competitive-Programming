class Solution:
    def reverseParentheses(self, s: str) -> str:

        stack1 = []
        stack2 = []
        x = ""
        ans = ""

        for x in s:
            if x == ")":
                x = ""
                while stack1[-1] !="(":
                    x = x + stack1[-1]
                    stack1.pop()
                stack1.pop()
                for y in x:
                    stack1.append(y) 
                
            else:
                stack1.append(x)
        while stack1:
            stack2.append(stack1[-1])
            stack1.pop()
        while stack2:
            ans = ans + stack2[-1]
            stack2.pop()
        
        return ans
        



