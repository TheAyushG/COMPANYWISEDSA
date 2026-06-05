class Solution {
public:

    vector<int> frequencyCount(vector<int>& arr) {

        int n = arr.size();
        
        unordered_map<int,int> mp;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        
        vector<int> ans;
        
        for(int i=1; i<=n; i++){
            ans.push_back(mp[i]);
        }
        
        return ans;
    }
};



*****************************************************************************************************************************************************************************************************************************


class Solution {
public:
    vector<int> frequencyCount(vector<int>& arr) {

        int n = arr.size();

        vector<int> freq(n, 0);

        for(int i = 0; i < n; i++) {
            freq[arr[i] - 1]++;
        }

        return freq;
    }
};
