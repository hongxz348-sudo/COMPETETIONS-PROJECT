#include<iostream>
using namespace std;
class Phone{
    private:
    string Phone_Name[10];
    string Phone_Color[10];
    int  Phone_Storage[10];
    float  Phone_price[10];
    int n=0;
    bool search = false,isDelete=true;
    public:
    void get(){
        cout<<"Input Phone's Name: ";
        cin>>Phone_Name[n];
        cout<<"Input Phone's Color: ";
        cin>>Phone_Color[n];
        cout<<"Input Phone's Storage: ";
        cin>>Phone_Storage[n];
        cout<<"Input Phone's Price: ";
        cin>>Phone_price[n];
        n++;
    }
    void set(){
        for(int i =0 ;i<n;i++){
            cout<<"Phone's Name: "<<Phone_Name[i]<<endl;
            cout<<"Phone's Color: "<<Phone_Color[i]<<endl;
            cout<<"Phone's Storage: "<<Phone_Storage[i]<<endl;
            cout<<"Phone's Price: "<<Phone_price[i]<<endl;
        }  
    }
    void Search(){
        string NameTp;
        cout<<"Input Name to search: ";
        cin>>NameTp;
        for(int i= 0 ; i<=n ;i++){
            if(NameTp==Phone_Name[i]){
                search= true;
                cout<<"Phone's Name: "<<Phone_Name[i]<<endl;
                cout<<"Phone's Color: "<<Phone_Color[i]<<endl;
                cout<<"Phone's Storage: "<<Phone_Storage[i]<<endl;
                cout<<"Phone's Price: "<<Phone_price[i]<<endl;
            }
        }
        if(!search){
            cout<<"Phone's name "<<NameTp<<" Is not found"<<endl;
        }else{
             cout<<"Phone's name "<<NameTp<<" Is found"<<endl;
         }
    }
    void Delete(){
        string Delete;
        cout<<"Input Name to Delete ";
        cin>>Delete;
        for(int i=0 ;i<=n ;i++){
            if(Delete==Phone_Name[i]){
                isDelete=false;
                for(int j = i; j < n - 1; j++){
                Phone_Name[j] = Phone_Name[j+1];
                Phone_Color[j] = Phone_Color[j+1];
                Phone_Storage[j] = Phone_Storage[j+1];
                Phone_price[j] = Phone_price[j+1];
                }
                n--;
                break;
            }
        }
        if(!isDelete){
            cout<<"Phone's name "<<Delete<<" Isn't found in list."<<endl;
        }else{
            cout<<"Phone's name "<<Delete<<" Is delete succesful."<<endl;
        }
    }
    void Operating(){
        int op;
        do{
            cout<<"==============>Menu<================="<<endl;
            cout<<"1. Input Phones "<<endl;
            cout<<"2. Output Phones "<<endl;
            cout<<"3. Search "<<endl;
            cout<<"4. Delete "<<endl;
            cout<<"5. Exit "<<endl;
            cout<<"Enter your Choices: ";
            cin>>op;
            switch(op){
                case 1: 
                    get();
                    break;
                case 2:
                    set();
                    break;
                case 3: 
                    Search();
                    break;
                case 4:
                    Delete();
                    break;
                default:
                cout<<"Thanks you for use our Sevice!!!!";
            }
        }while(op!=5);
    }
};
int main(){
    system("cls");
    Phone p;
    p.Operating();
    return 0;
}