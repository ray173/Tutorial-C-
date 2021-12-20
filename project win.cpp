#include <iostream>
using namespace std;

int main(){
	long saldo = 0, jmltf;
	int setor, tarik, pilih_DD;
	long pilih;
	char lanjut;
	exit:
	string user, pin;
	
	system("cls");

	login:
	cout<<"===Selamat datang di ATM ngga jelas ini :D==="<<endl;
	cout<<endl;
	cout<<"Username : ";
	cin>>user;
	
	
	if(user=="sihab"){
		cout<<"PIN\t : ";
		cin>>pin;
		if(pin=="123123"){
			cout<<"Login sukses"<<endl;
		}else{
			system("cls");
			goto login;
		}
	}else{
		system("cls");
		goto login;
		
	}
	system("cls");

	do{

	

	cout<<endl;	
	cout<<"==============MENU=============="<<endl;
	cout<<"1.Cek Saldo"<<endl;
	cout<<"2.Setor Tunai"<<endl;
	cout<<"3.Penarikan"<<endl;
	cout<<"4.Transfer"<<endl;
	cout<<"5.Dompet Digital"<<endl;
	cout<<"6.Exit"<<endl;

	cout<<"================================"<<endl;
	cout<<endl;

	cout<<"pilihan : ";
	cin>>pilih;

	cout<<endl;
	system("cls");
	

	switch(pilih){
		case 1:
		cout<<"Sisa Saldo Rp."<< saldo<<endl;
		goto transfer_again;

		break;

		case 2:
		cout<<"Jumlah Deposit Rp.";
			long jmlsetor;
			cin>>jmlsetor;
			saldo += jmlsetor;

			cout<<endl;

			cout<<"Deposit berhasil"<<endl;
			cout<<endl;
			cout<<"Saldo saat ini Rp."<<saldo<<endl;
			goto transfer_again;

		break;

		case 3:
		cout<<"Jumlah Penarikan : Rp.";
			long jmltarik;
			cin>>jmltarik;
			if(jmltarik <= saldo){
				saldo -= jmltarik;
				cout<<endl;
				cout<<"=================================="<<endl;
				cout<<"Penarikan sebesar Rp."<<jmltarik<<" berhasil"<<endl;
				cout<<"=================================="<<endl;
				cout<<endl;
				cout<<"Saldo saat ini Rp."<<saldo<<endl;
				goto transfer_again;
			}else{
				cout<<endl;
				cout<<"Maaf saldo anda tidak cukup"<<endl;
				goto transfer_again;
			}

		break;

		tf:
		case 4:
		long no_rek;
		cout<<"Masukkan nomor rekening : ";
		cin>>no_rek;

		if(no_rek == 12345){           //input nomor rekening masing-masing
			cout<<"Masukkan Jumlah Transfer : Rp.";
			cin>>jmltf;
			if(jmltf > saldo){
				cout<<"Maaf saldo anda tidak cukup"<<endl;
				cout<<endl;
			}else{
				saldo -= jmltf;
				cout<<endl;
				cout<<"Transfer senilai Rp."<< jmltf<<" berhasil"<<endl;		//nomor rekening : 12345, 123456, 123321, 654321, 111111
				cout<<"Saldo saat ini Rp."<< saldo<<endl;
			}

		}else if(no_rek == 123456){
			cout<<"Masukkan Jumlah Transfer : Rp.";
			cin>>jmltf;
			if(jmltf > saldo){
				cout<<"Maaf saldo anda tidak cukup"<<endl;
				cout<<endl;
			}else{
				saldo -= jmltf;
				cout<<endl;
				cout<<"Transfer senilai Rp."<< jmltf<<" berhasil"<<endl;
				cout<<"Saldo saat ini Rp."<< saldo<<endl;
			}
		}else if(no_rek == 123321){
			cout<<"Masukkan Jumlah Transfer : Rp.";
			cin>>jmltf;
			if(jmltf > saldo){
				cout<<"Maaf saldo anda tidak cukup"<<endl;
				cout<<endl;
			}else{
				saldo -= jmltf;
				cout<<endl;
				cout<<"Transfer senilai Rp."<< jmltf<<" berhasil"<<endl;
				cout<<"Saldo saat ini Rp."<< saldo<<endl;
			}
		}else if(no_rek == 654321){
			cout<<"Masukkan Jumlah Transfer : Rp.";
			cin>>jmltf;
			if(jmltf > saldo){
				cout<<"Maaf saldo anda tidak cukup"<<endl;
				cout<<endl;
			}else{
				saldo -= jmltf;
				cout<<endl;
				cout<<"Transfer senilai Rp."<< jmltf<<" berhasil"<<endl;
				cout<<"Saldo saat ini Rp."<< saldo<<endl;
			}
		}else if(no_rek == 111111){
			cout<<"Masukkan Jumlah Transfer : Rp.";
			cin>>jmltf;
			if(jmltf > saldo){
				cout<<"Maaf saldo anda tidak cukup"<<endl;
				cout<<endl;
			}else{
				saldo -= jmltf;
				cout<<endl;
				cout<<"Transfer senilai Rp."<< jmltf<<" berhasil"<<endl;
				cout<<"Saldo saat ini Rp."<< saldo<<endl;
			}
		}else{
			cout<<endl;
			cout<<"Nomor rekening tidak di temukan"<<endl;
			cout<<endl;
			goto transfer_again;
		}
		break;

		case 5:
		cout<<"1.Gopay"<<endl;
		cout<<"2.OVO"<<endl;
		cout<<"3.ShopeePay"<<endl;
		cout<<"4.DANA"<<endl;

		cout<<"Pilih : ";
		cin>>pilih_DD;

		system("cls");

		long nominal, nomor_tujuan;

		if(pilih_DD == 1){
			cout<<"Masukkan nomor tujuan";				//nomor tujuan : 12345, 123456, 123321, 654321, 111111
			cout<<"(+62): ";
			cin>>nomor_tujuan;
			if(nomor_tujuan == 12345){
				cout<<"Nominal : ";
				cin>>nominal;
				if(nominal <= saldo){
					saldo -= nominal;

					cout<<endl;

					cout<<"Top Up sebesar Rp."<<nominal<<" Berhasil"<<endl;
					cout<<endl;
					cout<<"Sisa Saldo Anda Rp."<< saldo <<endl;

				}else{
					cout<<"Maaf saldo anda tidak cukup"<<endl;
				}
			}else if(nomor_tujuan == 123456){
				cout<<"Nominal : ";
				cin>>nominal;
				if(nominal <= saldo){
					saldo -= nominal;

					cout<<endl;

					cout<<"Top Up sebesar Rp."<<nominal<<" Berhasil"<<endl;
					cout<<endl;
					cout<<"Sisa Saldo Anda Rp."<< saldo <<endl;

				}else{
					cout<<"Maaf saldo anda tidak cukup"<<endl;
				}
			}else if(nomor_tujuan == 123321){
				cout<<"Nominal : ";
				cin>>nominal;
				if(nominal <= saldo){
					saldo -= nominal;

					cout<<endl;

					cout<<"Top Up sebesar Rp."<<nominal<<" Berhasil"<<endl;
					cout<<endl;
					cout<<"Sisa Saldo Anda Rp."<< saldo <<endl;

				}else{
					cout<<"Maaf saldo anda tidak cukup"<<endl;
				}
			}else if(nomor_tujuan == 654321){
				cout<<"Nominal : ";
				cin>>nominal;
				if(nominal <= saldo){
					saldo -= nominal;

					cout<<endl;

					cout<<"Top Up sebesar Rp."<<nominal<<" Berhasil"<<endl;
					cout<<endl;
					cout<<"Sisa Saldo Anda Rp."<< saldo <<endl;

				}else{
					cout<<"Maaf saldo anda tidak cukup"<<endl;
				}
			}else if(nomor_tujuan == 12345){
				cout<<"Nominal : ";
				cin>>nominal;
				if(nominal <= saldo){
					saldo -= nominal;

					cout<<endl;

					cout<<"Top Up sebesar Rp."<<nominal<<" Berhasil"<<endl;
					cout<<endl;
					cout<<"Sisa Saldo Anda Rp."<< saldo <<endl;

				}else{
					cout<<"Maaf saldo anda tidak cukup"<<endl;
				}
			}else if(nomor_tujuan == 111111){
				cout<<"Nominal : ";
				cin>>nominal;
				if(nominal <= saldo){
					saldo -= nominal;

					cout<<endl;

					cout<<"Top Up sebesar Rp."<<nominal<<" Berhasil"<<endl;
					cout<<endl;
					cout<<"Sisa Saldo Anda Rp."<< saldo <<endl;

				}else{
					cout<<"Maaf saldo anda tidak cukup"<<endl;
				}
			}else{
				cout<<"Maaf nomor tidak ditemukan"<<endl;
			}
		}
		
		transfer_again:
		case 6:
		cout<<endl;
		cout<<"Transaksi Lagi? (y/n) ";
		cin>>lanjut;
		if(lanjut == 'n' || 'y'){
			system("cls");
			goto login;
		}
		break;


		default:
	 
		break;
	}

	}while(pilih !=999999999999999999);


}
