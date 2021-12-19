#include <iostream>
using namespace std;
int main(){
	
	
	int a[2][3];
	int b[2][3];

	for(int i = 0; i<=1; i++){
		for(int j = 0; j<=2; j++){
			cout<<"inputkan nilai matrix A ["<<i<<"]["<<j<<"]: ";
			cin>>a[i][j];
		}
	}	

	for(int i = 0; i<=1; i++){
		for(int j = 0; j<=2; j++){
			cout<<"inputkan nilai matrix B ["<<i<<"]["<<j<<"]: ";
			cin>>b[i][j];
		}
	}

	cout<<endl;
	//mencetak isi array
	cout<<"matrix A";


	for(int i = 0; i<=1; i++){
		cout<<endl;
		for(int j = 0; j<=2; j++){
			cout<<a[i][j]<<" ";		
		}
	}
	cout<<endl;
	cout<<"matrix B";
	

	for(int i = 0; i<=1; i++){
		cout<<endl;
		for(int j = 0; j<=2; j++){
			cout<<b[i][j]<<" ";		
		}
	}
	cout<<endl;

	cout<<"Hasil penjumlahan matrix A dan matrix B"<<endl;
	

	for(int i = 0; i<=1; i++){
		cout<<endl;
		for(int j = 0; j<=2; j++){
			cout<<a[i][j]+b[i][j]<<" ";		
		}
	}
}
