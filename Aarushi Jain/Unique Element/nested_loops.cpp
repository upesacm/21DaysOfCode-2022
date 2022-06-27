#include<iostream>
using namespace std;

void uniqueValues(int arr[], int n){
    // Checking for duplicate values and printing the unique values
     for (int i = 0; i < n; i++){
        int j;
        for (j = 0; j < n; j++){
            if (arr[i] == arr[j] && i != j)
                break;
        }
        if (j == n){
            cout <<"Unique Elements: "<<arr[i] << endl;
        }
    }
}

int main(){
    int n;
    cout<<"Number of elements in the array:"<<endl;
    cin>>n;
    // Entering elements in the array
    int arr[n];
    cout<<"Enter the element:"<<endl;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    uniqueValues(arr, n);
    return 0;
    
}
// Time complexity O(n^2)