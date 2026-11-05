class Solution {
public:
    void sort(vector<int>& nums, int left, int right) {
        if(left == right) {
            return;
        } else if (right-left == 1) {
            if(nums[left] <= nums[right]) return;
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
            return;
        }

        int mid = (right+left)/2;

        sort(nums, left, mid);
        sort(nums, mid+1, right);

        vector<int> t(right-left+1);
        int i=left;
        int j=mid+1;
        int k=0;
        while(true){
            if(i==mid+1) break;
            if(j==right+1) break;
            if(nums[i] <= nums[j]) {
                t[k] = nums[i];
                k++;
                i++;
            } else {
                t[k] = nums[j];
                k++;
                j++;
            }
        }

        while(i<mid+1) {
            t[k] = nums[i];
            k++;
            i++;
        }
        while(j<right+1) {
            t[k] = nums[j];
            k++;
            j++;
        }
        i=left;
        while(i<right+1) {
            nums[i] = t[i-left];
            i++;
        }
        return;
    }
    vector<int> sortArray(vector<int>& nums) {
        int size = nums.size();
        sort(nums, 0, size-1);
        return nums;
    }
};