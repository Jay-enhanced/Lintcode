class Solution {
public:
    /**
     * @param A: an integer rotated sorted array
     * @param target: an integer to be searched
     * @return: an integer
     */
    int search(vector<int> &A, int target) {
        // write your code here
        int first = 0, last = A.size();
        while(first != last)
        {
            const int mid = (first + last) >> 1;
            if(A[mid] == target)
                return mid;
            if(A[first] <= A[mid])
            {
                if(A[first] <= target && target <= A[mid])
                    last = mid;
                else
                    first = mid + 1;
            }
            else
            {
                if(A[mid] <= target && target <= A[last-1])
                    first = mid + 1;
                else
                    last = mid;
            }
        }
        return -1;
    }
};