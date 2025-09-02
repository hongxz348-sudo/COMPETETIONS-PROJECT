#include <iostream>
using namespace std;
string username,password;
string cf_username,cf_password;
class Student
{
private:
    int id[5], year[5];
    string name[5], room[5];
    float wbd[5], cpp[5], mfc[5];

public:
    void setStudent()
    {
        for (int i = 0; i < 2; i++)
        {
            cout << "==============>Input Student Data " << i + 1 << " <==============" << endl;
            cout << "Student WEB: ";
            cin >> wbd[i];
            cout << "Student CPP: ";
            cin >> cpp[i];
            cout << "Student MFC: ";
            cin >> mfc[i];
        }
        // cout<<"Student ID: ";
        // cin>>id;
        // cout<<"Student Name: ";
        // cin.ignore();
        // getline(cin,name);
        // cout<<"Student Room: ";
        // cin>>room;
        // cout<<"Student Year: ";
        // cin>>year;
    }
    float totalScore(float w, float c, float m)
    {
        return w + c + m;
    }
    float getAvg(int i)
    {
        return totalScore(wbd[i], cpp[i], mfc[i]) / 3.0;
    }
    void getStudent()
    {
        for (int i = 0; i < 2; i++)
        {
            cout << "==============>Student Information " << i + 1 << " <==============" << endl;
            // cout << "Student ID: " << id << endl;
            // cout << "Student Name: " << name << endl;
            // cout << "Student Room: " << room << endl;
            // cout << "Student Year: " << year << endl;
            cout << "Score WBD: " << wbd[i] << endl;
            cout << "Score CPP: " << cpp[i] << endl;
            cout << "Student MFC: " << mfc[i] << endl;
            cout << "Total Score: " << totalScore(wbd[i], cpp[i], mfc[i]) << endl;
            cout << "Student Average: " << getAvg(i) << endl;
            float avg = getAvg(i);
            cout << "Student Grade: ";
            if (avg <= 100 && avg >= 0)
            {
                if (avg >= 90)
                    cout << "A" << endl;
                else if (avg >= 80)
                    cout << "B" << endl;
                else if (avg >= 70)
                    cout << "C" << endl;
                else if (avg >= 60)
                    cout << "D" << endl;
                else if (avg >= 50)
                    cout << "E" << endl;
                else
                    cout << "F" << endl;
            }
            else
            {
                cout << "Score Issue (Bigger than 100 or Smaller than 0)" << endl;
            }
        }
    }
    void createAccount(){
       cout<<"===========>Crete Your Account<==========="<<endl;
       cout<<"Your UserName: ";
       cin.ignore();
       getline(cin,username);
       cout<<"Your PassWord: ";
       cin.ignore();
       getline(cin,password);
    }
    void login(){
       A:
       cout<<"===========>WellCome To BIU System<==========="<<endl;
       cout<<"Input Your UserName: ";
       cin.ignore();
       getline(cin,cf_username);
       cout<<"Input Your PassWord: ";
       cin.ignore();
       getline(cin,cf_password);
       system("cls");
       if (username==cf_username && password == cf_password){
           cout<<"==> Congratuloation For Login To System Successful."<<endl;
       }else{
           
           cout<<"You Are Wrong Username And Password"<<endl;
           goto A;
       }  
    }
};
int main()
{
    system("cls");
    Student S;
    S.createAccount();
    system("cls");
    S.login();
    
    S.setStudent();
    system("cls");
    S.getStudent();
    return 0;
}