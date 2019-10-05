#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num_of_games, A_n, B_m, x, sum, input, i, count, j, tc;
    cin >> num_of_games;

    for(tc=0; tc<num_of_games; tc++)
    {
        cin >> A_n >> B_m >> x;

        vector<int> A(A_n);
        for (i = 0; i < A_n; i++)
            cin>>A[i];
        
        vector<int> B(B_m);
        for (i = 0; i < B_m; i++)
            cin>>B[i];
            
        sum = 0, i = 0, j = 0, count = 0;

        while (i < A_n && sum + A[i] <= x)
        {
            sum = sum + A[i];
            i++;
        }
        count = i;

        while (j < B_m && i >= 0)
        {
            sum = sum + B[j];
            j++;

            while (sum > x && i > 0)
            {
                i--;
                sum = sum - A[i];
            }
            if (sum <= x && i + j > count)
                count = i + j;
        }

        cout << count << endl;
    }
    return 0;
}