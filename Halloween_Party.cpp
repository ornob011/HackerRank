#include<bits/stdc++.h>
using namespace std;

int main()
{   
    // freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
    // freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

    int t;
    cin>>t;

    while(t--)
    {
        long long k, ans, l;
        cin>>k;

        l=k/2;

        ans=l*(k-l);

        cout<<ans<<endl;
    }
    
    return 0;
}