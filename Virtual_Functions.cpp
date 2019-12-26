#include<bits/stdc++.h>
using namespace std;

int p_id=0;
int s_id=0;

class Person
{
public:
    string name;
    int age;
    virtual void putdata()=0;
    virtual void getdata()=0;
};

class Professor: public Person
{
public:
    
    int publication;
    void getdata()
    {
        cin>>name>>age>>publication;
    }
    void putdata()
    {
        cout<<name<<" "<<age<<" "<<publication<<" "<<++p_id<<endl;
    }
};

class Student: public Person
{

public:

    int *marks=new int[6];

    void getdata()
    {
        cin>>name>>age;
        for(int i=0; i<6; i++)
            cin>>marks[i];
    }

    void putdata()
    {
        int sum=0;

        for(int i=0; i<6; i++)
            sum+=marks[i];

        cout<<name<<" "<<age<<" "<<sum<<" "<<++s_id<<endl;
    }

};

int main(){

    int n, val;
    cin>>n;
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){

            per[i] = new Professor;

        }
        else per[i] = new Student; 
        per[i]->getdata(); 

    }

    for(int i=0;i<n;i++)
        per[i]->putdata();

    return 0;

}
