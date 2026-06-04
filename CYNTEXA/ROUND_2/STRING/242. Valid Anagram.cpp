----------------------------------------
Time Complexity  = O(n)
Space Complexity = O(1)
----------------------------------------
  
class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int n = s.size();
        int m = t.size();
        
        vector<int> freq(26,0);

        if(s.size() != t.size())
            return false;

        for(int i=0; i<n; i++){
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }

        for(auto it : freq){
            if(it != 0)
            return false;
        }

        return true;
    }
};



*****************************************************************************************************************************************************************************************************************************

-----------------------------------------
Time Complexity  = O(n)
Space Complexity = O(1)
-----------------------------------------

class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int n = s.size();
        int m = t.size();
        
        unordered_map<char,int> mp;

        if(n != m)
        return false;

        for(int i=0; i<n; i++){
            mp[s[i]]++;
        }

        for(char it : t){
            mp[it]--;
            if(mp[it] < 0)
            return false;
        }

        return true;
    }
};
