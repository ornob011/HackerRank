#include <bits/stdc++.h>
using namespace std;

#define llu unsigned long long
llu *ans = new llu[1000001];

llu min(llu x, llu y)
{
    return x < y ? x : y;
}

int main()
{
    int Q, N, i, j;
    for (i = 0; i < 1000001; i++)
        ans[i] = -1;

    ans[0] = 0;
    for (i = 0; i < 1000000; i++)
    {
        ans[i + 1] = min(ans[i + 1], ans[i] + 1);
        for (j = 2; j <= i && i * (llu)j < 1000001; j++)
            ans[i * j] = min(ans[i * j], ans[i] + 1);
    }
    cin >> Q;
    while (Q--)
    {
        cin >> N;
        cout << ans[N] << endl;
    }
    return 0;
}