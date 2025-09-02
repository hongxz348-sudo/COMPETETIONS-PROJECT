#include<iostream>
#include<fstream>
using namespace std;
int main() {
    ofstream myFile("store.txt",ios::app);
    myFile << "Hello, World!" << endl;

    myFile.close();
    return 0;
}