-----------------------------------
Using frequency array
Total Time - O(n)
Space - O(26)
-----------------------------------

#include <iostream>
using namespace std;

int main(){

    string s = "geekforgeeks";

    int freq[26] = {0};

    for(char ch : s){
        freq[ch - 'a']++;
    }

    for(char ch : s){
        if(freq[ch - 'a'] != 0){
            cout<< ch << freq[ch - 'a'] << " ";
            freq[ch - 'a'] = 0;
        }
    }

    return 0;
}



*******************************************************************************************************************************************************************************************************************************



----------------------------------
Using Map
Time Complexity  : O(n)
Space Complexity : O(1)
----------------------------------


#include <bits/stdc++.h>
using namespace std;

int main(){

    string s = "geekforgeeks";

    unordered_map<char,int> freq;

    for(char ch : s){
        freq[ch]++;
    }

    for(auto it : freq){
        cout<< it.first << "->" << it.second << endl;
    }

    return 0;
}
