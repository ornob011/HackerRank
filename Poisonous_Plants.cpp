#include <bits/stdc++.h>
using namespace std;

int arr[1000000];
int ans = 0;

int main()
{
    int n, i, count;
    cin >> n;

    for (i = 0; i < n; i++)
        cin >> arr[i];

    stack<pair<int, int>> s;

    s.push(make_pair(arr[n - 1], 0));

    for (i = n - 2; i >= 0; i--)
    {
        count = 0;

        while (!s.empty() && s.top().first > arr[i])p
        {
            count = max(count + 1, s.top().second);

            s.pop();
        }
        ans = max(ans, count);
        s.push(make_pair(arr[i], count));
    }
    cout << ans << endl;
    return 0;
}