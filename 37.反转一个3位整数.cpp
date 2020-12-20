class Solution {
public:
    /**
     * @param number: A 3-digit number.
     * @return: Reversed number.
     */
    int reverseInteger(int number) {
        // write your code here
        int i, j, k;
        int result;
        i = number / 100;
        j = (number - i * 100) / 10;
        k = number % 10;
        result = k * 100 + j * 10 + i;
        return result;
    }
};
