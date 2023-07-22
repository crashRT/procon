#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> P(N), C(N);
    vector<vector<int>> F;
    for (int i = 0; i < N; i++)
    {
        cin >> P.at(i);
        int tmp_C;
        cin >> tmp_C;
        C.at(i) = tmp_C;
        vector<int> tmp_F(tmp_C);
        for (int j = 0; j < tmp_C; j++)
        {
            cin >> tmp_F.at(j);
        }
        F.push_back(tmp_F);
    }
    bool flag = false;

    for (int i = 0; i < N; i++)
    {
        if (flag)
            break;
        for (int j = 0; j < N; j++)
        {
            if (i == j)
                continue;
            if (P.at(i) < P.at(j))
                continue;
            if (C.at(i) > C.at(j)) // 機能数がjのほうが少ない場合はスキップ
                continue;
            // F.at(i)がF.at(j)の部分集合かどうかを判定
            vector<int> intersection;
            set_intersection(F.at(i).begin(), F.at(i).end(), F.at(j).begin(), F.at(j).end(), back_inserter(intersection));
            if (intersection.size() == C.at(i))
            {
                if (intersection.size() == C.at(j))
                {
                    if (P.at(i) > P.at(j))
                        flag = true;
                }
                else
                {
                    flag = true;
                    break;
                }
            }
        }
    }

    if (flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}