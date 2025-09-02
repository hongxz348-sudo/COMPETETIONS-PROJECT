#include <iostream>
#include<string>
using namespace std;
struct Order
{
    int order_id, qty;
    string order_date, name;
    float price;
};
Order input()
{
    Order O;
    cout << "Order ID: ";
    cin >> O.order_id;
    cout << "Order Date: ";
    cin.ignore();
    getline(cin, O.name);
    cout << "Order Name: ";
    cin.ignore();
    getline(cin, O.name);
    cout << "Order Price: ";
    cin >> O.price;
    cout << "Order QTY: ";
    cin >> O.qty;
    return O;
}
float getTolal(int qty, float price){
  return qty*price;
}
void Output(Order R)
{
    cout << "ID: " << R.order_id<<endl;
    cout << "Date: " << R.order_date<<endl;
    cout << "Name: " << R.name<<endl;
    cout << "Price: " << R.price<<endl;
    cout << "QTY: " << R.qty<<endl;
    cout << "Total Price: "<<getTolal(R.qty,R.price);
}
int main()
{
     system("cls");
     Order p = input();
    cout << "**************************Order information**************************" << endl; 
    Output(p);
    return 0;
}