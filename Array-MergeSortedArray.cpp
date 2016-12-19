class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> v(m+n);
        int i=0;
        int j=0,k=0;
        while(j<m && k<n && i< m+n )
        {
            if(nums1[j]>nums2[k])
            {
                v[i]=nums2[k];
                k++;
            }
            else 
            {
                v[i]=nums1[j];
                j++;   
            }
            i++;
        }
        while(j<m && i<m+n)
        {
            v[i]=nums1[j];
            j++;i++;
        }
        while(k<n && i<m+n)
        {
            v[i]=nums2[k];
            k++;i++;
        }    
        for(int i=0;i<m+n;i++)
            nums1[i]=v[i];
    }
};
