class Solution {
public:

    char matcher(char c) {
        if (c == '(') return ')';
        if (c == '[') return ']';
        if (c == '{') return '}';
        return '\0';
    }
    bool isValid(string s) {

        stack <char> stk;
        for (char c: s){

            if (c == '(' || c == '[' || c == '{') {
                stk.push(c);
            }

            else if (c == ')' || c == ']' || c == '}') {

                if (stk.empty()) {
                    return false;
                }
                else if (matcher(stk.top()) != c){
                    return false;
                }                

                else if (matcher(stk.top()) == c){
                    stk.pop();
                }
                
            }

        }
        if ( !stk.empty() ) {
            return false;
        }

        return true;
    }
};
