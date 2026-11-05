class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) { // 2, 6
        int could_be=0;

        int n=arr.size();
        vector<int> ans(k);

        for(int i=0;i<n;i++) { // 2, 4, 5 ,8
            if (arr[i]<=x) {
                could_be=i; // i=2
            }
        }

        int i,j;
        i=could_be; // 2
        j=could_be+1; // 3
        while(k>0) {
            if(i>=0 && j<n) { // 1>=0 && 3<4
                if (x-arr[i] <= arr[j]-x) { // 2 < 2
                    ans[k-1]=arr[i]; //[4,5]
                    i--; // 0
                } else {
                    ans[k-1]=arr[j];
                    j++;
                }
            } else if (i>=0) {
                ans[k-1]=arr[i];
                i--;
            } else {
                ans[k-1]=arr[j];
                j++;
            }
            k--; // 0
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};