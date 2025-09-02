#include<iostream>
#include<iomanip>
using namespace std;
 string getSpace(string str,int num){
      string spacing ="";
      if(str.length() == num){
        return str;
      }
      if(str.length() <num){
          spacing = str;
          for(int i = num  ; i > str.length(); i--){
            spacing += " ";
          }
      }else{
        spacing = str.substr(0,num - 3) + "...";
      }
      return spacing;
 }
  int main(){
       int id[10],read_id;
       string title[10],any;
       string author[10];
       int total_page[10],index=0;
       string contant[10];
       bool status = true;
       int ch,found=0;
       char read;
       while(status){
         cout<<"\t|*************************************************|"<<endl;
         cout<<"\t|                    MENU                         |"<<endl;
         cout<<"\t|      1. Add New Books                           |"<<endl;
         cout<<"\t|      2. List all books                          |"<<endl;
         cout<<"\t|      3. Modify Books                            |"<<endl;
         cout<<"\t|      4. Delete Books                            |"<<endl;
         cout<<"\t|      5. Search Books                            |"<<endl;
         cout<<"\t|      6. Exit                                    |"<<endl;
         cout<<"\t|*************************************************|"<<endl;
         cout<<"\t\tPlease choose one : ";
         cin>>ch;
        switch(ch){
         case 1:
          system("cls");
          cout<<"*********************Add New Books*****************"<<endl;
          cout<<"Input book id : ";
          cin>>id[index];
          cout<<"Input book title : ";
          cin.ignore();
          getline(cin,title[index]);
          cout<<"Input Author : ";
          getline(cin,author[index]);
          cout<<"Input number of page : ";
          cin>>total_page[index];
          cout<<"Input book conent : ";
          cin.ignore();
          getline(cin,contant[index]);
          index++;
          break;
          case 2:
           system("cls");
           found = 0;
           cout<<"*********************************************"<<endl;
           cout<<"| Book ID | Book Title |  Author |  Total Page |"<<endl;
           cout<<"*********************************************"<<endl;
           for(int i = 0;i<index ;i++){
              cout <<"| "<<getSpace(to_string(id[i]),8);
              cout <<"| "<<getSpace(title[i],11);
              cout <<"| "<<getSpace(author[i],7);
              cout <<"| "<<getSpace(to_string(total_page[i]),11);
              cout <<"| "<<endl;
           cout<<"*********************************************"<<endl;
           }
           cout<<"Do you want to a book(y/n)?";
           cin>>read;
           if(read == 'y' || read == 'Y'){
              cout <<"Input Book's Id to read: ";
              cin.ignore();
              cin>>read_id;
              for(int j = 0 ; j<index ;j++){
                if(read_id == id[j]){
                    found = 1;
                    cout<<"Book ID is : "<<id[j]<<endl;
                    cout<<"Book Title is  : "<<title[j]<<endl;
                    cout<<"Author is  : "<<author[j]<<endl;
                    cout<<"Total pages is : "<<total_page[j]<<endl;
                    cout<<"Book Contant : \n\t"<<contant[j]<<endl;
                }
              }
              if(found == 0){
                cout<<"ID not found!!!!!!"<<endl;
              }
           }
           cout<<"Press any to continue.................";
           cin>>any;
           break;
           case 3:
           cout<<"Good Bye!!!"<<endl;
           status = false;
           break;
      }

       }

    return 0;
}