class Solution {
public:
    bool isValid(string s) {
        stack<char> paran;

        for (auto c: s) {
            if (c=='[' || c=='(' || c=='{') {
                paran.push(c);
            } else if (paran.empty()) {
                return false;
            } else if (c==']') {
                if (paran.top() == '[') {
                    paran.pop();
                } else {
                    return false;
                }
            } else if (c==')') {
                if (paran.top() == '(') {
                    paran.pop();
                } else {
                    return false;
                }
            } else if (c=='}') {
                if (paran.top() == '{') {
                    paran.pop();
                } else {
                    return false;
                }
            }
        }
        if (!paran.empty()) {
            return false;
        }
        return true;
    }
};
