// array ko equal karna hai
// 1st thought median nikalo and aab sab elemnt 
// ko uske pass pochna hai inc ya decre hoke 
// approach kya hai sort kar do array and mid elemnt find karo
// aab array ko iterrate karo and sab element ko mid se minus karo 
// done pata chal jayega kitna moves chahiye array ko equal karne ke liye

class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int mid=nums[n/2];
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans+=abs(mid-nums[i]);
        }
return ans;
    }
};
