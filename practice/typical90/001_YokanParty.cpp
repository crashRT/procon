#include <bits/stdc++.h>
using namespace std;

bool can_cut_m(int L, int N, int K, vector<int> &B, int m)
{
    // すべてm以上で切れるか？
    int cnt = 0;
    int sum = 0;
    for (int i = 0; i < N + 1; i++)
    {
        sum += B.at(i);
        if (sum >= m)
        {
            cnt++;
            sum = 0;
        }
    }
    if (cnt >= K + 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int binary_search(int L, int N, int K, vector<int> &B)
{
    int left = 0;
    int right = L;
    while (right - left > 1)
    {
        int mid = left + (right - left) / 2;
        if (can_cut_m(L, N, K, B, mid))
        {
            left = mid;
        }
        else
        {
            right = mid;
        }
    }
    return left;
}

int main()
{
    // 入力
    int N, L, K;
    cin >> N >> L >> K;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A.at(i);
    }
    vector<int> B(N + 1); // 各切れ込み間の長さ
    B.at(0) = A.at(0);
    for (int i = 0; i < N - 1; i++)
    {
        B.at(i + 1) = A.at(i + 1) - A.at(i);
    }
    B.at(N) = L - A.at(N - 1);

    int ans = binary_search(L, N, K, B);

    cout << ans << endl;
}