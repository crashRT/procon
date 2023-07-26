#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A, B;
    cin >> A >> B;
    bool ans = false;
    for (int i = A; i <= B; i++)
    {
        if (100 % i == 0)
        {
            ans = true;
        }
    }
    if (ans)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}