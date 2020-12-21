class Solution {
public:
    /*
     * @param string: An array of Char
     * @param length: The true length of the string
     * @return: The true length of new string
     */
    int replaceBlank(char string[], int length) {
        // write your code here
        //输入的参数不对，返回0
        if(string == NULL || length <= 0)
            return 0;
        //spaceCounts记录空格数量
        int spaceCounts = 0;
        int i = 0;
        while(string[i] != '\0')
        {
            if(string[i] == ' ')
                spaceCounts += 1;
            i++;
        }
        //得到新的长度
        int newLength = length + spaceCounts*2;
        //i为从后面开始遍历原数组的索引号
        i = length - 1;
        //j为从新数组的结尾开始的索引号
        int j = newLength - 1;
        //遍历数组，遇到空格就替换，否则直接将字符搬过去新的位置
        while(i >= 0 && j > i)
        {
            if(string[i] == ' ')
            {
                string[j--] = '0';
                string[j--] = '2';
                string[j--] = '%';
            }
            else
            {
                string[j--] = string[i];
            }
            i--;
        }
        return newLength;
    }
};
