#include <iostream>
using namespace std;
class Product
{
private:
    int id, qty;
    string name;
    float Price;

public:
    void setProduct()
    {
        cout<<"Input ID: ";
        cin>>id;
        cout<<"Input Name: ";
        cin.ignore();
        getline(cin,name);
        cout<<"Input Price: ";
        cin>>Price;
        cout<<"Input Qty: ";
        cin>>qty;
    }
    void getProduct()
    {
        cout << "Product Id: " << id << endl;
        cout << "Product Name: " << name << endl;
        cout << "Product Price: " << Price << endl;
        cout << "Product Qty: " << qty << endl;
        cout << "Total Price: " <<getTotal(qty , Price);
    }
    float getTotal(int q , float p){
          return q*p;
    }
};
int main()
{
    system("cls");
    cout<<"==============>Wellcome To Hire Store<=============="<<endl;
    Product P;          //For Called Main Class to used in Main Function
    P.setProduct();     //Data Members in class name "Product" => Input
    cout<<"==================>list Your Goods<================="<<endl;
    P.getProduct();     //Data Members in class name "Product" => Output
    return 0;
}