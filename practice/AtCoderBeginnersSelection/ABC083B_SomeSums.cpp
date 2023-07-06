#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, A, B;
    cin >> N >> A >> B;

    vector<int> v;

    for (int i = 1; i <= N; i++)
    {
        int sum = 0;
        int num = i;
        while (num > 0)
        {
            sum += num % 10;
            num /= 10;
        }
        if (A <= sum && sum <= B)
        {
            v.push_back(i);
        }
    }

    int sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
    }
    cout << sum << endl;
}