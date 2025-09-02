#include<iostream>
using namespace std;
struct Student{
    int id,year,max=0,min;
    string name,date_of_year,room;
    char gender;
    float score[3],total_score;
};
int main(){
    system("cls");
    Student s;
    s.total_score=0;
    cout<<"Input ID: ";
    cin>>s.id;
    cout<<"Input Name: ";
    cin>>s.name;
    cout<<"Input Gender: ";
    cin>>s.gender;
    cout<<"Input Date of birth: ";
    cin>>s.date_of_year;
    cout<<"Input Year: ";
    cin>>s.year;
    cout<<"Input Room: ";
    cin>>s.room;
    for(int i=0;i<3;i++){                  //Input Section
        cout<<"Input Score "<< i+1 <<":";
        cin>>s.score[i];
    }
    s.min=s.score[0];
    cout<<"\t\t\tOut Information"<<endl;
    cout<<"Student ID: "<<s.id;
    cout<<"Student Name: "<<s.name;
    cout<<"Student Gender: "<<s.gender;
    cout<<"Student DOB: "<<s.date_of_year;
    cout<<"Student Year: "<<s.year;
    cout<<"Student Room: "<<s.room;
    for(int i=0;i<3;i++){                                             //Output Section
        cout<<"Student's Score "<<i+1<<" is"<<":"<<s.score[i]<<endl; 
    }
    for(int i=0;i<3;i++){                 //Sum Section
        s.total_score+=s.score[i];
    }
    for(int i=0 ;i<3;i++){                //Maxximume Section
        if(s.max<s.score[i]){
           s.max=s.score[i];
        }
    }
    cout<<"The Maximume score is: "<<s.max<<endl;
    for(int i=0;i<3;i++){                             //Minimume Section
        if(s.min>s.score[i]){
           s.min=s.score[i];
        }
    }
    cout<<"The Minimume Score is: "<<s.min;
    return 0;
}