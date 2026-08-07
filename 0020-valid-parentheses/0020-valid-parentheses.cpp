class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> st;
        int i=0;      
        while ( i<s.length()) {
            char c =s[i];
            if (c == '(' || c == '[' || c == '{') {
                st.push(c);
            } 
            else {
                if (st.empty()) return false;
                char top = st.top();
                if ((c == ')' && top == '(') ||
                    (c == ']' && top == '[') ||
                    (c == '}' && top == '{')) {
                    st.pop(); 
                } else {
                    return false; 
                }
            }
            i++;
        }
        return st.empty();
    }
};