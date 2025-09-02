#include<iostream>
#include<fstream>
using namespace std;
int main(){
    system("cls");
    string str;
    fstream myFile("Store.txt",ios::in | ios::out | ios::app);
    myFile<<"KANG VENGSRENG"<<endl;
    myFile.seekg(0);
    while(myFile.good()){
        getline(myFile , str );
        cout<<str<<endl;
    }
    myFile.close();
    return 0;
}