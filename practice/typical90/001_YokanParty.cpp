#include <bits/stdc++.h>
using namespace std;

int calc_min(int L, int N, int K, vector<int> A)
{
    if (K == 0)
    {
        return L;
    }

    // 1個目の切れ目を選んだ場合
    int min_len_rest = calc_min(L - A[0], N - 1, K - 1, vector<int>(A.begin() + 1, A.end()));
    int min_len1 = min(A.at(0), min_len_rest);

    if (K == N)
    {
        return min_len1;
    }

    // 1個目の切れ目を選ばなかった場合
    A.at(1) = A.at(0) + A.at(1);
    int min_len2 = calc_min(L, N - 1, K, vector<int>(A.begin() + 1, A.end()));
    return max(min_len1, min_len2);
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
    vector<int> B(N + 1);
    B.at(0) = A.at(0);
    for (int i = 0; i < N - 1; i++)
    {
        B.at(i + 1) = A.at(i + 1) - A.at(i);
    }
    B.at(N) = L - A.at(N - 1);
    int ans = calc_min(L, N, K, B);
    cout << ans << endl;
}