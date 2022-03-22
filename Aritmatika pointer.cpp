#include<iostream>
using namespace std;

int main(){
   int umur[] = {10,11,12};

   int *ptrUmur = umur;

   cout<<"alamat[0] = " <<&umur[0]<<endl;
   cout<<"alamat[1] = " <<&umur[1]<<endl;
   cout<<"alamat[2] = " <<&umur[2]<<endl;

   cout<<"nilai ptrUmur = " << *ptrUmur;
   cout <<" ada di alamat " << ptrUmur << endl;

   ptrUmur += 2;
   cout<<"nilai ptrUmur = "<< *ptrUmur << " ada di alamat " << ptrUmur << endl;

   ptrUmur -=1;
   cout<<"nilai ptrUmur = "<< *ptrUmur << " ada di alamat " << ptrUmur << endl;



}
