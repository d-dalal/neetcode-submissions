class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> a(nums.begin(), nums.end()); 
        if(a.size() == nums.size()) {
            return false;
        }
        return true;
    }
};