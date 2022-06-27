#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = low -1;
    for(int j = low; j<high; j++){
        if(arr[j]<pivot){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[high]);
    return (i+1);
}

void printArray(int arr[], int n) {
  int i;
  for (i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
}


void QuickSort(int arr[], int low, int high){
    if(low<high){
        int pivot = partition(arr, low, high);
        QuickSort(arr, low, pivot - 1);
        QuickSort(arr, pivot+1, high);
    }
}

void uniqueValue(int arr[], int n){
    //Sorting the array
    QuickSort(arr, 0, n-1);

    for(int i = 0; i<n; i++){
        while(i<n-1 && arr[i]!= arr[i+1] && arr[i] != arr[i-1]){
            cout<<arr[i]<<"\n";
            i++;
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
    uniqueValue(arr, n);
    return 0;
    
}
// Time complexity O(n*logn)
