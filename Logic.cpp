//OPERATOR LOGIKA

#include<iostream>      //operator logika
using namespace std;   //not = kebalikan
bool output1, output2, output3, output4;           //and = 
int main(){
    output1 = 2 == 2;
    output2 = !(2 == 1);           // not
    output3 = (2 < 4) & (5 > 3);   // and
    output4 = (2 < 1) || (2 > 3);  // or
    
    
    cout<< output1 <<endl;
    cout<< output2 <<endl;
    cout<< output3 <<endl;
    cout<< output4 <<endl;
}
