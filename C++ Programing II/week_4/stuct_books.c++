#include<iostream>
using namespace std;
struct Book
    {
      int id;
      string title;
      float price;
      bool stock;
    };
int main(){
    Book b;
    cout<<"Input Book Id: ";
    cin>>b.id;
    cout<<"Input Book Title: ";
    cin>>b.title;
    cout<<"Input Book Price: ";
    cin>>b.price;
    cout<<"Input Book Stock: ";
    cin>>b.stock;
    system("cls");
    cout<<"Book  ID: "<<b.id<<endl;
    cout<<"Book  Title: "<<b.title<<endl;
    cout<<"Book  Price: "<<b.price<<endl;
    cout<<"Book  Stock: "<<b.stock<<endl;
    return 0;
}