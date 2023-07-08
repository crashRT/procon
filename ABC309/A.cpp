#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A, B;
    cin >> A >> B;

    if (B % 3 != 1 && B - A == 1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}