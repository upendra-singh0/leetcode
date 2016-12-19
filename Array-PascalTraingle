class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int> > v (rowIndex+1, vector<int> (rowIndex+1));
        for(int i=0;i<rowIndex+1;i++)
        {
            for(int j=0;j<=i;j++)
            {
                if(j==0)
                    v[i][j]=1;
                else if(i==j)
                    v[i][j]=1;
                else 
                    v[i][j]=v[i-1][j]+v[i-1][j-1];
            }
        }
        return v[rowIndex];
    }
};
