#include<iostream>
using namespace std;
class Person{
    public:
     void show(){
        cout<<"Person. "<<endl;
     }
};
class Student:public Person{
    public:
    void show(){
        cout<<"Person and Student. "<<endl;
    }
};
class Teacher:public Person{
    public:
    void show(){
            cout<<"This is Class Teacher That Inherite From Base class Person."<<endl;
    }
};
int main(){
    system("cls");
    Student s;
    s.show();

    Teacher t;
    t.show();
    return 0;
}