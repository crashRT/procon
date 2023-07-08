#include <bits/stdc++.h>
using namespace std;

int amidakuji(int m, vector<int> x, int p)
{
    // pからスタートしてたどり着く先を返す
    int current = p;
    for (int i = 0; i < m; i++)
    {
        if (current == x.at(i))
        {
            current += 1;
        }
        else if (current == x.at(i) + 1)
        {
            current -= 1;
        }
    }
    return current;
}

int main()
{
    while (true)
    {
        int n, m, p, q;
        cin >> n >> m >> p >> q;
        if (n == 0)
            break;
        vector<int> x(m);
        for (int i = 0; i < m; i++)
        {
            cin >> x.at(i);
        }
        if (amidakuji(m, x, p) == q)
        {
            cout << "OK" << endl;
            continue;
        }
        for (int y = 0; y <= m; y++)
        {
            for (int x = 1; x < n; x++)
            {
                if (q == amidakuji(m, x.insert(y, x), p))
                {
                    cout << x << " " << y << endl;
                }
            }
        }
    }
}