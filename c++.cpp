//LOGIN FOR 1 ACCOUNT

#include<iostream>
using namespace std;
string user, pass;
int main(){
    cout<<"LOGIN!"<<endl;
    cout<<endl;
    
    cout<<"Username :";
    cin>>user;
    cout<<"Password :";
    cin>>pass;
    
    if(user=="admin"){
        if(pass=="user"){
            cout<<"Login success"<<endl;
        }else{
            cout<<"Username or Password wring!"<<endl;
        }
    }else{
        cout<<"Username or Password wrong!"<<endl;
    }
}