---------------------------------------------
Optimal approach
Time  : O(n)
Space : O(1)
---------------------------------------------

class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int n = s.size();
        
        vector<int> hash(256, -1);

        int l = 0;
        int r = 0;
        int maxLen = 0;
        
        while(r<n){
            if(hash[s[r] != -1]){
                if(hash[s[r]] >= l){
                    l = hash[s[r]] + 1;
                }
            }

            int len = r-l+1;
            maxLen = max(len, maxLen);
            hash[s[r]] = r;
            r++;
        }

        return maxLen;
    }
};



*****************************************************************************************************************************************************************************************************************************



--------------------------------------------
Brute Force Solution
Time  : O(n²)
Space : O(1)
--------------------------------------------

class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int n = s.size();
        int maxLen = 0;

        for(int i=0; i<n; i++){
        vector<int> hash(256,0);
            
            for(int j=i; j<n; j++){
                if(hash[s[j]] == 1){
                    break;
                }
                hash[s[j]] = 1;
                int len = j-i+1;
                maxLen = max(maxLen, len);
            }
        }

        return maxLen;
    }
};
