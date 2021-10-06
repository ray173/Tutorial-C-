#include<iostream>
using namespace std;
int main(){
    for(int i=0; i<=10; i++){
        if(i==4){
            continue;
            //break;         atau pakai break;
        }
        cout<< i << endl;
    }
    cout<<"selesai"<<endl;
    cin.get();
    return 0;
}
