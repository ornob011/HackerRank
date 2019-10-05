#include<bits/stdc++.h>
using namespace std;

int result(int x, int y)
{
    return ((x & y) ^ (x | y)) & (x ^ y);
}

int solve(int arr[], int size)
{
    int maxm=INT_MIN, i;
    stack<int>s;

    for(i=0; i<size; i++)
    {
        while(!s.empty())
        {
            maxm=max(maxm, result(arr[i], s.top()));

            if(arr[i]<s.top())
                s.pop();
            else
                break;
        }
        s.push(arr[i]);
    }
    return maxm;
}

int main()
{
    int size;
    cin>>size;

    int *arr=new int[size], i;

    for(i=0; i<size; i++)
        cin>>arr[i];
    
    cout<<solve(arr, size)<<endl;

    return 0;
}       

