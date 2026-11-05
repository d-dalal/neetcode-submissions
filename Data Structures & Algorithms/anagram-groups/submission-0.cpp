class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> holder;
        vector<vector<string>> ans;

        int i=0;
        for(auto a : strs) {
            sort(a.begin(), a.end());
            holder[a].push_back(strs[i]);
            i++;
        }

        for(auto a: holder) {
            ans.push_back(a.second);
        }

        return ans;
    }
};
