//PEMBAGIAN DAN MENAMPILKAN ANGKA DI BELAKANG KOMA (,) MENGGUNAKAN VARIABLE FLOAT
//DIVISION AND DISPLAY NUMBERS BEHIND COMMA (,) USING VARIABLE FLOAT

#include<iostream>
using namespace std;
int main(){

    float a, b, result;

    cout<<"input first number :";
    cin>>a;
    cout<<"input second number :";
    cin>>b;
    result = a/b;
    cout<<"result of "<< a << " / " << b << " = "<< result <<endl;
}
