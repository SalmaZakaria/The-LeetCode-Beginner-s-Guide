class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            if(i == 0)
                v[i] = nums[i];
            else
                v[i] = v[i - 1] + nums[i];
        }
        return v;
    }
};
