class Solution {
public:
    /**
     * @param A: an integer array
     * @return: nothing
     */
    void sortIntegers(vector<int> &A) {
        // write your code here
        //冒泡排序
        int i, j;
        for(i = 0; i < A.size()-1; i++)
        {
            for(j = 0; j < A.size()-i-1; j++)
            {
                if(A[j] > A[j+1])
                {
                    int temp;
                    temp = A[j];
                    A[j] = A[j+1];
                    A[j+1] = temp;
                }
            }
        }
    }
};
