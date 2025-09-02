#include<iostream>
using namespace std;
int main(){
    int numbers[5]={20,30,15,12,25};
    int max=0;
    for(int i=0 ; i<5;i++){
     if(max<numbers[i]){
        max=numbers[i];
     }
    }

    cout<<"The Maximum Number is: "<<max;


    return 0;
}