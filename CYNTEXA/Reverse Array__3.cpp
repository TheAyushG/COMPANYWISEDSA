#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter size: ";
    cin>>n;

    int arr[n];

    cout<<"Enter elements: ";

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Revesed Array Is: ";


    int i = 0;
    int j = n-1;

    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    cout<<"Revesed Array Is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
