
// longest mountain find out karna hai
// mountain matlab uska prev and next current se chhota ho
// mutilpe mountains mein se sabse long mountain konsa hai


// we need to find the peak point and then left mein traverse karenge and
// then right mein traverse karenge




class Solution {
public:        
    int longestMountain(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;

        for (int i = 1; i < n - 1;) { 
            
            // Loop through array
            // Check if arr[i] is a peak
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
                int j = i;
                int count = 1;

                // Expand left from the peak
                while (j > 0 && arr[j] > arr[j - 1]) {
                    j--;
                    count++;
                }

                // Expand right from the peak
                int k = i;
                while (k < n - 1 && arr[k] > arr[k + 1]) {
                    k++;
                    count++;
                }

                // Update the longest mountain length
                ans = max(ans, count);

                // Move `i` to the end of the current mountain
                i = k;
            } else {
                i++;
            }
        }

        return ans;
    }
};
