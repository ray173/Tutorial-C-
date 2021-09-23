//MENCARI PERSAMAAN 

#include<iostream>
using namespace std;

int main(){
    int x, y;
    bool konditional;
    string result;
    cout<<"Input the first number :";
    cin>>x;
    cout<<"Input the second number : ";
    cin>>y;

    konditional = x == y;
    result = konditional == 1 ?" Same as ":" Not the same ";
    cout<<"number "<< x << result <<"number "<< y <<endl;
}
