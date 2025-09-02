#include<iostream>
using namespace std;
class Animal{
  public:
  virtual void AnimalSound(){
    cout<<"Animal Sound"<<endl;
  }
  virtual  void AnimalFood(){
    cout<<"Animal Food"<<endl;
  }
  
};
class Dog:public Animal{
public:
    void AnimalSound(){
        cout<<"Dog Sound Wooh Wooh"<<endl;
    }
    void  AnimalFood(){
        cout<<"Dog's Foods "<<endl;
    }
};
class Cat:public Animal {
 public:
   void AnimalSound(){
    cout<<"Cat Sound Meow Meow"<<endl;
   }
   void  AnimalFood(){
    cout<<"Cat's Foods"<<endl;
   }
};
int main(){
    system("cls");
    Animal *a;
    a = new Dog;
    a->AnimalSound();
    a->AnimalFood();
    a = new Cat;
    a->AnimalSound();
    a->AnimalFood();

   
    return 0;
}
