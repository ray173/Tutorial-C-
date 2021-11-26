#include <iostream>

using namespace std;

int kuadrat (int x){
	int y;
	y = x*x;
	return y;

}

int tambah(int a, int b){
	int c;
	c = a + b;

	return c;
}


int kurang(int a1, int b1){
	int c1;
	c1= a1-b1;
	return c1;

}

int main(){

	int input, hasil, a, b, hasil2, a1, b1, hasil3;

	cout<<"hasil dari kuadrat : ";
	cin>>input;

	hasil = kuadrat(input);
	cout<< hasil <<endl;


	cout<<"============================"<<endl;

	cout<<"masukkan nilai pertama : ";
	cin>>a;
	cout<<"masukkan nilai pertama : ";
	cin>>b;

	hasil2 = tambah(a,b);
	cout<<hasil2<<endl;


	cout<<"============================"<<endl;

	cout<<"masukkan nilai pertama : ";
	cin>>a1;
	cout<<"masukkan nilai pertama : ";
	cin>>b1;

	hasil3 = kurang(a1,b1);
	cout<<hasil3<<endl;





}
