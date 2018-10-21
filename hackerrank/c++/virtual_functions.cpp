#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person{
    protected:
    string name;
    int age;
    int cur_id;
    public:
    virtual void getdata()=0;
    virtual void putdata()
    {
        cout<< name<<" "<<age;
    }
};

class Student:public Person{
    int scores[6];
    int sumTotal;
    static int totalPersons;
    public:
    Student(){
        cur_id=++totalPersons;
    }
    virtual void getdata()
    {
        cin>>name>>age;
        sumTotal=0;
        for(int i;i<6;i++)
        {
            cin>>scores[i];
            sumTotal+=scores[i];
        }
    }
    virtual void putdata()
    {
        Person::putdata();
        cout <<" "<<sumTotal<<" "<<cur_id<<endl;
    }
};
class Professor:public Person{
    int numPublications;
    static int totalPersons;
    public:
    Professor()
    {
        cur_id=++totalPersons;
    }
    virtual void getdata()
    {
        cin>>name>>age>>numPublications;
    }
    virtual void putdata()
    {
        Person::putdata();
        cout <<" "<<numPublications<<" "<<cur_id<<endl;
    }
};
int Student::totalPersons = 0;
int Professor::totalPersons = 0;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}



