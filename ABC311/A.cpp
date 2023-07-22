#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    string S;
    cin >> N >> S;
    bool A, B, C;
    A = B = C = false;
    for (int i = 0; i < N; i++)
    {
        if (S[i] == 'A')
            A = true;
        else if (S[i] == 'B')
            B = true;
        else if (S[i] == 'C')
            C = true;
        if (A && B && C)
        {
            cout << i + 1 << endl;
            return 0;
        }
    }
}