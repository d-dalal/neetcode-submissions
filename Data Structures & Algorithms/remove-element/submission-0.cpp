class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ans=0;
        int size=nums.size();
        for(auto it=nums.begin();it!=nums.end();){
            if(*it == val) {
                ans++;
                it = nums.erase(it);
            } else {
                it++;
            }
        }
        return size-ans;
    }
};