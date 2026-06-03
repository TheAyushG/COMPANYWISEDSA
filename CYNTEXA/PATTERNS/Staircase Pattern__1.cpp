#include <iostream>
using namespace std;

int main(){
  
    int n = 6;
    
    for(int i=1; i<=n; i++){

        int stairs = ((i+1) / 2) * 2;
        
        for(int j=1; j<=stairs; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
