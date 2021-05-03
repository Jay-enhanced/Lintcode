class Solution {
public:
    /**
     * @param A: a list of integers
     * @return : return an integer
     */
    int removeDuplicates(vector<int> &nums) {
        // write your code here
        if(nums.empty()) 
            return 0;
        
        int index = 0;
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[index] != nums[i])
                nums[index+=2] = nums[i];
        }
        return index + 1;
    }
};