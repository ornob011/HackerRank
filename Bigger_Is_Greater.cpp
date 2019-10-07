#include<bits/stdc++.h>
using namespace std;


void perm(string str, size_t length)
{
    if(length==0)
    {
        cout<<"no answer"<<endl;
        return;
    }

    int i, j;
    char temp;

    for(i=length-1; i>0; i--)
    {
        if(str[i-1]<str[i])
            break;
    }

    if(i==0)
    {
        cout<<"no answer"<<endl;
        return;
    }

    j=length-1;

    while(str[j]<=str[i-1])
        j--;

    swap(str[i-1], str[j]);

    sort(str.begin()+i, str.end());

    cout<<str<<endl;

}
int main()
{
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
    freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

    int t, n, i, endIndex, nextSmallChar, firstSmallChar;

    string str;

    cin>>t;
    while(t--)
    {
        cin>>str;
        n=str.length();

        perm(str, n);

    }
    return 0;
}