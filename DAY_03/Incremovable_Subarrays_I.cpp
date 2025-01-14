// this is easy marked due to constraint and brute force se kaam chal jayega
// we will try removing all the subarray while checking that the remaing part is strictly 
// increasing or not and we'll count the number

// easy hai but aab bhi pura clear nahi huaa hai 
// baad mein revist kar abhi nahi samajh



class Solution {
public:
    int incremovableSubarrayCount(vector<int>& nums) {
        int count=0;
        int n=nums.size();

        for(int i=0;i<n;i++)
        {
           for(int j=i;j<n;j++)

            {
                int check=1;
                int last_elem=-1;

                for(int k=0;k<n;k++)
                {
                    if(k >= i && k <= j)
                    {
                        continue;
                    }

                    if(last_elem>=nums[k])
                    {
                        check=0;
                        break;
                    }
                    
                                   last_elem=nums[k];
                                   

                }
                if(check)
                    {
                        count++;
                    }
                 
            }
        }
        return count;
    }
};