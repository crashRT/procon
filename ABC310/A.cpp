#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, P, Q;
    cin >> N >> P >> Q;
    vector<int> D(N);
    for (int i = 0; i < N; i++)
    {
        cin >> D.at(i);
    }
    int min_D = *min_element(D.begin(), D.end());
    int ans = P;
    if (P > Q + min_D)
        ans = Q + min_D;
    cout << ans << endl;
}