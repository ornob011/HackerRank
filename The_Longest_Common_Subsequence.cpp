#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
    freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

    int n, m, i, j;
    cin>>n>>m;
    vector<int>A(n), B(m);

    for(i = 0; i < n; i++)
        cin>>A[i];

    for(i = 0; i < m; i++)
        cin>>B[i];

    vector<vector<int> >matrix(n+1, vector<int>(m+1, 0));

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= m; j++)
        {
            if(A[i-1] == B[j-1])
                matrix[i][j] = matrix[i-1][j-1] + 1;

            else
                matrix[i][j] = max(matrix[i-1][j], matrix[i][j-1]);
        }
    }

    int count = matrix[n][m];

    vector<int>lcs(count);
    
    i = n, j = m;

    while(count > 0)
    {
        if(matrix[i-1][j] == matrix[i][j])
            i--;

        else if(matrix[i][j-1] == matrix[i][j])
            j--;

        else
        {
            lcs[count-1] = A[i-1];
            i--;
            j--;
            count--;
        }
    }

    for(i = 0; i < matrix[n][m]; i++)
        cout<<lcs[i]<<" ";

    return 0;
}