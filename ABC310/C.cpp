#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<string> S(N);
    for (int i = 0; i < N; i++)
        cin >> S.at(i);

    int count = 1;

    sort(S.begin(), S.end());
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            string Si = S.at(i);
            string Sj = S.at(j);
            if (Si.size() < Sj.size())
                break;
            if (Si.size() > Sj.size())
                continue;
            if (Si == Sj)
                continue;
            reverse(Sj.begin(), Sj.end());
            if (Si == Sj)
                continue;
            count++;
        }
    }
    cout << count << endl;
}