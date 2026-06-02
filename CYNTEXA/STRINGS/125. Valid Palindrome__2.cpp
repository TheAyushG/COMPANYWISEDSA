class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.size() - 1;

        while(start < end){

            while(start < end && !isalnum(s[start])){
                start++;
            }

            while(start < end && !isalnum(s[end])){
                end--;
            }

            if(tolower(s[start]) != tolower(s[end])){
                return false;
            }

            start++;
            end--;
        }

        return true;
        
    }
};



********************************************************************************************************************************************************************************************************************************



class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.size() - 1;

        while(start < end){

            while(start < end && !isValid(s[start])){
                start++;
            }

            while(start < end && !isValid(s[end])){
                end--;
            }

            if(tolower(s[start]) != tolower(s[end])){
                return false;
            }

            start++;
            end--;
        }

        return true;
    }

    bool isValid(char c){

        if(c >= 'a' && c <= 'z')
        return true;
        if(c >= 'A' && c <= 'Z')
        return true;
        if(c >= '0' && c <= '9')
        return true;

        return false;
    }

    char tolower(char c){
        if(c >= 'A' && c <= 'Z'){
            return c + 32;
        }

        return c;
    }
};
