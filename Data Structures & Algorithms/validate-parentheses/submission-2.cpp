class Solution {
   public:
    bool isValid(string s) {
        stack<char> charset;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                charset.push(s[i]);
            } else {
                if (charset.empty()) return false;
                if (s[i] == '}' && charset.top() == '{') {
                    charset.pop();
                }

                else if (s[i] == ')' && charset.top() == '(') {
                    charset.pop();
                }

                else if (s[i] == ']' && charset.top() == '[') {
                    charset.pop();
                } else
                    charset.push(s[i]);
            }
        }
        if (charset.empty())
            return true;
        else
            return false;
    }
};
