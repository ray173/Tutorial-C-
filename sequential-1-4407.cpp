#include<iostream>
using namespace std;
int main(){
	int nilai[] = {10,30,50,20,40,60,70,100,9,99,95,80};
	
		int jumlahElemenArray = sizeof(nilai) / sizeof(int);
		cout<<"data nilai : "<<endl;
		for(int index = 0; index <jumlahElemenArray; index++){
		cout<<nilai[index]<<" ";
		
		}
		cout<<endl;
		int cari = 0;
	
		cout<<"masukkan nilai yg kamu cari  : "; cin>>cari;
		bool isKetemu = false;
		
		int index;
		for(index = 0; index < jumlahElemenArray; index++){
			if(cari == nilai[index]){
				isKetemu = true;
				break;
				
			}
		}	
		cout<<endl;
		if(isKetemu){
			cout<<"data ditemukan pada index ke-"<<index<<endl;
		}else{
			cout<<"data tidak ditemukan"<<endl;
		}
}
