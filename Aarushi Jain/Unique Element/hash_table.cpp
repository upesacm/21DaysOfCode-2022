#include <iostream>
#include <unordered_map>
using namespace std;

void uniqueValue(int arr[], int n)
{
unordered_map<int, int> table;
for (int i = 0; i < n; i++)
table[arr[i]]++;

for (auto x : table)
if (x.second == 1)
cout << x.first << "\n";
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