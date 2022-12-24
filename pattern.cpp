#include<iostream>
using namespace std;

int main(){
    for(int i=1; i<=10; i++){
        if(i<=5){
            for(int j=1; j<=i; j++){
                cout<<"*";
            }
            for(int j=i+1; j<=10; j++){
                cout<<" ";
            }
            cout<< endl;
        }
        else{
                for(int k=1; k<=i-1; k++){
                    cout<<" ";
                }
                for(int k=i; k<=10; k++){
                    cout<<"*";
                }
                cout<< endl;
            }
    }
    return 0;
}