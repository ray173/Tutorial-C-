//IF ELSE IF

#include<iostream>
using namespace std;
int main(){
    
    int pil;
    cout<<"pilih salah satu\n1. LAKI-LAKI\n2. PEREMPUAN"<<endl;
    cout<<"masukkan pilihan :";
    cin>>pil;
    if(pil==1)
    {
        cout<<"jenis kelamin saya laki-laki"<<endl;
    }else if(pil==2)
    {
        cout<<"jenis kelamin saya perempuan"<<endl;
    }else
    {
        cout<<"pilihan tidak tersedia"<<endl;
    }
}
