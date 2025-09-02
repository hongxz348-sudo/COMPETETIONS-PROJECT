#include<iostream>
using namespace std;
class Payment{
    public:
      void getPay(float price , int qty){
        float pay = price * qty;
        cout<<"Payment without discount:  "<<pay <<" $"<<endl;
      }
      void getPay(float price,int qty,float discont){
        float pay = price * qty;
        pay = pay -(pay*(discont/100));
        cout<<"Payment with Standard Discount: "<<pay<<" $"<<endl;
      }
      void getPay(float price,int qty ,float discount, float ExtraDiscount){
        float pay = price * qty;
        pay = pay -(pay*(discount/100));
        pay = pay - (pay*(ExtraDiscount/100));
        cout<<"Payment with Extra Discount: "<<pay<<" $"<<endl;
      }
};
int main(){
    system("cls");
    Payment p;
    p.getPay(5,10);
    p.getPay(5,10,5);
     p.getPay(5,10,5,5);
    return 0;
}