class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        int a=nums[0];
        int j=0;
        for(int i=1;i<n;i++)
        {
            if(nums[i]!=a)
              {
                  j++;
                  a=nums[i];
                  nums[j]=a;
              }
        }
        return j+1;
    }
};
