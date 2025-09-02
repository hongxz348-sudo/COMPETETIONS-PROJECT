#include<iostream>
using namespace std;
struct Hotel{
    int id,phone_no,star;
    string Name,Phone_no,address;
};
void input(Hotel &h){
    cout<<"Enter ID: ";
    cin>>h.id;
    cin.ignore();
    cout<<"Enter Name: ";
    getline(cin,h.Name);
    cout<<"Enter Star: ";
    cin>>h.star;
    cout<<"Enter Phone Number: ";
    cin>>h.phone_no;
    cin.ignore();
    cout<<"Enter Address: ";
    getline(cin,h.address);
}
void output(Hotel &h){
    cout<<"ID: "<<h.id<<endl;
    cout<<"Name: "<<h.Name<<endl;
    cout<<"Star: "<<h.star<<endl;
    cout<<"Phone Number: "<<h.phone_no<<endl;
    cout<<"Address: "<<h.address<<endl;
}
int main(){
    system("cls");
    Hotel H;
    input(H);
    system("cls");
    system("color 0A");
    cout<<"============>Hotel Information<==============";
    output(H);
    return 0;
}