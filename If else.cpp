//IF ELSE

#include<iostream>
using namespace std;
int main(){
    int biaya, total;
    cout<<"Masukkan pengeluaran :";
    cin>>biaya;
    if (biaya>=10)
    {
        total = biaya -2;
        cout<<"anda mendapatkan potongan 2 barang"<<endl;
    }else{
        total = biaya;
        cout<<"anda tidak mendapat potongan"<<endl;
    }
    cout<<"biaya awal = "<<biaya<<endl;
    cout<<"total = "<<total<<endl;
}
