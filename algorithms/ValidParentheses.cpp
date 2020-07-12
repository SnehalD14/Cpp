class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        if(s.length() == 0) return true; 
        if(s.length() == 1) return false;

        for(int i=0;i<s.length();i++){
            if(s[i]=='('|| s[i]=='['||s[i]=='{'){
                stack.push(s[i]);
            }
            else{
                if(stack.empty()) return false;
                else if(s[i]=='}'&& stack.top()=='{') stack.pop();
                else if(s[i]==']'&& stack.top()=='[') stack.pop();
                else if(s[i]==')'&& stack.top()=='(') stack.pop();
                else{
                     return false;
                    
                }
            }
        }
        return stack.empty();
        
    }
};
