#include <bits/stdc++.h>
using namespace std;

struct INT_STRING
{
    int first;
    string second;
};

string temp, str;
stack<INT_STRING> operation;

int main()
{
    int tc, query, k, undo;
    INT_STRING opera;
    cin >> tc;
    while (tc--)
    {
        cin >> query;
        opera.first = query;

        switch (query)
        {
        case 1:
            cin >> temp;
            opera.second = temp;
            operation.push(opera);
            str = str + temp;

            break;

        case 2:
            cin >> k;
            opera.second = str.substr(str.size() - k, str.size());
            str.erase(str.size() - k, str.size());
            operation.push(opera);
            break;

        case 3:
            cin >> k;
            cout << str[k - 1] << endl;
            break;

        case 4:
            undo = operation.top().first;
            temp = operation.top().second;

            if (undo == 1)
                str.erase(str.size() - temp.size(), str.size());

            else
                str = str + temp;

            operation.pop();
            break;

        default:
            break;
        }
    }
    return 0;
}