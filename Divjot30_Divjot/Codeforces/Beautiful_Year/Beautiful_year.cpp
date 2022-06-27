#include<iostream>
using namespace std;
int main()
{
    int year,a,b,c,d;
    cout<<"Enter a year ";
    cin>>year;
    
    while(true)
    {
        year+=1;
        a=year/1000;
        b=year/100%10;
        c=year/10%10;
        d=year%10;
        if((a!=b)&&(b!=c)&&(c!=d)&&(d!=a)&&(b!=d)&&(a!=c))
        {
            break;
        }
    }
    cout<<year<<endl;
    return 0;
}