#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

static string solve(ll arr[], ll n)
{
    ll s1 = 0, s2 = 0, i;

    for (i = 0; i < n; ++i)
        s2 += arr[i];

    for (i = 0; i < n; ++i)
    {
        s2 -= arr[i];
        if (s1 == s2)
            return "YES";
        s1 += arr[i];
    }
    return "NO";
}

int main()
{
    ll n, x, i, j, ans;
    int T;
    cin >> T;
    while (T--)
    {
        cin >> n;
        ll arr[n] = {0};

        for (i = 0; i < n; i++)
            cin >> arr[i];

        cout << solve(arr, n) << endl;
    }
    return 0;
}
