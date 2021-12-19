#include <iostream>
using namespace std;
int main(){
	string a[2][3];

	for(int i=0; i<=1; i++){
		for(int j=0; j<=2;j++){
			if(j==0){
				cout<<"Nama Mahasiswa : ";
				cin>>a[i][j];	
			}
			if(j=1){
				cout<<"Nilai UTS : ";
				cin>>a[i][j];
			}
			if(j=2){
				cout<<"Nilai UAS : ";
				cin>>a[i][j];	
			}
			
		}
	}

	cout<<"\nNama\tUTS\tUAS";
	for(int i=0; i<=1; i++){
		cout<<endl;
		for(int j=0; j<=2; j++){
			cout<<a[i][j]<<"  ";
		}
	}
}
