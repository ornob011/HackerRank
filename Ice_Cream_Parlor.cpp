#include<bits/stdc++.h>
using namespace std;

void IceCream(int cost, int size, int arr[])
{
    int result[2], i, x, y, j;

    int frequency[10001];

    memset(frequency, -1, sizeof(frequency));

    for(i=0; i<size; i++)
    {
        x=arr[i];
        y=cost-x;

        if(y>=0)
        {
            j=frequency[y];

            if(j!=-1)
            {
                result[0]=j+1;
                result[1]=i+1;
                break;
            }
        }
        frequency[x]=i;
    }

    printf("%d %d\n", result[0], result[1]);;
}



int main()
{
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
    freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

    int t, cost, size, i;
    cin>>t;

    while(t--)
    {
        cin>>cost>>size;

        int arr[size];

        for(i=0; i<size; i++)
            cin>>arr[i];

        IceCream(cost, size, arr);

    }
    return 0;
}