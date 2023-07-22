#include <bits/stdc++.h>
using namespace std;
int vector_finder(std::vector<int> vec, int number)
{
    auto itr = std::find(vec.begin(), vec.end(), number);
    size_t index = std::distance(vec.begin(), itr);
    if (index != vec.size())
    { // 発見できたとき
        return 1;
    }
    else
    { // 発見できなかったとき
        return 0;
    }
}

int main()
{
    int N;
    cin >> N;
    vector<int> A(N + 1);
    A[0] = 0;
    for (int i = 1; i <= N; i++)
        cin >> A[i];
    // i 番目の辺は頂点 i から 頂点 Ai​ に伸びます
    //  同一頂点を複数回含まない有向閉路をひとつ求めてください。
    vector<int> B;
    B.push_back(A.at(1));
    int index = A.at(1);
    int count = 1;
    int next;
    count = 1;
    while (index != 1)
    {
        next = A[index];
        B.push_back(next);
        index = next;
        count++;
    }
    cout << count << endl;
    for (int i = 0; i < count; i++)
        cout << B[i] << " ";
}