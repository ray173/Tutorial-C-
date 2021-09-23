//SWITCH CASE
//Sorry this is indonesian version :). I hope u enjoy with it!

#include<iostream>
using namespace std;
int main(){
    int pil;
    string jkel;
    
    cout<<"pilih salah satu (1/2)"<<endl;
    cout<<"1. Laki-Laki\n2. Perempuan"<<endl;
    cout<<"Pilihan :";
    cin>>pil;
    
    switch(pil){
        case 1 :
        jkel = "Laki-Laki";
        break;
        case 2 :
        jkel = "Perempuan";
        break;
        
        default :
        jkel = "mati aja";
        
    }

    cout<<"jenis kelamin saya adalah "<<jkel<<endl;
}
