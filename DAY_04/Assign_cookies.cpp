// greeddiya hai sabka and cookies size diya hai 
// we have to assign cookies taki greed satisfy ho and
// kisi ko bhi prbolem naa hoo
// sort kar dene dono array ko and compare karenge s[i]>=j[i]



class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(begin(g), end(g));
        sort(begin(s), end(s));

        int n = g.size();
        int m = s.size();

        int i = 0, j = 0;

        while (i < n && j < m) {  
            if (g[i] <= s[j]) {  
                i++;  
            }
            j++;  
        }
        return i;  
    }
};

