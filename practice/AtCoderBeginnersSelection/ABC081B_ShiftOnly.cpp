#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A.at(i);
    }

    int count = 0;
    int flag = true;
    while (true)
    {
        for (int i = 0; i < N; i++)
        {
            if (A.at(i) % 2 != 0)
            {
                flag = false;
                break;
            }
            A.at(i) = A.at(i) / 2;
        }
        if (!flag)
            break;
        count++;
    }
    cout << count << endl;
}