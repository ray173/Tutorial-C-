//MENCARI BILANGAN GANJIL/GENAP MENGGUNAKAN IF ELSE

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"masukkan angka :";
    cin>>a;
    if(a % 2 == 1)
    {
        cout<<"angka "<< a <<" adalah bilangan ganjil"<<endl;
    }else{
        cout<<"angka "<< a <<" adalah bilangan genap"<<endl;
    }
}
