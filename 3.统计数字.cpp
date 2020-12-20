class Solution {
public:
    /**
     * @param k: An integer
     * @param n: An integer
     * @return: An integer denote the count of digit k in 1..n
     */
    int digitCounts(int k, int n) {
        // write your code here
        int cnt = 0;
        for(int i = k; i <= n; i++)
        {
            cnt += singleCount(i,k);
        }
        return cnt;
    }
    
    int singleCount(int i, int k)
    {
        if(i == 0 && k == 0) return 1;
        int cnt = 0;
        while(i > 0)
        {
            if(i % 10 == k)
            {
                cnt++;
            }
            i = i / 10;
        }
        return cnt;
    }
};
