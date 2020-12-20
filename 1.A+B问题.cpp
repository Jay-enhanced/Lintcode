class Solution {
public:
    /**
     * @param a: An integer
     * @param b: An integer
     * @return: The sum of a and b 
     */
    int aplusb(int a, int b) {
        // write your code here
        int carry_bit = a & b;
        int result = a ^ b;
        while(carry_bit)
        {
            int t_a = result;
            int t_b = carry_bit << 1;
            carry_bit = t_a & t_b;
            result = t_a ^ t_b;
        }
        return result;
    }
};
