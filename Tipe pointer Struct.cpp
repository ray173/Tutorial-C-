#include<iostream>
#include<cstring>
using namespace std;


struct Mahasiswa{
    char nim[20];
    int nilai;

};

int main(){
    Mahasiswa mhs;

    strcpy(mhs.nim, "21.11.4407");
    mhs.nilai = 99;

    cout<<"NIM = " << mhs.nim << ", nilai " <<mhs.nilai << endl;

    Mahasiswa *ptrMhs = &mhs;

    strcpy (ptrMhs -> nim, "21.11.4407");
    ptrMhs -> nilai = 90;

    cout<<"NIM = " << ptrMhs->nim <<", nilai = " << ptrMhs->nilai <<endl;

    cout<<"NIM = " << mhs.nim <<", nilai = " <<mhs.nilai << endl;




}
