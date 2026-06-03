#include <iostream>
using namespace std;

    bool isVowels(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
            return true;
        }
        return false;
    }

    int countVowels(string str){
        int count = 0;

        for(int i=0; i<str.length(); i++){
            if(isVowels(str[i])){
                count++;
            }
        }
        return count;
    }

int main(){

    string str = "Hello World";

    cout<< countVowels(str) << endl;
    return 0;
}
