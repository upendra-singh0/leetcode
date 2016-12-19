class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        vector<bool> v(n,0);
        v[0]=1;
        int x=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]==0) return false;
            if(v[n-1]) return true;
            for(int j=x+1;j<i+nums[i]+1;j++)
            {
                if(v[j]==0)
                    v[j]=1;
            }
            x=i+nums[i];
        }
        return v[n-1];
    }
};
