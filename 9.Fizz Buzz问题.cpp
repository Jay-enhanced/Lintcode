class Solution {
public:
    /**
     * @param n: An integer
     * @return: A list of strings.
     */
    vector<string> fizzBuzz(int n) {
        // write your code here
        vector<string> output;
        for(int i = 1; i <= n; i++)
        {
            i % 15 == 0 ? output.push_back("fizz buzz") : i % 5 == 0 ? output.push_back("buzz") : i % 3 == 0 ? output.push_back("fizz") : output.push_back(to_string(i));
        }
        return output;
    }
};
