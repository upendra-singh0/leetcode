class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        vector<int> vec(2);
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(target-nums[i])==m.end())
                m[nums[i]]=i;
            else
            {
                vec[0]=m[target-nums[i]];
                vec[1]=i;
                break;
            }
        }
        return vec;
    }
};
