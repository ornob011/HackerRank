#include<bits/stdc++.h>
using namespace std;

string solve(vector<string>rows)
{
    int n, i, j;

    n=rows.size();

    for(i=0; i<n; i++)
        sort(rows[i].begin(), rows[i].end());


    for(j=0; j<n; j++)
    {
        for(i=0; i<n-1; i++)
        {
            if(rows[i][j]>rows[i+1][j])
                return "NO";
        }
    }
    return "YES";
}

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
    freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
    
    int t, n, i;
    cin>>t;

    while(t--)
    {
        cin>>n;

        vector<string>rows(n);

        for(i=0; i<n; i++)
            cin>>rows[i];

        cout<<solve(rows)<<endl;
    }
    return 0;
}