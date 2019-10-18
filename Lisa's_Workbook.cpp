#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
    freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
    
    int n, k;
    cin>>n>>k;

    int numProblems, specialProblems = 0, pageNumber = 1;

    for(int i = 1; i <= n; i++) 
    {
        cin>>numProblems;
        
        int problem = 1;
        
        while(numProblems>0)
        {
            numProblems--;
            if(problem == pageNumber)
                specialProblems++;

            if(problem%k == 0 && numProblems != 0) 
                pageNumber++;

            problem++;
        }
        pageNumber++;
    }
    cout<<specialProblems;
    return 0;
}

