class Solution {
public:
    bool isValid(string s) {
        int len=s.length();
        stack<char> c;
        for(int i=0;i<len;i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[' ) c.push(s[i]);
            else if(s[i]==')' || s[i]=='}' || s[i]==']' )
            {
                if(c.empty())
                    return false;
                else if(s[i]==')' && c.top()=='(')
                    c.pop();
                else if(s[i]=='}' && c.top()=='{')
                    c.pop();
                else if(s[i]==']' && c.top()=='[')
                    c.pop();
                else
                    return false;
            }
            
        }
        if(c.empty())
                return true;
        else 
                return false;
    }
};