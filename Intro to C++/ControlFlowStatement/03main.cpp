#include<iostream>
using namespace std;

int main(){

    int height;
    cout<<"Enter Your Height"<<endl;
    cin>>height;

    int weight;
    cout<<"Enter Your Weight";
    cin>>weight;

    if(height >5){
        if(weight > 70){
            cout<<"You got a good BMI"<<endl;
        } else {
            cout <<"Bad body mass index"<<endl;
        }
    } else{
        cout<<"Do a workout for your body"<<endl;
    }
}