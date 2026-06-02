class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int n = s.size();

        int i = 0;
        int j = n-1;

        while(i<=j){
            int temp = s[j];
            s[j] = s[i];
            s[i] = temp;
            i++;
            j--;
        }
    }
};
