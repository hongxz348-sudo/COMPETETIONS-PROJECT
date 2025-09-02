#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    system("cls");
    string data,str;
    int choice;
    cout<<"=========>Choices<========="<<endl;
    cout<<"1. Input Data"<<endl;
    cout<<"2. Output Data"<<endl;
    cout<<"Choose your choice: ";
    cin>>choice;
    cin.ignore(); 
    switch(choice){
        case 1:{
            ofstream myFile("Store.txt",ios::app);
            cout<<"Input Data: ";
            getline(cin,data);
            myFile<<data<<endl;
            myFile.close();
            break;
             }
        case 2:{
            ifstream myFile("Store.txt");
            cout<<"**********Data List**********"<<endl;
            while(getline(myFile,str)){
                cout<<str<<endl;
            }
            myFile.close();
            } 

   }
    return 0;
}