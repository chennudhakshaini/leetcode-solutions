class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int f=0,i;
        for(i=0;i<nums.size();i++)
        {
            int sum=0;
            int num=nums[i];
            while(num>0)
            {
                int rem=num%10;
                sum+=rem;
                num/=10;
            }
            if(sum==i)
            {
                f=1;
                break;
            }
        }
        if(f)
        return i;
        else
        return -1;
    }
};