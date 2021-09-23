//FIND LARGE AREA OF THE CIRCLE

#include<iostream>
using namespace std;
int main(){
    const float phi = 3.14;
    float L, r;
    
    cout<<"Input radius square :";
    cin>>r;
    
    L = phi * r * r;
    cout<<"large of circle by "<< r << " cm"<< " is "<< L << " cm"<<endl;
}
