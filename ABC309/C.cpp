#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, K;
    cin >> N >> K;
    vector<vector<int>> ab(N, vector<int>(2));
    for (int i = 0; i < N; i++)
    {
        cin >> ab.at(i).at(0) >> ab.at(i).at(1);
    }
    auto cmp = [](const vector<int> &a, const vector<int> &b)
    { return a.at(0) > b.at(0); };
    sort(ab.begin(), ab.end(), cmp);

    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        if (sum + ab.at(i).at(1) > K)
        {
            cout << ab.at(i).at(0) + 1 << endl;
            break;
        }
        else if (i == N - 1)
        {
            cout << 1 << endl;
        }
        else
        {
            sum += ab.at(i).at(1);
        }
    }
}