#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){
    system("cls");
    ofstream myFile("Store.txt",ios::app);
    string Data;
    cout<<"Input Data: ";
    getline(cin,Data);
    myFile<<Data<<endl;
    myFile.close();
    return 0;
}