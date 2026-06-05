--------------------------------------
Time Complexity: O(n × k)
Space Complexity = O(n × k)
--------------------------------------

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

       int n = strs.size();
       unordered_map<string, vector<string>> map;

       for(int i=0; i<n; i++){
            string word = strs[i];

            vector<int> freq(26,0);
            for(int j=0; j<word.size(); j++){
                freq[word[j] - 'a']++;
            }

            string key = "";
            for(int j=0; j<26; j++){
                key += to_string(freq[j]) + "#";
            }
            map[key].push_back(word);
       }

        vector<vector<string>> result;

        for(auto it : map){
            result.push_back(it.second);
        }

        return result;
    }
};


*****************************************************************************************************************************************************************************************************************************


-----------------------------------------------------------------
Sorting approch
Time Complexity  : O(n × k log k)  OR O(n * k log k + n * k + n)
Space Complexity : O(n × k)
-----------------------------------------------------------------

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

       int n = strs.size();
       unordered_map<string, vector<string>> map;

       vector<vector<string>> result;
  
        for(int i=0; i<n; i++){
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            map[temp].push_back(strs[i]);
        }

        for(auto it : map){
          result.push_back(it.second);
        }

       return result;
    }
};
