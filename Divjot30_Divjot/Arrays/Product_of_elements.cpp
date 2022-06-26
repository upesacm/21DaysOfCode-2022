#include<iostream>
using namespace std;
int main()
{
    int product=1;
    int i=0;
    //int A[5]={1,2,3,4,5}; this would come into use if we do not want the user input
    int A[5];
    for(i=0;i<5;i++)
    {
        cout<<"Enter the "<<(i+1)<<" element\t";
        cin>>A[i];
    }
    cout<<"Elements of the array are"<<endl;
    for(i=0;i<5;i++)
    {
    cout<<A[i]<<"\t";
    }
    for(i=0;i<5;i++)
    {
        product*=A[i];
    }
    cout<<endl<<"Product of the elements of the given array are\t"<<product;
}