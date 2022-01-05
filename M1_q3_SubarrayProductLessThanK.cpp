class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k==0)
            return 0;
        
        int product=1, count=0;
        
        //keep 2 points low:left most of window, high:curr rightmost of window

        int low=0,high=0;
        while(high <nums.size()){
            product *= nums[high];
            
            //if product more than k, discard elements from leftmost
            while(low<=high && product>= k){
                product /= nums[low];
                ++low;
            }
            
            count += high-low+1; //add count of new subarrays whose window ends at index high.
            ++high;
        }
        return count;
    }
};
