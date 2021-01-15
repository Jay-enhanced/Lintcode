class Solution {
public:
    /**
     * @param nums: the list of numbers
     * @return: return the maximum number.
     */
    int maxNum(vector<int> &nums) {
        // write your code here
        
        int max = nums.front();
        
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] > max)
                max = nums[i];
        }
        
        return max;
    }
};