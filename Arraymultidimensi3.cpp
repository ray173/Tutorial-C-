#include <iostream>
using namespace std;
int main(){
	
	
	int a[2][3];

	for(int i = 0; i<=1; i++){
		for(int j = 0; j<=2; j++){
			cout<<"inputkan nilai index ke-["<<i<<"]["<<j<<"]: ";
			cin>>a[i][j];
		}
	}	


	
	//mencetak isi array

	for(int i = 0; i<=1; i++){
		for(int j = 0; j<=2; j++){
			cout<<"Nilai index ke-["<<i<<"]["<<j<<"]: "<<a[i][j]<<endl;		
		}
	}

}
