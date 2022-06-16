#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    int N;
    string S;
    string ans = "";
    while (T--)
    {
        cin >> N;
        cin >> S;
        for(int i = 0; i<N; i+=2){
            if(S[i] == '0' && S[i+1] == '0'){
                ans.push_back('A');
            }
            else if(S[i] == '0' && S[i+1] == '1'){
                ans.push_back('T');
            }
            else if(S[i] == '1' && S[i+1] == '0'){
                ans.push_back('C');
            }
            else if(S[i] == '1' && S[i+1] == '1'){
                ans.push_back('G');
            }
        }
        cout<<ans<<endl;
        ans.clear();
    }
    return 0;
}
