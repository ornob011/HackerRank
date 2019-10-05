#include <bits/stdc++.h>
using namespace std;

int main()
{

    //freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
    //freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

    int n, q, type, x, y, index, lastanswer = 0;
    cin >> n >> q;

    vector<int> vec[n];
    while (q--)
    {
        cin >> type >> x >> y;

        index = (x ^ lastanswer) % n;

        if (type == 1)
            vec[index].push_back(y);

        else
        {
            int idx = y % ((int)vec[index].size());
            lastanswer = vec[index][idx];

            cout << lastanswer << endl;
        }
    }
    return 0;
}