#include <bits/stdc++.h>
using namespace std;

int GetMaxArea(vector<int>& hist, int size)
{
    stack<int> s;
    int i = 0, tp, maxarea = 0, area_with_top;
    while (i < size)
    {
        if (s.empty() || hist[i] > hist[s.top()])
            s.push(i++);

        else
        {
            tp = s.top();
            s.pop();

            area_with_top = hist[tp] * (s.empty() ? i : i - s.top() - 1);

            if (area_with_top > maxarea)
                maxarea = area_with_top;
        }
    }

    while (!s.empty())
    {
        tp = s.top();
        s.pop();

        area_with_top = hist[tp] * (s.empty() ? i : i - s.top() - 1);

        if (area_with_top > maxarea)
            maxarea = area_with_top;
    }

    return maxarea;
}

int main()
{
    int size;
    cin>>size;

    vector<int>arr(size);
    for(auto it=arr.begin(); it!=arr.end(); it++)
        cin>>*it;

    cout<<GetMaxArea(arr, size)<<endl;

    return 0;
}