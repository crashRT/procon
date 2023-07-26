#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
        cin >> A.at(i);

    bool ans = false;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j)
                continue;
            for (int k = 0; k < N; k++)
            {
                if (k == j)
                    continue;
                if (i == k)
                    continue;
                if (A.at(i) + A.at(j) + A.at(k) == 1000)
                {
                    ans = true;
                }
            }
        }
    }
    if (ans)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}