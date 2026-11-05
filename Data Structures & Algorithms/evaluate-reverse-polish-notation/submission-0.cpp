class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> num;

        for(auto a: tokens) {
            int op1, op2;
            if (a=="+") {
                op1 = num.top();
                num.pop();
                op2 = num.top();
                num.pop();
                num.push(op2+op1);
            } else if (a=="*") {
                op1 = num.top();
                num.pop();
                op2 = num.top();
                num.pop();
                num.push(op2*op1);
            } else if (a=="-") {
                op1 = num.top();
                num.pop();
                op2 = num.top();
                num.pop();
                num.push(op2-op1);
            } else if (a=="/") {
                op1 = num.top();
                num.pop();
                op2 = num.top();
                num.pop();
                num.push(op2/op1);
            } else {
                num.push(stoi(a));
            }
        }
        return num.top();
    }
};
