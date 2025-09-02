#include<iostream>
using namespace std;
int main(){
     int numbers[5];
     int min,total_number;
    for(int i=0;i<5;i++){      //Input Sections
      cout<<"Input the numbers: ";
      cin>>numbers[i];

    }
       min=numbers[0];
    for(int i=0;i<5;i++){      //Plus Sections
        total_number+=numbers[i];
    }
    cout<<"Result of Plus is: "<<total_number<<endl;
    for(int i=0;i<5;i++){      //Find Minimum Number Sections
        if(min>numbers[i]){ 
            min=numbers[i];
        }
     }
       cout<<"The minimum number is: "<<min;

    return 0;
}