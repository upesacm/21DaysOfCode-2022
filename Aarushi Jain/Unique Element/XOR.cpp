#include<iostream>
using namespace std;
void uniqueValue(int arr[], int n){
    int output = arr[0];
    for(int i = 1; i<n; i++){
        output = output ^ arr[i];
    }
    cout<<output;
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
    uniqueValue(arr, n);
    return 0;
}