#include <iostream>

using namespace std;

double hitung_luas(double p, double l);
void println(double x);

int main(){
	
	double panjang, lebar, luas;
	cout<<"Panjang : ";
	cin>>panjang;
	cout<<"Lebar : ";
	cin>>lebar;

	luas = hitung_luas(panjang, lebar);

	println(luas);
}

double hitung_luas(double p, double l){
	return p*l;
}

void println(double x){
	cout<<"hasil : "<< x <<endl;
}
