#include<bits/stdc++.h>
using namespace std;

vector <int> IceCream(int cost, int size, int arr[])
{
    int  i, x, y, j;

    map<int,int>hmap;
    vector <int> result;

    for(i=0;i<size;i++)
    {
        x=arr[i];
        y=cost-x;
        if(hmap.find(y)!=hmap.end())
        {
            j=hmap[y];

            result.push_back(j+1);
            result.push_back(i+1);
            
            break;
        }
        else
            hmap[x] = i;
    }   
    return result;    
}

int main()
{
    // freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
    // freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

    int t, cost, size, i;
    vector<int> v;
    cin>>t;

    while(t--)
    {
        cin>>cost>>size;

        int arr[size];

        for(i=0; i<size; i++)
            cin>>arr[i];

        v=IceCream(cost, size, arr);

        printf("%d %d\n", v[0], v[1]);

    }
    return 0;
}









