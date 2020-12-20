class Solution {
public:
    /**
     * @param nums: The integer array you should partition
     * @param k: An integer
     * @return: The index after partition
     */
    int partitionArray(vector<int> &nums, int k) {
        // write your code here
        int i = 0, j = nums.size() - 1;
        while(i <= j)
        {
            while(i <= j && nums[i] < k) i++;
            while(i <= j && nums[j] >= k) j--;
            if(i <= j)
            {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                i++;
                j--;
            }
        }
        return i;
    }
};
