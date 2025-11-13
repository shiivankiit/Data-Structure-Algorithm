#include<iostream>
using namespace std;

int main(){
    int budget;
    cout<<"Enter your budget"<<endl;
    cin>>budget;
    
    if(budget>200000){
        cout<<"You can buy Scorpio"<<endl;
    }
    else{
        cout<<"You can not buy Scorpio"<<endl;
    }
    
    int age=80;
    if (age>18)
    {
       cout<<"You can vote"<<endl;
    }else{
       cout<<"You can not vote"<<endl;
    }
    
    return 0;
}