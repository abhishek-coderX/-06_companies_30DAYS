// approach ye hai ki we find ki uske kitne neighbous hai and uska unka average nikalna hai
// vector direction define kiya hai from which we are checking the neighbours 
// ek naya matrix banaya because when we store average it will be counted so naya banane ki jarurat padi
// auto loop simplifies iteration by automatically detecting data types.
//It avoids errors and is efficient for traversing complex structures like vectors of vectors.

class Solution {
public:
   vector<vector<int>> directions
    {
        {-1, -1}, {-1, 0}, {-1, 1},
        {0, -1}, {0, 0}, {0, 1},
        {1, -1}, {1, 0}, {1, 1}
    };

    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m=img.size();  
        int n=img[0].size();
     
     vector<vector<int>>result(m,vector<int>(n,0));

     for(int i=0;i<m;i++)
     {
        for(int j=0;j<n;j++)
        {
            int sum_neigh=0;
            int count_neigh=0;

            for(auto &it:directions)
            {
                int i_=i+it[0];
                int j_=j+it[1];

                if (0 <= i_ && i_ < m && 0 <= j_ && j_ < n)
                {
                    sum_neigh += img[i_][j_];
                    count_neigh += 1;
                }
            }

            result[i][j]=sum_neigh/count_neigh;
        }
     }
     return result;
    }
};