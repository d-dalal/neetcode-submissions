class Solution {
public:
    void rotate(vector<int>& a, int k) {
        int n = a.size();

        k=k%n;
        
        int cnt=0;
        for (int j=0;j<k;j++) {
            int last = a[j], next, i=j;
            do {
                next = a[(i+k)%n];
                a[(i+k)%n] = last;
                last = next;

                i = (i+k)%n;
                cnt++;
            } while (i!=j);
            if (cnt==n) break;
        }
    }
};