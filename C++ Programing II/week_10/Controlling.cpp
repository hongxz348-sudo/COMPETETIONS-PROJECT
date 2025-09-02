#include<iostream>
using namespace std;
class Category{
    private:
      int id;
      string Name;
    public:
      void SetCategory( int i , string n){
         id = i;
         Name = n;
      }
      int getid(){
        return id;
      }
      string getName(){
        return Name;
      }
};
class Product:public Category{
    private:
      float pro_id;
      string pro_name;
      int pro_qty;
      float price;
    public:
        Product(int cat_id, string cat_name , int i , string name , float p  ,int q ){
            SetCategory(cat_id ,cat_name);
            pro_id = i;
            pro_name = name;
            price = p;
            pro_qty  = q;
        }
        void getProduct(){
            cout<<"Category ID: "<<getid()<<endl;
            cout<<"Category Name: "<<getName()<<endl;
            cout<<"Product ID : "<<pro_id<<endl;
            cout<<"Product Name: "<<pro_name<<endl;
            cout<<"Price: "<<price<<endl;
            cout<<"Quantity : "<<pro_qty<<endl;
        }
};
int main(){
    system("cls");
    Product p(5 , "IPHONE" , 1003 , "13 Pro Max " ,1500,4);
    p.getProduct();
    return 0;
}