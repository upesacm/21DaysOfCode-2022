#include<iostream>
using namespace std;
int main()
{
    int A[5]={2,3,4,5,6};//initializing the array
    int i=0;//declare i
    int sum=0;
    for(i=0;i<5;i++)
    {
        sum+=A[i];//each element is added to its preceding element which gets stored in sum
    }
    cout<<"Sum is\t"<<sum<<endl;
    return 0;
}
