// is me hamlog ko arrange karna hai ek small ek bada ek small ek bada
// simple approach hai  sort kar lo 
// aab i=1 se start karo and j=n-1 and i ko ek jum karake ja ke values i mein daal do
// uske baad i ko 0 kar do and aab small values insert kar do 




class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int>ans(nums.size());
        sort(nums.begin(),nums.end());
        int n= nums.size();

        int i=1 ,j=n-1;

        while(i<n)
        {
            ans[i]=nums[j];
            i=i+2;
            j--;
        }

        i=0;

        while(i<n)
        {
            ans[i]=nums[j];
            i=i+2;
            j--;
        }

        for(int k=0;k<n;k++)
        {
            nums[k]=ans[k];
        }
    }
};