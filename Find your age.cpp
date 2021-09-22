//FIND UR AGE

#include<iostream>
using namespace std;
int main(){

    int this_years, years_born, age;

    cout<<"What year rihgt now? :";
    cin>>this_years;

    cout<<"When you born in years? :";
    cin>>years_born;

    age = this_years - years_born;
    cout<<"Your age is "<< age <<endl;
}
