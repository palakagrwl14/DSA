    class Solution {
    public:
        int minSubArrayLen(int target, vector<int>& nums) {
            int n = nums.size();
            int sum = 0;
            int minLen = INT_MAX;
            int left = 0;
                for(int i =0;i < n;i++){
                sum += nums[i];
                    while(sum >= target){
                        minLen = min(minLen, i-left+1);
                        sum -= nums[left];
                        left++;
                    }    
        }
            if(minLen == INT_MAX){
                return 0;}
        return minLen;
    }
    };