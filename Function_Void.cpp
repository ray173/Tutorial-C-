#include <iostream>

using namespace std;

int kuadrat (int x){
	int y;
	y = x*x;
	return y;

}

	void tampilkan(int input){
	cout<<"menampilkan dengan input"<<endl;
	cout<< input <<endl;
}


int main(){

	int input, hasil;	

	cout<<"hasil dari kuadrat : ";
	cin>>input;

	hasil = kuadrat(input);
	tampilkan(hasil);







}
