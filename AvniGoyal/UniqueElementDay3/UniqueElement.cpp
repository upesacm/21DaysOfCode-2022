#include<iostream>
using namespace std;
int main()
{
    int i,j,arr[20],n;
    cout<<"enter the number of elements in an array";
    cin>>n;
    cout<<"enter the elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)         //for outer loop
    {
        int c=0;
        for(j=0;j<n;j++)     //for comparing each element with itself
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
        if(c<=1)
        {
            cout<<"unique elements is "<<arr[i]<<endl;
        }
    }
}