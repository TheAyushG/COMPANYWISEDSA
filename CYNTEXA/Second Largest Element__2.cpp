#include <iostream>
using namespace std;

int main(){
    int arr[] = {54, 21, 4, 84, 32, 23};

    int n = sizeof(arr) / sizeof(arr[0]);

    int largest = arr[0];
    int secondLargest = arr[0];

    for(int i = 1; i<n; i++){
        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        }

        else if(arr[i] > secondLargest && largest > arr[i]){
            secondLargest = arr[i];
        }
    }

    cout << "second largest element is:" << secondLargest <<endl;


    return 0;
}
