class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> a;
        if(s.length() != t.length()) return false;

        for(auto c: s) {
            a[c] += 1;
        }

        for(auto c: t) {
            if(a[c] == 0) return false;
            a[c] -= 1;
        }
        return true;
    }
};
