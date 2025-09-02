#include<iostream>
using namespace std;
class Person{
    public: 
    int id;
    string name,gender;
    int age;
    void showPerson(){
        cout<<"ID : "<<id<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Gender : "<<gender<<endl;
        cout<<"Age : "<<age<<endl;
    }
    void setPerson(int i ,string n, string g,int a){
        id = i;
        name = n;
        gender =g;
        age = a;
    }
};
class Student:public Person {
    public:
       float score;
       string room;
       string year;
       void setStudent(int i , string n , string g , int a , float s , string r , string y){
            setPerson(i,n,g,a);
            score = s;
            room = r;
            year = y;
       }
       void showStudent(){
            showPerson();
            cout<<"Score : "<<score<<endl;
            cout<<"Room : "<<room<<endl;
            cout<<"Year : "<<year<<endl;
       } 
    };
class Teacher:public Person{
    public:
     float Hour , Rate ;
     string Subject ;
     void ShowTeacher(){
      showPerson();
      cout<<"Hour : "<<Hour<<endl;
      cout<<"Rate : "<<Rate<<endl;
      cout<<"Subject :  "<<Subject<<endl;
     }
     void SetTecher(int i , string n , string g , int a,float h, float r , string s){
        setPerson(i,n,g,a);
        Hour =  h;
        Rate = r;
        Subject =s;
     }
};
int main(){
    system("cls");
    Student s;
    Teacher t;
    s.setStudent(1001 , "Zhao Lusi" , "Female" , 26 , 80 , "214" , "Year 1 Semester II");
    cout<<"=============>Student Information<==============="<<endl;
    s.showStudent();
    t.SetTecher( 1002,  "Keo TongHeng Cute"  ,"Male" ,56 , 6 , 5  ,"JavaScript" );
    cout<<"\t\t\t"<<endl;
    cout<<"=============>Teacher Information<==============="<<endl;
  
    t.ShowTeacher();
  return 0;
}