#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    int A, B;
    while (T--)
    {
        cin >> A >> B;
        if (B-A < 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            if ((B - A) % 3 == 0 || (B - A - 1) % 3 == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}