class Solution:
    def isValid(self, s: str) -> bool:

        stack = []
        for x in s:
            if x == "(" or x == "{" or x == "[":
                stack.append(x)
            
            elif not stack:
                return False
            elif x == ")" and stack[-1] != "(":
                return False
            elif x == "}" and stack[-1] != "{":
                return False
            elif x == "]" and stack[-1] != "[":
                return False
            else: 
                stack.pop()
        if not stack:
            return True
        else:
            return False