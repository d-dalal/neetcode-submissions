class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        int n = a.size();
        sort(a.begin(), a.end());
        vector<vector<int>> ans;

        int i=0;
        while(i<n-2) {
            int find = (-1)*(a[i]);

            int j=i+1;
            int k=n-1;

            while(j<k) {
                int s = a[j]+a[k];
                if (s==find) {
                    ans.push_back({a[i], a[j], a[k]});
                    do {
                        j++;
                    } while(j<k && a[j-1] == a[j]);
                    do {
                        k--;
                    } while(j<k && a[k+1] == a[k]);
                } else if (s>find) {
                    k--;
                } else {
                    j++;
                }
            }
            do {
                i++;
            } while(i<n-2 && a[i-1] == a[i]);
        }
        return ans;
    }
};
