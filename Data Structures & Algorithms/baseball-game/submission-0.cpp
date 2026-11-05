class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> score;

        int prev_prev = INT_MIN;
        int prev = INT_MIN;
        for (auto a: operations) {
            if (a=="+") {
                int n1 = score.top();
                score.pop();
                int n2 = score.top();
                score.push(n1);
                score.push(n1+n2);
            } else if (a=="C") {
                score.pop();
            } else if (a=="D") {
                score.push(2*score.top());
            } else {
                int num = stoi(a);
                score.push(num);
            }
        }

        int sum=0;
        while(!score.empty()) {
            sum+=score.top();
            score.pop();
        }
        return sum;
    }
};