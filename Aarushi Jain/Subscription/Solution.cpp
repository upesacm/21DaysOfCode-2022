#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int N, X;
    while (T--)
    {
        cin >> N >> X;
        int s;
        if (N % 6 == 0)
        {
            s = N / 6;
        }
        else
        {
            s = N / 6 + 1;
        }
        int output = s * X;
        cout << output << "\n";
    }
    return 0;
}
