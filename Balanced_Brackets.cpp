#include <bits/stdc++.h>
using namespace std;

bool check(string expr)
{
    stack<char> s;
    char x;

    int i, length = expr.size();

    for (i = 0; i < length; i++)
    {
        if (expr[i] == '(' || expr[i] == '{' || expr[i] == '[')
        {
            s.push(expr[i]);
            continue;
        }
        if (s.empty())
            return false;

        switch (expr[i])
        {
        case ')':
            x = s.top();
            s.pop();
            if (x == '{' || x == '[')
                return false;

            break;

        case '}':
            x = s.top();
            s.pop();

            if (x == '(' || x == '[')
                return false;

            break;

        case ']':
            x = s.top();
            s.pop();

            if (x == '(' || x == '{')
                return false;

            break;
        }
    }
    return (s.empty());
}

int main()
{
    int tc;
    string expr;

    cin >> tc;
    while (tc--)
    {
        cin >> expr;

        if (check(expr))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}