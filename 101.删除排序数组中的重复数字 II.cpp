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
        int duplicates_flag = 0;
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[index] == nums[i])
            {
                if(duplicates_flag == 0)
                {
                    duplicates_flag = 1;
                    nums[++index] = nums[i];
                }                              
            }
            else
            {
                nums[++index] = nums[i];
                duplicates_flag = 0;
            }            
        }
        return index + 1;
    }
};