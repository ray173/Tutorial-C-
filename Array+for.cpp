#include <iostream>
using namespace std;
int main(){
	int n;
	int jumlah = 0, terkecil, terbesar;
	cout<<"input banyak nilai : ";
	cin>>n;

	int nilai[n];


	for(int i = 0; i<n; i++){
		cout<<"inputkan nilai ke-"<< i+1<<": ";
		cin>>nilai[i];
		jumlah = jumlah + nilai[i];

		if(i==0){
			terkecil = nilai[0];
			terbesar = nilai[0];
		}
		if(nilai[i] < terkecil){
			terkecil = nilai[i];
		}

		if(nilai[i] > terbesar){
			terbesar = nilai[i];
		}

	}

	for(int i = 0; i<n; i++){
		cout<<"nilai ke-"<< i+1 <<": " << nilai[i] <<endl;
		
	}
	cout<<"jumlah nilai adalah : "<< jumlah<<endl;
	cout<<"nilai terbesar adalah : "<<terbesar<<endl;
	cout<<"nilai terkecil adalah : "<<terkecil<<endl;
}
