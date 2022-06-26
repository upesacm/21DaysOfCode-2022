#include<iostream>
using namespace std;
int main()
{
    int flag;
    int N=0;
    int i=0;
    int arr[10];
    int num;
    cout<<"Enter the total number of elements in the array ";
    cin>>N;
    if(N>10)
    {
        cout<<"Overflow";
        exit(0);
    }
    cout<<"Enter "<<N<<" values ";
    for(i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the number to be searched ";
    cin>>num;
    flag=0;
    for(i=0;i<N;i++)
    {
      if(num==arr[i]) 
      {
          flag=1;
          cout<<"Search successful";
          cout<<endl<<"Element found at position"<<(i+1)<<" ";
          break;
      }
    }
    if(flag==0)
    cout<<"Search unsuccessful";
}