#include<bits/stdc++.h>
using namespace std;

void solution(string s)
{
    string substring="";
    bool isValid=false;
    int i;
    for(i=1; i<=s.length()/2; i++)
    {
        substring=s.substr(0,i);
        long num=stol(substring, nullptr, 10);

        string validString=substring;

        while(validString.length()<s.length())
        {
            validString=validString+to_string(++num);
        }
        if(s==validString)
        {
            isValid=true;
            break;
        }
    }
    isValid?cout<<"YES "<<substring<<endl:cout<<"NO"<<endl;
}
int main()
{
    int t;
    string s;

    cin>>t;

    while(t--)
    {
        cin>>s;
        solution(s);
    }
    return 0;
}