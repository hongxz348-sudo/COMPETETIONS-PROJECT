#include<iostream>
#include<fstream>
using namespace std;
int main(){
   system("cls");
   ifstream  myFile("Store.txt");
   string Text;
   while(getline(myFile,Text)){
    cout<<Text<<endl;
   }
   myFile.close();
   return 0;
}