#include<iostream>
using namespace std;
class Book{
    private:
      int id;
      string title;
      int qty;
      float price;
    public:
       Book(){
          id= 101;
          title = "c++";
          price = 55.5;
          qty =100 ;
       }
       string getTitle(){
        return title;
       }
       float getPrice(){
        return price;
       }
};
class Order{
    private:
     int id;
     string date;
     Book book;
     int qty;
     public: 
    void setOrder(int o_id,string o_date,Book b,int q){
        id=o_id;
        date = o_date;
        book = b;
        qty = q;
    }
    void disPlayOrder(){
        cout<<"Order ID: "<<id<<endl;
        cout<<"Order Date: "<<date<<endl;
        cout<<"Book Title: "<<book.getTitle()<<endl;
        cout<<"Book Price: "<<book.getPrice()<<endl;
        cout<<"Order Quantity: "<<qty<<endl;
        cout<<"Total: "<<qty*book.getPrice()<<endl;
    }
};
int main(){
     Book b;
     Order o;
     o.setOrder(5,"4/may/2025",b ,2);
     o.disPlayOrder();
}