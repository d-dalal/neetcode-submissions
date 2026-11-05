class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<int> a;
        int n = temp.size();
        vector<int> ans(n, 0);

        a.push(n-1);

        for(int i=n-1;i>=0;i--) {
            while (!a.empty() && temp[i] >= temp[a.top()]) {
                a.pop();
            }
            if (!a.empty()) {
                ans[i]=a.top()-i;
            }
            a.push(i);
        }
        return ans;
    }
};
