//KALKULATOR SEDERHANA
//Indonesian version :)

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
    
    if (aritmatika == '+'){
        hasil = a+b;
    }else if (aritmatika=='-'){
        hasil = a-b;
    }else if (aritmatika=='/'){
        hasil = a/b;
    }else if (aritmatika=='*'){
        hasil = a*b;
    }
    cout<< "hasil dari "<< a << aritmatika << b << " = " << hasil<<endl;
}
