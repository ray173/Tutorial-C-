//LOGIN PAGE FOR 2 ACCOUNT

#include<iostream>
using namespace std;
string user;
int pass;
int main(){
    cout<<"=====LOGIN PAGE!====="<<endl;
    cout<<endl;
    cout<<"Username :";
    cin>>user;
    cout<<"Password :";
    cin>>pass;
    if(user=="admin1"){
        if(pass==123456){
            cout<<endl;
        cout<<"Login Success!"<<endl;
    }else{
            cout<<endl;
        cout<<"Username or Password wrong!"<<endl;
    }
}else if(user=="admin2"){
    if(pass==654321){
            cout<<endl;
        cout<<"Login Success!"<<endl;
    }else{
            cout<<endl;
        cout<<"Username or Password wrong!"<<endl;
    }
}else{
        cout<<endl;
    cout<<"Username or Password wrong!"<<endl;
}
 
}
