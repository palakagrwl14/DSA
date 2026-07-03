class Solution {
public:
    vector<vector<int>> ans;
    vector<int> instore;
    void sbset(vector<int>& nums, int index){
        
            ans.push_back(instore);

            for(int i =index;i < nums.size();i++){
                instore.push_back(nums[i]);
                sbset(nums, i+1);
                instore.pop_back();
            }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        sbset(nums, 0);

        return ans;
    }
};