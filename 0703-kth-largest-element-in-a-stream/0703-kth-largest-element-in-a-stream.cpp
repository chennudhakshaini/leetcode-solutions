class KthLargest {
    vector<int> array;
    int cap;
public:
    KthLargest(int k, vector<int>& nums) {
        cap=k;
        for(int i:nums)array.push_back(i);
        sort(array.begin(),array.end());
    }
    
    int add(int val) {
        array.push_back(val);
        int n=array.size(),i=n-1,k=array[i],j=i-1;
        while(j>=0&&array[j]>k){
        array[j+1]=array[j];
        j--;}
        array[j+1]=k;
        return array[n-cap];
    }
    
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */