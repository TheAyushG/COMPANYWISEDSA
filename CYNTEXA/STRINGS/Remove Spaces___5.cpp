-------------------------------------
Time  - O(n)
Space - O(1)
-------------------------------------

class Solution {
  public:
    string removeSpaces(string& s) {
        // code here
        
        int n = s.length();
        
        int j = 0;
        for(int i=0; i<n; i++){
            if(s[i] != ' '){
                s[j] = s[i];
                j++;
            }
        }
        
        s.resize(j);
        
        return s;
    }
};



************************************************************************************************

--------------------------------------
Time  - O(n)
Space - O(n)
--------------------------------------
  
class Solution {
  public:
    string removeSpaces(string& s) {
        // code here
        
        int n = s.length();
        
        string ans;
        
        for(int i=0; i<n; i++){
            if(s[i] != ' '){
                ans.push_back(s[i]);
            }
        }
        
        return ans;
    }
};
