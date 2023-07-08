#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<string> A;
    for (int i = 0; i < N; i++)
    {
        string tmp;
        cin >> tmp;
        A.push_back(tmp);
    }
    vector<string> B(N);
    for (int i = 0; i < N; i++)
    {
        B.at(i) = A.at(i);
        for (int j = 0; j < N; j++)
        {
            if (i == 0 && j > 0)
            {
                B.at(i).replace(j, 1, {A.at(i).at(j - 1)});
            }
            else if (j == N - 1 && i > 0)
            {
                B.at(i).replace(j, 1, {A.at(i - 1).at(j)});
            }
            else if (i == N - 1 && j < N - 1)
            {
                B.at(i).replace(j, 1, {A.at(i).at(j + 1)});
            }
            else if (j == 0 && i < N - 1)
            {
                B.at(i).replace(j, 1, {A.at(i + 1).at(j)});
            }
        }
        cout << B.at(i) << endl;
    }
}