//KALKULATOR SWTICH CASE

#include<iostream>
using namespace std;
int main(){
   float a, b, hasil;
    char aritmatika;
    cout<<"KALKULATOR"<<endl;
    cout<<"Masukkan nilai :";
    cin>>a;
    cout<<"pilih opertator (+, -, /, *)";
    cin>>aritmatika;
    cout<<"Masukkan nilai :";
    cin>>b;
    
    switch(aritmatika){
        case '+':
        cout<<"hasil :"<<a+b;
        break;
        case '-':
        cout<<"hasil :"<<a-b;
        break;
        case '/':
        cout<<"hasil :"<<a/b;
        break;
        case '*':
        cout<<"hasil :"<<a*b;
        break;
        default:
        cout<<"opertor salah"<<endl;
    }
}
