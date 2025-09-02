#include<iostream>
using namespace std;
class Book{
    private:
     int id;
     string title;
     public:
      Book(){
         id=102;
         title = "Javascript";
      }
     
      Book(int i , string n){
          id = i;
          title = n;
      }
       void setBook(int i){
          id = i;
      }
    void setTitle( string n){
        title = n;
      }
      void display(){
        cout<<"Book's ID: "<<id<<endl;
        cout<<"Book's Title: "<<title<<endl;
      }
};
int main(){
      system("cls");
      Book b(103, "HTML");
      b.setBook(109);
      b.setTitle("JavaScript");
      b.display();
      
    return 0;
}