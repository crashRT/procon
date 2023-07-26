#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, X;
    cin >> N >> X;
    int tmp;
    for (int i = 0; i < N; i++)
    {
        cin >> tmp;
        if (tmp == X)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}