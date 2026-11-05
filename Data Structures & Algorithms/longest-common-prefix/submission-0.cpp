class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int size=strs.size();
        int x=1;
        string sub;
        string ans;
        bool flag=true;

        while(true) {
            if(x > strs[0].length()) break;
            sub = strs[0].substr(0,x);
            // cout << sub << " ";
            for(int i=1;i<size;i++) {
                if(x > strs[i].length() || sub != strs[i].substr(0,x)) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                ans = sub;
            }
            x++;
        }
        return ans;
    }
};