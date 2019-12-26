#include<bits/stdc++.h>
using namespace std;

class Student
{
    private:
    int scores[5];

    public:
    void input()
    {
        for(int i=0; i<5; i++)
            cin>>scores[i];
    }
    int calculateTotalScore()
    {
        int counter=0;

        for(int i=0; i<5; i++)
            counter=counter+scores[i];

        return counter;
    }
};


int main() {
    int n;
    cin >> n;
    Student *s = new Student[n];
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    int kristen_score = s[0].calculateTotalScore();

    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    cout << count;
    
    return 0;
}