#include<iostream>
using namespace std;



int main(){
    int x = 100;

    int *ptrX;
    ptrX = &x;

    int y = *ptrX;
    
    cout<<"nilai x : " << x << " alamat x = " <<&x<<endl;
    cout<<"nilai ptrX = " << &x <<endl;
    cout<<"nilai yang ditunjuk ptrX = " << *ptrX << endl;
    cout<<"nilai y = "<< y << endl;
    cout<<endl << endl << endl;
}
