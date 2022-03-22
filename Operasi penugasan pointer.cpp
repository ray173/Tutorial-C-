#include<iostream>
using namespace std;
int main(){

int a = 41, b = 53, t;
    int *p, *q;

    p = &a;
    q = &b;

    t = *p;

    *q = 25;
    *p = *q;
    p = q;

    cout<<"nilai yang ditunjuk p = " << *p <<endl;
    cout<<"nilai yang ditunjuk q = "<< *q << endl;
}
