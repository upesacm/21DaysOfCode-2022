#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a character";
    cin>>ch;
    if(((ch>='a')&&(ch<='z'))||((ch>='A')&&(ch<='Z')))
    {
        cout<<"You entered an alphabet";
    }
    else if((ch>='0')&&(ch<='9'))
    {
        cout<<"You entered a digit";
    }
    else
    cout<<"You entered a char other than digit or alphabet";
}