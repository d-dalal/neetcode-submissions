class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& a, int k) {
        int n=a.size();
        vector<int> ans;

        int max=INT_MIN;
        int max_i=-1;

        for(int i=0;i<k;i++) { // k=3
            if (max<=a[i]) {
                max=a[i];
                max_i=i; // 1
            }
        }
        ans.push_back(max); // [3]
        
        int i=1,j=k; 
        for (;j<n;j++,i++) {
            if (a[j]>max) { // 0>3
                max = a[j];
                max_i=j;
            } else if (a[i-1]<max) { // 3<3
                // do nothing
            } else if (a[i-1]==max) { // 3==3
                if (max_i==i-1) { // 
                    max=INT_MIN;
                    for(int l=i;l<=j;l++) {
                        if (max<=a[l]) {
                            max=a[l];
                            max_i=l;
                        }
                    }
                }
            }
            ans.push_back(max); //[3,3]
        }
        return ans;
    }
};
