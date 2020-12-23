class Solution {
public:
    /**
     * @param nums: An integer array
     * @return: The second max number in the array.
     */
    int secondMax(vector<int> &nums) {
        // write your code here
        if(!nums.size())
            return 0;
            
        int maxNum, secondMaxNum;
        maxNum = max(nums[0], nums[1]);
        secondMaxNum = min(nums[0], nums[1]);
        for(int i = 2; i < nums.size(); i++)
        {
            if(nums[i] > maxNum)
            {
                secondMaxNum = maxNum;
                maxNum = nums[i];
            }
            else if(nums[i] > secondMaxNum)
                secondMaxNum = nums[i];
        }
        return secondMaxNum;
    }
};
