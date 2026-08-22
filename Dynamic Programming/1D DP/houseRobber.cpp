class Solution {
    public:
        int rob(vector<int>& nums) {
            if(nums.size()==1) return nums[0];
            int prev2=nums[0];
            int prev=nums [1];
            int curr=max(prev, prev2);
            for(int i = 2 i<nums.size(); i++){
                curr=max(prev, prev2+nums[i]);
                prev2=max(prev2, prev);
                prev=curr;
            }
            return curr;
}
};
