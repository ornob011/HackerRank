#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, max, count, temp;

    scanf("%d", &n);
    int arr[n];

    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    sort(arr.begin(),arr.end());
    count=0;

    max=arr[n-1];

    for(i=0; i<n; i++)
    {
        if(arr[i]==max)
            count++;
    }
    printf("%d\n", count);

    return 0;
}
