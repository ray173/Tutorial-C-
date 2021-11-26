#include <iostream>

using namespace std;

double hitung_luas(double p, double l){
	double luas = p * l;
	return luas;
}

double hitung_keliling(double p, double l){
	double keliling = 2 * (p + l);
	return keliling;
}

void tampilkan_luas(double p, double l){
	cout<<"Menggunakan void"<<endl;
	cout<<"luasnya adalah : ";
	cout<< hitung_luas(p,l) <<endl;
}

void tampilan_keliling(double p, double l){
	cout<<"menampilkan void"<<endl;
	cout<<"Luasnya adalah : ";
	cout<<hitung_keliling(p,l)<<endl;
}


int main(){

	double panjang, lebar;
	cout<<"panjang : ";
	cin>>panjang;
	cout<<"lebar : ";
	cin>>lebar;

	tampilkan_luas(panjang, lebar);
	tampilan_keliling(panjang, lebar);
}
