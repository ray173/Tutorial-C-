#include<iostream>

using namespace std;
int main(){
    int pencacah;
    float nilai;
    float total;
    cout<<"menghitung nilai rata-rata"<<endl;
    cout<<endl;
    cout<<"akhiri pake bilangan negatif"<<endl;
    pencacah=0;
    total=0;
    cout<<"masukkan nilai :";
    cin>>nilai;
    while(nilai>=0){
        pencacah++;
        total+=nilai;
        cout<<"masukkan nilai :";
        cin>>nilai;
    }
    cout<<"nilai rata-rata adalah "<<total/pencacah<<endl;
}
