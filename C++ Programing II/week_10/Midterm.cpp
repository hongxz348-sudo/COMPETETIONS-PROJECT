#include<iostream>
using namespace std;
class Hotel{
    private:
        int id,star;
        string name,phone_no,address;
    public:
     void setHotel(int i , string n , int s, string p_n , string a){
        id = i;
        name = n;
        star =s;
        phone_no =p_n;
        address =a;
     }
     int getHoteId(){
         return id;
     }
     string getHotelName(){
        return name;
     }
     int getStar(){
        return star;
     }
     string getPhone(){
        return phone_no;
     }
};
class Room:public Hotel{
    private:
    int room_id;
     float price;
     string Description,room_name;
     public:
     void setRoom(int i, string n, int s, string p_n, string a ,int r_d,string r_n,float p, string d){
        setHotel(i,n,s,p_n,a);
        room_id = r_d;
        room_name = r_n;
        price = p;
        Description =d;
     }
     void getRoom (){
        cout<<"Hotel's ID: "<<getHoteId()<<endl;
        cout<<"Hotel's Name: "<<getHotelName()<<endl;
        cout<<"Hotel's Star: "<<getStar()<<" Stars"<<endl;
        cout<<"Hotel's Phone Number: "<<getPhone()<<endl;
        cout<<"Hotel's Price: "<<price<<" $"<<endl;
        cout<<"Room's Id: "<<room_id<<endl;
        cout<<"Room's Name: "<<room_name<<endl;
        cout<<"Description: "<<Description<<endl;
     }
};
int main(){
     system("cls");
      Room R;
      R.setRoom(1002 ,"Angkor Siem Reap" , 5 ,"0978080208","Siem Reap",168,"White Heaven ",199.99,"This Is The Famous Hotel In Siem Reap");
      cout<<"===========>HOTEL INFORMATION<==========="<<endl;
      R.getRoom();
    return 0;
}