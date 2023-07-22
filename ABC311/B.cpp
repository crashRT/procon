#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, D;
    cin >> N >> D;
    vector<string> S(N);
    for (int i = 0; i < N; i++)
        cin >> S[i];
    int ans = 0;
    int count = 0;
    bool count_today = false;
    for (int day = 0; day < D; day++)
    {
        count_today = true;
        for (int i = 0; i < N; i++)
        {
            if (S[i][day] == 'x')
            {
                if (count > ans)
                    ans = count;
                count = 0;
                count_today = false;
                break;
            }
        }
        if (count_today)
            count++;
    }
    if (count > ans)
        ans = count;
    cout << ans << endl;
}