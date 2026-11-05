class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& a, int target) {
        sort(a.begin(), a.end());
        int n = a.size();
        vector<vector<int>> ans;

        if(n<4) {
            return {};
        }

        int i=0,j;

        while(i<n-3) {
            j = i+1;
            while(j<n-2) {
                long long find = (long long)target-a[i]-a[j];
                cout << find << " ";
                int k=j+1, l=n-1;
                while(k<l) {
                    long long sum = (long long)a[k]+a[l];
                    if(find==sum) {
                        ans.push_back({a[i], a[j], a[k], a[l]});
                        do {
                            l--;
                        } while(k<l && a[l+1]==a[l]);
                        do {
                            k++;
                        } while(k<l && a[k-1]==a[k]);
                    } else if (sum>find) {
                        do {
                            l--;
                        } while(k<l && a[l+1]==a[l]);
                    } else {
                        do {
                            k++;
                        } while(k<l && a[k-1]==a[k]);
                    }
                }
                do {
                    j++;
                } while(j<n-2 && a[j-1]==a[j]);
            }
            do {
                i++;
            } while(i<n-3 && a[i-1]==a[i]);
        }
        return ans;
    }
};