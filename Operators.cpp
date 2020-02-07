#include <bits/stdc++.h>

using namespace std;

void solve(double meal_cost, double tip_percent, double tax_percent) 
{
    double total_cost=meal_cost+(tip_percent/100)*meal_cost+(tax_percent/100)*meal_cost;
    cout<<(int)round(total_cost)<<endl;
}

int main()
{
    double meal_cost;
    cin >> meal_cost;

    int tip_percent;
    cin >> tip_percent;

    int tax_percent;
    cin >> tax_percent;

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}
