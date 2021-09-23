//OPERATOR KONDITIONAL

#include<iostream>
using namespace std;

int main(){
   int a, b;
    bool result;
    cout<<"Input score :";
    cin>>a;
    
    b = 59;
    result = a > b;
    string konditional = result == 1 ?"Graduated":"No Graduated";
    cout<<"result = " << konditional <<endl;
}
