#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

class Employee {
private:
    string Name, Gender;

public:
    void WriteDataToFile() {
        ofstream File("file.txt", ios::app);
        cout << "Enter Your Name: ";
        getline(cin, Name);
        File << Name ;
        File << "end";
        File.close();
    }

    void ReadDataFromFile() {
        ifstream File("file.txt");
        string Data;
        cout << "================>List Data<================"<<endl;
        cout <<"Name"<<setw(10)<<"Gender"<<endl;
        while (getline(File, Data)) {
            if (Data != "end") {
               cout<<Data;
            }else {
                cout<<endl;
            }
        }
        File.close();
    }
};

int main() {
    system("cls"); // Optional and Windows-specific
    Employee em;
    em.WriteDataToFile();
    em.ReadDataFromFile();
    return 0;
}


string getSpace(string str , int num){
              string space =str;
              if(space.length()==num){
                return space;
              }
              if(space.length()<num ){
                int addSpaceString = num - str.length();
                for(int i = 0 ; i<addSpaceString;i++){
                  space +=" ";
                }
              }else{
                space = space.substr(0,num-3)+ "...";
              }
              return space;
     }
};
