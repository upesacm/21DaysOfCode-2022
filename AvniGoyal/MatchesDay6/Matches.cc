#include <iostream>
using namespace std;
int main() {
/* Initializing variables matchesArr specify of the number of matches needed for each digit from 0 to 9 based on the array index*/
    int t, a, b, s,
    arr[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6}, l,c = 0;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        s = a + b;
        while(s!=0) 
        {
            l=s%10;
            c+=arr[l];
            s=s/10;
        }
        cout<<c<<endl;
        c= 0;
    }
}