class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int right = n-2;
            while(right >= 0 && nums[right] >= nums[right+1]){
                right--;
            }
             if (right >= 0) {
            int j = n - 1;
            while (nums[j] <= nums[right]) {
                j--;
            }
            swap(nums[right], nums[j]);
        }
        reverse(nums.begin() + right + 1, nums.end());
           
    }
};