class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long int a=nums[0];
        long long int b=-2147483649;
        long long int c=-2147483649;
        
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>a)
            {
                c=b;
                b=a;
                a=nums[i];
            }
            else if(nums[i]!=a && nums[i]>b)
            {
                c=b;
                b=nums[i];    
            }
            else if(nums[i]!=a && nums[i]!=b && nums[i]>c)
            {
                c=nums[i];
            }
            cout<<a<<" : "<<b<<" : "<<c<<endl;
        }
        if(c!=-2147483649) 
        return c;
        return a;
        
    }
};
