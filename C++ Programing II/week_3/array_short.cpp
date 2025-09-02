#include<iostream>
using namespace std;
int main(){
     float score[5]={20,30,15,12,25};
     float temp;
     for(int i=0 ; i<5;i++){
        for(int j=0; j<5 ;j++){
            if(score[j]>score[i]){
                temp =score[i];
                score[i]=score[j];
                score[j]=temp;
            }
            cout<<score[j]<<"\t";
        }
        cout<<endl;
     }
 





    return 0;
}