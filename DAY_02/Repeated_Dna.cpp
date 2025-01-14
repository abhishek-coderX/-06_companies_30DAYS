// here we have to find the repeated substring 10 letter long
// 10 letter long substring find karo and hasp map mein store karo 
// aab jiska count ek se jyada hai wahi ans hai



class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
       vector<string>ans;
       int n=s.length();
       if(n<=10)
       {
        return ans;
       }

       unordered_map<string,int>mp;

       // hash map mein substring store kar raha hai
       for(int i=0;i<n-10;i++)
       {
        string h=s.substr(i,10);
        mp[h]++;
       }

       // hash map mein iterrate karke check ki 
       // koi repeated hai kya

       for(auto x:mp)
       {
        if(x.second>1)
        {
            ans.push_back(x.first);
        }
       }
       return ans;
       
    }
};
