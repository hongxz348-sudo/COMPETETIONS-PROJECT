#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
class Product{
    private:
     int pro_id;
     string pro_name;
     float pro_price;  
     public:
      void Setproduct(int id, string name , float price){
        pro_id = id;
        pro_name = name;
        pro_price = price;
      }
      int getPro_id(){
        return pro_id;
      }
      string getPro_name(){
        return pro_name;
      }
      float getPro_price(){
        return pro_price;
      }
};
class Operater{
    private:
        int searchId,DeleteId,updateId;
        bool found = false, DeleteF = false,IsUpdate = false;
        int id;
        string name;
        float price;
    public:
     void writeDatatoFile( Product p){
        ofstream file("data.txt" , ios::app); 
       file << p.getPro_id() <<" "<<p.getPro_name()<<" "<<p.getPro_price() <<endl;
        file.close();
     }
     Product getInputproduct(){
      Product p;
      int id;
      string name;
      float price;
      cout<<"Input Product ID: ";
      cin>>id;
      cout<<"Input Product Name: ";
      cin>>name;
      cout<<"Input Product Price: ";
      cin>>price;
      p.Setproduct(id,name,price);
      return p;
     }

    void readDatafromFile() {
        ifstream file("data.txt");
        int no = 1;
        cout << setw(33) << "Product Information" << endl;
        cout << "|========================================|" << endl;
        cout << "|  No |    ID    |    Name    |   Price  |" << endl;
        cout << "|========================================|" << endl;   
        while (file >> id >> name >> price) {
            cout<< "| " << setw(2) << no << setw(4)
                << "| " << setw(6) << id << setw(5)
                << "| " << setw(7) << name << setw(6)
                << "| " << setw(6) << fixed << setprecision(2) << price <<setw(4)
                << "|"  << endl;
                cout <<  "|----------------------------------------|" << endl;
                no++;
        }
        file.close();
     }


        void Search() {
              ifstream file("data.txt");
              cout << "Input Product ID for Searching: ";
              cin >> searchId;

              while (file >> id >> name >> price) {
                  if (id == searchId) {
                      found = true;
                      cout << "\nProduct  is found.\n";
                      cout << "Product ID: " << id << "\n";
                      cout << "Product Name: " << name << "\n";
                      cout << "Product Price: " << fixed << setprecision(2) << price << " $" <<endl;
                  }
              }
              if (found==false) {
                  cout << "\nThis Product ID " << searchId << " was not found.\n";
              }
              file.close();
          }
          

         void Delete(){
              int DeleteId;
              cout << "Input Product ID for Delete: ";
              cin >> DeleteId;

              ifstream file("data.txt");
              ofstream tmp("temp.txt");

              while(file >> id >> name >> price){
                  if(DeleteId == id){
                      DeleteF = true;  
                      continue;
                  }
                  tmp << id << " " << name << " " << price << endl;   
              }
              file.close();
              tmp.close();
              remove("data.txt");
              rename("temp.txt" , "data.txt");

              if(DeleteF == false){
                  cout << "Product ID " << DeleteId << " not found." << endl;
              }else{
                    cout << "Product with ID " << DeleteId << " deleted successfully." << endl;
              }
          }


      void Update(){
        cout<<"Input Product Id for to Update: ";
        cin>>updateId;
        ifstream file("data.txt");
        ofstream tmp1("temp.txt");
             while (file >> id >> name >> price) {
                  if (id == updateId) {
                      IsUpdate = true;
                      cout << "Input New Product Name: " ;cin>> name;
                      cout << "Input New Product Price: " ;cin>> price;
                  }
                   tmp1 << id << " " << name << " " << price << endl;  
              }
              file.close();
              tmp1.close();
              remove("data.txt");
              rename("temp.txt" , "data.txt");
        if(IsUpdate==false){
            cout<<"Update product id "<<updateId<<" isn't complete!"<<endl;
        }else{
            cout<<"Product update is Completed."<<endl;
        }
      } 
     void run(){
        int op;
        Product p;
        do{
          cout<<setw(10)<<"Menu"<<endl;
          cout<<"1. Insert Product"<<endl;
          cout<<"2. List Product"<<endl;
          cout<<"3. Search Product"<<endl;
          cout<<"4. Delete Product"<<endl;
          cout<<"5. Update Product"<<endl;
          cout<<"Please Your Choice: ";
          cin>>op;
          system("cls");
          switch(op){
            case 1:
                p = getInputproduct();
                writeDatatoFile(p);
                break;
            case 2: 
                readDatafromFile();
                break;
            case 3:
                Search();
                break;
            case 4:
                Delete();
                break;
            case 5:
                Update();
          }
          }while(op!=6);
       } 
};
int main(){
    system("cls");
    Operater op;
    op.run();
    system("cls");
    return 0;
}
