class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size();
        int fi=0,fd=0;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]<=nums[i+1])
            continue;
            else{
            fi=1;
            break;}
        }
        for(int j=0;j<n-1;j++)
        {
            if(nums[j]>=nums[j+1])
            continue;
            else{
            fd=1;
            break;}
        }
        return fi==0||fd==0;
    }
};