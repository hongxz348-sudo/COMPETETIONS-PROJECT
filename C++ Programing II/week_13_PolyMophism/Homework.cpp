#include<iostream>
using namespace std;
class Water{
  public:
 virtual void showModel(){
     cout<<"Show Model Water"<<endl;
    }
 virtual  void showPrice(){
    cout<<"Show Price Water"<<endl;
    }
};
class Vital:public Water{
  public:
    void showModel(){
        cout<<"Vital Water. "<<endl;
    }
    void showPrice(){
        cout<<"Vital Price 4000 Riel."<<endl;
    }
};
class Hitec:public Water{
    public:
     void showModel(){
        cout<<"Hitec Water. "<<endl;
     }
     void showPrice(){
        cout<<"Hitec Price 2000 Riel."<<endl;
     }
};
class SunRice:public Water{
  public:
   void showModel(){
    cout<<"SunRice Water. "<<endl;
   }
   void showPrice(){
    cout<<"SunRice Price 2500 Riel."<<endl;
   }
};
int main(){
    system("cls");
    Water *w;
 
    w = new Vital;
    w->showModel();
    w->showPrice();
 
    cout<<"\t\t\t"<<endl;

    w = new Hitec;
    w->showModel();
    w->showPrice();
  
    cout<<"\t\t\t"<<endl;

    w = new SunRice;
    w->showModel();
    w->showPrice();

    return 0;
}