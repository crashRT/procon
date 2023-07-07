#include <bits/stdc++.h>
using namespace std;
int main()
{

    while (true)
    {
        // 入力処理
        int n;
        cin >> n;
        if (n == 0)
            break;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a.at(i);
        }

        // 本体
        int ans = 0;
        int diff = abs(a.at(0) - 2023);
        for (int i = 1; i < n; i++)
        {
            if (abs(a.at(i) - 2023) < diff)
            {
                ans = i;
                diff = abs(a.at(i) - 2023);
            }
        }
        cout << ans + 1 << endl;
    }
}