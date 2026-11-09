class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(char c : s){
            if(c == '(' || c == '{' || c == '['){
                st.push(c);
                continue;
            }if(st.empty()){
                return false;
            }
            
            else if(c == ')' && st.top() == '(' ||
                    c == '}' && st.top() == '{' ||
                    c == ']' && st.top() == '['){
                st.pop();
                continue;
                }
            else{
                return false;
            }
        }
        return st.empty();
    }
};
