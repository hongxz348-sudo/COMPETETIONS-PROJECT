#include<iostream>
#include<string>
using namespace std;
struct Product{
    int pro_id, qty;
    string pro_name;
    float price;
};
Product user_input(){
    Product ip;
    cout << "Input Product ID: " ;
    cin >> ip.pro_id;
    cout << "Input Product Name: " ;
    cin.ignore();
    getline(cin, ip.pro_name);
    cout << "Input Product Price: " ;
    cin >> ip.price;
    cout << "Input Product QTY: " ;
    cin >> ip.qty;
    return ip; 
}

float getTotal(int qty, float price){
    return qty * price;
}

void output(Product p){
    cout << "Product ID: " << p.pro_id << endl;
    cout << "Product Name: " << p.pro_name << endl;
    cout << "Product Price: $" << p.price << endl;
    cout << "Product QTY: " << p.qty << " Cans" << endl;
    cout << "Total Price: $" << getTotal(p.qty, p.price) << endl;
}

int main(){
    system("cls");
    cout << "**************************Product Store**************************"<<endl;
    Product q = user_input();
    output(q); 
    return 0;
}