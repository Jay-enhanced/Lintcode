class Solution {
public:
    /**
     * @param A: A string
     * @param B: A string
     * @return: if string A contains all of the characters in B return true else return false
     */
    bool compareStrings(string &A, string &B) {
        // write your code here
        int count[26] = {0};
        
        for(int i = 0; i < A.length(); i++)
            count[A[i] - 'A']++;
        for(int j = 0; j < B.length(); j++)
        {
            count[B[j] - 'A']--;
            if(count[B[j] - 'A'] < 0)
                return false;
        }
        return true;
    }
};
