#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A, B, C, X;
    cin >> A >> B >> C >> X;
    int count = 0;
    for (int i500 = 0; i500 <= A; i500++)
    {
        for (int i100 = 0; i100 <= B; i100++)
        {
            for (int i50 = 0; i50 <= C; i50++)
            {
                if (500 * i500 + 100 * i100 + 50 * i50 == X)
                {
                    count++;
                }
            }
        }
    }
    cout << count << endl;
}