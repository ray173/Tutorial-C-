//PERCABANGAN DALAM PERCABANGAN IF ELSE
//Sorry this is indonesian version :). Enjoy!

#include<iostream>
using namespace std;
int main(){
    string jkel, status, kegiatan;
    int pil, umur;
    cout<<"Pilih salah satu (1/2)"<<endl;
    cout<<"1.Laki-Laki\n2.Perempuan"<<endl;
    cout<<"pilihan : ";
    cin>>pil;
    cout<<"umur kamu :";
    cin>>umur;
    if(pil==1)
    {
        jkel = "Laki-Laki";
        if(umur >= 27)
        {
            status = "sudah waktunya";
            kegiatan = "mencari jodoh";
        }else
            {
            status = "belum waktunya ";
            kegiatan = " pertampan wajahmu dan tebalkan dompetmu";
        }
    }else if(pil==2)
    {
        jkel = "Perempuan";
        if(umur >= 25)
        {
            status = "sudah waktunya";
            kegiatan = "mencari jodoh";
        }else
            {
            status = "belum waktunya";
            kegiatan = "persiapkan dirimu sayang";
        }
    }else
    {
        jkel = "Buset";
        status = "buseettt dah";
        kegiatan = "mati aja";
    }
    cout<<endl;
    cout<<"kamu adalah "<< jkel << " berumur "<<umur<<" tahun"<<endl;
    cout<<status<<"Menikah broh!"<<endl;
    cout<<"silahkan"<<kegiatan<<endl;
}
