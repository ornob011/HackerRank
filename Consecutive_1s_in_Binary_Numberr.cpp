#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num, count=0;
    cin>>num;

    while(num>0)
    {
        num=num & (num<<1);
        count++;
    }
    cout<<count<<endl;

    return 0;
}