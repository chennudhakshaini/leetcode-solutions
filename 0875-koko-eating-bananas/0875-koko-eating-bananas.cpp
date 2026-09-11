class Solution {
public:
   bool totalhours(vector<int>&piles,int k,int h)
   {
    double hours=0;
    for(int i=0;i<piles.size();i++)
    {
        hours+=ceil((double)piles[i]/k);
    }
    return hours<=h;
   }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1,r=*max_element(piles.begin(),piles.end());
        while(l<=r)
        {
            int m=l+((r-l)/2);
            if(totalhours(piles,m,h))
            {
                r=m-1;
            }
            else
            l=m+1;
        }
        return l;
    }
};