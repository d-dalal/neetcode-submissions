class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int counter=0;
        int majorityElement=0;

        for(auto a: nums) {
            if(counter==0) {
                majorityElement=a;
                counter++;
            } else {
                if(a==majorityElement) {
                    counter++;
                } else {
                    counter--;
                }
            }
        }
        return majorityElement;
    }
};