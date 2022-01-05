class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int minLen =INT_MAX;
        int low =0;
        int high = 0;
        int currSum =0;
        
        for(int high=0 ; high<n ; ++high){
            currSum += nums[high];
            
            while(currSum >= target){
                minLen = (high-low+1 < minLen) ? high-low+1 : minLen;
                currSum -= nums[low];
                ++low;
            }
        }
        if(minLen == INT_MAX)
            return 0;
        return minLen;
    }
};
