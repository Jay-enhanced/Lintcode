int median(vetor<int> &nums)
{
    int len = nums.size();      //get nums length.
    int k = (len + 1) / 2;      //get the median position
    priority_queue<int> que;    

    for(int i = 0; i < len; i++)
    {
        if(que.size() == k)
        {
            if(nums[i] < que.top())
            {
                que.pop();
                que.push(nums[i]);
            }
        }
        else
        {
            que.push(nums[i]);
        }
    }

    return que.top();
}