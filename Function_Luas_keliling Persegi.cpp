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



int main(){

	double panjang, lebar;
	cout<<"panjang : ";
	cin>>panjang;
	cout<<"lebar : ";
	cin>>lebar;

	cout<<"luasnya adallah : ";
	cout<<hitung_luas(panjang, lebar)<<endl;
	cout<<"kelilingnya adalah :";
	cout<<hitung_keliling(panjang, lebar)<<endl;

}
