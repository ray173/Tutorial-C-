#include <iostream>
#include <ctime>
using namespace std;

int main(){
  time_t now = time(0);
  tm *ltm = localtime(&now);

  long saldo = 0, jmltf, pilih;
  int setor, tarik;
  char lanjut;
  string user, pin, nomor_tujuan, no_rek;
  exit:
  
  system("cls");

  login:
  cout<<"BANK BCT"<<endl;
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
      goto login;    }
  }else{
    system("cls");
    goto login;
    
  }
  system("cls");

  do{

  
  home:
  cout<<endl;
  cout <<"                     "<< ltm->tm_hour << ":";
  cout << ltm->tm_min << ":";
  cout << ltm->tm_sec << endl;
  cout<<"                   "<< ltm->tm_mday <<"/"<< 1 + ltm->tm_mon <<"/"<< 1900 + ltm->tm_year << endl;
  
  cout<<endl;

  cout<<"================================================"<<endl;
  cout<<"||                                            ||"<<endl;
  cout<<"||  1.Cek Saldo            4.Transfer         ||"<<endl;
  cout<<"||  2.Setor Tunai          5.Dompet Digital   ||"<<endl;
  cout<<"||  3.Penarikan            6.Exit             ||"<<endl;
  cout<<"||                                            ||"<<endl;
  cout<<"================================================"<<endl;

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

    case 4:
    cout<<"Masukkan nomor rekening : ";
    cin>>no_rek;

    if(no_rek == "081354265928"){           //input nomor rekening masing-masing
      cout<<"Masukkan Jumlah Transfer : Rp.";
      cin>>jmltf;
      if(jmltf > saldo){
        cout<<"Maaf saldo anda tidak cukup"<<endl;
        cout<<endl;
        goto transfer_again;
      }else{
        saldo -= jmltf;
        cout<<endl;
        cout<<"Transfer senilai Rp."<< jmltf<<" berhasil"<<endl;
        cout<<"Saldo saat ini Rp."<< saldo<<endl;
      }
      goto transfer_again;

    }else{
      cout<<"Nomor rekening tidak ditemukan!"<<endl;
      goto transfer_again;
    }
    break;


    case 5:

    cout<<"######################"<<endl;
    cout<<"|     1.Gopay        |"<<endl;
    cout<<"|     Coming Soon    |"<<endl;
    cout<<"|     Coming Soon    |"<<endl;
    cout<<"|     Coming Soon    |"<<endl;
    cout<<"######################"<<endl;

    cout<<endl;

    cout<<"Pilih : ";
    cin>>pilih;

    system("cls");

    long nominal;

    if(pilih == 1){
      cout<<"Masukkan nomor tujuan"<<endl;
      cout<<"(+62) : ";
      cin>>nomor_tujuan;
      system("cls");
      if(nomor_tujuan == "81354265928"){
        cout<<"Nominal : ";
        cin>>nominal;
        if(nominal > saldo){
          cout<<"Maaf saldo tidak cukup"<<endl;
          goto transfer_again;
        }else{
          saldo -= nominal;
          cout<<endl;
          cout<<"Top Up sebesar Rp."<<nominal<<" Berhasil"<<endl;
          cout<<endl;
          cout<<"Sisa Saldo Anda Rp."<< saldo <<endl;
          goto transfer_again;

        }
      }else{
        cout<<"Maaf nomor tidak ditemukan"<<endl;
        goto transfer_again;
      }
    }else{
      cout<<"Pilihan salah"<<endl;
      goto transfer_again;
    }
    break;

    transfer_again:
    case 6:
    cout<<endl;
    cout<<"Transaksi Lagi? (y/n) : ";
    cin>>lanjut;

      system("cls"); 

    if(lanjut == 'n'){
      
      goto exit;
      
    }else if(lanjut == 'y'){
      cek_pin:
      cout<<"PIN : ";
      cin>>pin;

      if(pin == "123123"){
        system("cls");
        goto home;
      }else{
        system("cls");
        goto cek_pin;
        

      }

    }else{
      system("cls");
      goto cek_pin;
     
    }
    break;

    default:
    cout<<"Pilihan tidak sesuai"<<endl;
  break;
  }
  }while(pilih !=999999999999999999);
}
