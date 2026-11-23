class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> paired;
        int n = position.size();

        for(int i=0;i<n;i++) {
            paired.push_back({position[i], speed[i]});
        }

        sort(paired.begin(), paired.end());

        stack<float> st;

        for(int i=n-1;i>=0;i--) {
            float t = (1.0*(target - paired[i].first)/paired[i].second);
            // cout << t << " ";
            if(st.empty()) {
                st.push(t);
            } else {
                if (st.top()<t) {
                    st.push(t);
                }
            }
        }
        return st.size();
    }
};
