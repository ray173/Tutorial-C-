#include <iostream>
using namespace std;
int main(){
	int n;

	cout<<"input banyak nilai : ";
	cin>>n;

	int nilai[n];


	for(int i = 0; i<n; i++){
		cout<<"inputkan nilai ke-"<< i+1<<": ";
		cin>>nilai[i];
	}

	for(int i = 0; i<n; i++){
		cout<<"nilai ke-"<< i+1 <<":" <<nilai [i] <<endl;
	}
}
