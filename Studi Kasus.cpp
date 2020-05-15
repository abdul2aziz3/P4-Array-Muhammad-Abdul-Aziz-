#include<iostream> //berguna sebagai standar input output
#include<unistd.h> //untuk Fungsi Sleep

using namespace std;

int develop_data(){   
	cout<<"Muhammad Abdul Aziz\n"; // Fungsi Data Praktikan
	cout<<"F1B019095\n";
	cout<<"KELOMPOK 20\n";
	cout<<"============================================\n";
	cout<<"             Program Aplikasi Gojek\n";
	cout<<"============================================\n\n";
}

int tagihan(){
cout << "\n|==================================|\n";
cout << "|         Pembayaran GOJEK         |\n";
cout << "|==================================|";
}

void keluar()
{
 cout<<"\n========================================"<<endl;
 cout<<"\n============ Kelompok 20 ==============="<<endl;
 cout<<"\n============== TERIMA KASIH ============"<<endl;
 cout<<"\n==== Sudah menggunakan layanan kami ===="<<endl;
 cout<<"\n========================================"<<endl;
}

 main() {    

   develop_data();
   
    //Deklarasi login
	string NIM = "F1B019095";
	string pw = "F1B019095";
	string NIM_in;
	string pw_in;
	int login;
	
	//Deklarasi Operasi Hitung
	int client;
	int gps;
	int total;
	int total1;
	string tujuan, jemput;
	int jarak;
	int bayar;
	int diskon;
	int akhir;
	int saldo=1000000;
	int berat;
	int bayarb;
	int bayarc;
	int totalcar;
	int bayarp;
	int bayarj;
	int topup;
	
	
	//Deklarasi Makanan tarif
	int food;
	const int food1 = 20000;
	const int food2 = 35000;
	const int food3 = 15000;
	
	//Deklarasi Opsi Menu
    int pilihmenu;
    int layanan;
    int konfirmasi;
    
    //Tarif Ojek
    int tarif_orang_ride = 7000;
    int tarif_jarak_ride = 5000;
    int tarif_orang_car = 25000;
	int tarif_jarak_car = 15000;
	int tarif_jarak_food = 5000;
	int tarif_jarak_send = 5000;
	int tarif_berat_send = 3500;


   cout << "Pilih Bahasa\n";  
   cout << "1.Bahasa Indonesia\n" ;
   cout << "2.English\n";
   cout << "1/2 :\n" ; cin>>pilihmenu; 
   switch(pilihmenu)
   { case 1:
   		system("cls");      
   		cobalagi:
        cout << "=====Login=====\n";
		cout << "Masukkan NIM anda : "; cin >> NIM_in;
		cout << "\nMasukkan Password anda : "; cin >> pw_in; 
        if (NIM_in == NIM && pw_in == pw)
		{    
		menuutama:
    	system("cls");        
       	cout << "=======Menu Utama======\n" << endl;            
       	cout << "     Pelayanan Gojek      " << endl;            
       	cout << "=======================\n\n";  
		cout << " Saldo Go Pay Anda = Rp. "<<saldo; //TAMBAHAN  
		cout << " \n\n1.  Go Ride" << endl; 
		cout << " \n\n2.  Go Car" << endl; 
		cout << " \n\n3.  Go Food" << endl;  
		cout << " \n\n4.  Go Send" << endl; 
		cout << " \n\n5.  Go Pay Top UP" << endl;
		cout << " \n\n6.  Keluar"<<endl; 
     	cout << " \n\nMasukan Pilihan =  "; cin>>layanan;
     		switch(layanan)
     		{
     		case 1 : 																														//GO RIDE
				 system("cls"); 
     				cout << "     Lakukan Pemesanan Go Ride\n";
     				cout << "================================\n\n"; 
     				cout << "\nTarif Go Ride"<<endl<<"Rp. "<<tarif_jarak_ride<<"/km"<<endl<<"Rp. "<<tarif_orang_ride<<"/org"<<endl;
					cout << "\nHidupkan GPS Anda Agar Pengemudi Dapat Menemukan Anda \n";
					cout << "1.YA / 2.TIDAK : \n"; cin>>gps;
					switch(gps){
						case 1 :
							cout<<"\nGPS Anda Segera Dihidupkan...";
							sleep(3);
							cout<<" \nBerhasil Dihidupkan...";
							cout << "\n\n\nMASUKAN TUJUAN ANDA : ";
		                    cin>>tujuan;
		                    cout << "\nJumlah Penumpang : ";
		                    cin >> client;
		                    bayarp=client*tarif_orang_ride;
		                    cout << "\nJARAK : ";
	                       	cin>>jarak;
	                       	//Hitung
		                    bayarj=tarif_jarak_ride*jarak;
		                    bayar=bayarj+bayarp;
		                    
		                    
		                    if ((bayar>=100000)){
		                    //Hitung
                            diskon=bayar*0.05; // 0.05 -> 0.95 -> 95% Diskon 
                            akhir=diskon;
                            
                            cout<<endl<<"\nSelamat Anda Mendapatkan Diskon 95%"<<endl;
                            
			                        	tagihan();
			                            cout<<"\nBiaya Jarak Tempuh       = "<<bayarj<<endl;
			                            cout<<"Biaya Jumlah Penumpang   = "<<bayarp<<endl;
			                            cout<<"Diskon                   = 95%"<<endl;
			                            cout<<"===================================="<<endl;
			                            cout<<"Total Pembayaran         = "<<akhir<<endl;
                            }else {
                            	
                            akhir=bayar;
			                            tagihan();
			                            cout<<"\nBiaya Jarak Tempuh       = "<<bayarj<<endl;
			                            cout<<"Biaya Jumlah Penumpang   = "<<bayarp<<endl;
			                            cout<<"Diskon                   = 0%"<<endl;
			                            cout<<"===================================="<<endl;
			                            cout<<"Total Pembayaran         = "<<akhir<<endl;
                            }
                            saldo -= akhir;
		                    cout<<"\nSisa Saldo Anda = Rp.  "<<saldo<<endl;
							
							konfirmasi_ulang:
							cout<<"\n\nApakah Anda Ingin Menggunakan Layanan Kami Lagi?";
							cout<<"\n1.YA / 2.TIDAK : ";
							cin>>konfirmasi;
							if(konfirmasi==1 ){
								goto menuutama;
							}else if(konfirmasi==2 ){
								system("cls");
								keluar();
							}else{
								
								goto konfirmasi_ulang;
							}
							break;
							
						case 2 :
							system("cls");
							cout<<"\nAnda Harus Mengaktifkan GPS untuk menggunakan Layanan ini";
							cout<<"\nKembali Ke Menu Utama";
							sleep(3);
							goto menuutama;
							break;
						}
					break;
					 
				case 2 : 																												//GO CAR
				 system("cls"); 
     				cout << "     Lakukan Pemesanan Go Car\n";
     				cout << "================================\n\n"; 
     				cout << "\nTarif Go Car"<<endl<<"Rp. "<<tarif_jarak_car<<"/km"<<endl<<"Rp. "<<tarif_orang_car<<"/org"<<endl;
					cout << "\nLakukan Pemesanan Go Car \n";
					cout << "1. Ya / 2. Tidak\n"; cin>>gps;
					switch(gps){
						case 1 :
							cout<<"\nMASUKAN LOKASI JEMPUT : ";
							cin>>jemput;
							cout << "\nMASUKAN TUJUAN ANDA : ";
		                    cin>>tujuan;
		                    
							cout<<"\n\nMasukkan Jumlah Penumpang : ";//TAMABHAN TANPA GPS
							cin>>client;
		                    cout<<"\nJARAK : ";
	                       	cin>>jarak;
	                       	
	                       	bayarc=client*tarif_orang_car;
		                    bayarb=jarak*tarif_jarak_car;
		                    bayar=bayarb+bayarc;
		                    
		                    if ((bayar>=100000)){
                            diskon=bayar*0.05; // 0.05 -> 0.95 -> 95% Diskon 
                            akhir=diskon;
                            
                            cout<<endl<<"\nSelamat Anda Mendapatkan Diskon 95%"<<endl;
                            
			                        	tagihan();
			                            cout<<"\nBiaya Jarak Tempuh       = "<<bayarb<<endl;
			                            cout<<"Biaya Jumlah Penumpang   = "<<bayarc<<endl;
			                            cout<<"Diskon                   = 95%"<<endl;
			                            cout<<"===================================="<<endl;
			                            cout<<"Total Pembayaran         = "<<akhir<<endl;
                            }else {
                            akhir=bayar;
                            
			                        	tagihan();
			                            cout<<"\nBiaya Jarak Tempuh       = "<<bayarb<<endl;
			                            cout<<"Biaya Jumlah Penumpang   = "<<bayarc<<endl;
			                            cout<<"Diskon                   = 0%"<<endl;
			                            cout<<"===================================="<<endl;
			                            cout<<"Total Pembayaran         = "<<akhir<<endl;
                            }
                            saldo -= akhir;
		                    cout<<"\nSisa Saldo Anda =  Rp. "<<saldo<<endl;	
						
							cout<<"\n\nTunggu Pengemudi Di Lokasi Anda";
							
							konfirmasi_ulang1:
							cout<<"\n\nApakah Anda Ingin Menggunakan Layanan Kami Lagi?";
							cout<<"\n1.YA / 2.TIDAK : ";
							cin>>konfirmasi;
							if(konfirmasi==1 ){
								goto menuutama;
							}else if(konfirmasi==2 ){
								system("cls");
								keluar();
								break;
							}else{
								
								goto konfirmasi_ulang1;
							}
							goto menuutama;
							break;
							
						case 2 :
							cout<<"\nKembali Ke Menu Utama";
							sleep(2);
							goto menuutama;
							break;
						}
					break;
					
      			case 3: 																													// GO FOOD
      				system("cls"); 
     				cout << "     Lakukan Pemesanan Go Food\n";
     				cout << "================================\n\n"; 
					cout << "Hidupkan GPS Anda Agar Pengemudi Dapat Menemukan Anda \n";
					cout << "1 / 2\n"; cin>>gps;
					switch(gps){
						case 1 :
							system("cls"); 
     						cout << "     Lakukan Pemesanan Go Food\n";
     						cout << "================================\n\n"; 
							cout<<"\nGPS Anda Segera Dihidupkan...";
							sleep(3);
							cout<<"\nBerhasil Dihidupkan";
							system("cls"); 
     						cout << "     Lakukan Pemesanan Go Food\n";
     						cout << "================================\n\n"; 
							cout << "\n1. Nasi Padang ";
							cout << "\n2. Ayam Bakar ";
							cout << "\n3. Satu Bulayak "; 
							cout<<"\n\nPilih Pesanan Makanan Anda : ";cin>>food;
							switch(food){
								case 1:
									system("cls"); 
									cout <<"\n     Anda Memesan Nasi Padang";
									cout <<"\n================================\n\n";
									cout <<"\n   Harga Nasi Padang "<<"\n   ==================="<<"\n   Rp. "<<food1<<"/Bungkus";
									cout <<"\n\n     Tarif Go Food"<<"\n   ==================="<<"\n   Rp. "<<tarif_jarak_food<<"/km";
									
									cout << "\n\nMASUKAN TUJUAN ANDA : ";
		                            cin>>tujuan;
		                            cout << "\nJARAK : ";
	                            	cin>>jarak;
	                            	
	                            	bayarb=tarif_jarak_food*jarak;
		                            bayar=bayarb+food1;    
                                    
		                            if ((bayar>=100000)){
		                            diskon=bayar*0.05; // 0.05 -> 0.95 -> 95% Diskon 
		                            akhir=diskon;
		                            
		                            cout<<endl<<"\nSelamat Anda Mendapatkan Diskon 95%"<<endl;
		                            
					                        	tagihan();
					                            cout<<"\nNasi Padang              = "<<food1<<endl;
					                            cout<<"Biaya Antar              = "<<bayarb<<endl;
					                            cout<<"Diskon                   = 95%"<<endl;
					                            cout<<"===================================="<<endl;
					                            cout<<"Total Pembayaran         = "<<akhir<<endl;
                        
                                    }else {
                                    
		                            akhir=bayar;
		                            		                		                            
					                        	tagihan();
					                            cout<<"\nNasi Padang              = "<<food1<<endl;
					                            cout<<"Biaya Antar              = "<<bayarb<<endl;
					                            cout<<"Diskon                   = 0%"<<endl;
					                            cout<<"===================================="<<endl;
					                            cout<<"Total Pembayaran         = "<<akhir<<endl;
                                    }
                                    
                                    saldo -= akhir;                          
		                            cout<<"\nSisa Saldo Anda = Rp.  "<<saldo<<endl;
		                            
									cout <<"\nSilahkan Tunggu Konfirmasi dari Pengemudi.";
									cout <<"\n\nTerima Kasih.";
									
									konfirmasi_ulang2:
									cout<<"\n\nApakah Anda Ingin Menggunakan Layanan Kami Lagi?";
									cout<<"\n1.YA / 2.TIDAK : ";
									cin>>konfirmasi;
									if(konfirmasi==1 ){
										goto menuutama;
									}else if(konfirmasi==2 ){
										system("cls");
										keluar();
										break;
									}else{
										
										goto konfirmasi_ulang2;
									}
									goto menuutama;
								
									break;
								
								case 2:
									system("cls"); 
									cout <<"\n     Anda Memesan Ayam Bakar";
									cout <<"\n================================\n";
									cout <<"\n   Harga Ayam Bakar "<<"\n   ==================="<<"\n   Rp. "<<food2<<"/Bungkus";
									cout <<"\n\n     Tarif Go Food"<<"\n   ==================="<<"\n   Rp. "<<tarif_jarak_food<<"/km";
									
									cout << "\n\nMASUKAN TUJUAN ANDA : ";
		                            cin>>tujuan;
		                            cout << "\nJARAK : ";
	                            	cin>>jarak;
	                            	
		                            
	                            	bayarb=tarif_jarak_food*jarak;
		                            bayar=bayarb+food2;    
                                    
		                            if ((bayar>=100000)){
		                            diskon=bayar*0.05; // 0.05 -> 0.95 -> 95% Diskon 
		                            akhir=diskon;
		                            
		                            cout<<endl<<"\nSelamat Anda Mendapatkan Diskon 95%"<<endl;
		                            
					                        	tagihan();
					                            cout<<"\nAyam Bakar               = "<<food2<<endl;
					                            cout<<"Biaya Antar              = "<<bayarb<<endl;
					                            cout<<"Diskon                   = 95%"<<endl;
					                            cout<<"===================================="<<endl;
					                            cout<<"Total Pembayaran         = "<<akhir<<endl;
                        
                                    }else {
                                    
		                            akhir=bayar;
		                            		                		                            
					                        	tagihan();
					                            cout<<"\nAyam Bakar               = "<<food2<<endl;
					                            cout<<"Biaya Antar              = "<<bayarb<<endl;
					                            cout<<"Diskon                   = 0%"<<endl;
					                            cout<<"===================================="<<endl;
					                            cout<<"Total Pembayaran         = "<<akhir<<endl;
                                    }
                                    
                                    saldo -= akhir;                          
		                            cout<<"\nSisa Saldo Anda = Rp.  "<<saldo<<endl;
		                            
									cout <<"\nSilahkan Tunggu Konfirmasi dari Pengemudi.";
									cout <<"\n\nTerima Kasih.";
									
									konfirmasi_ulang3:
									cout<<"\n\nApakah Anda Ingin Menggunakan Layanan Kami Lagi?";
									cout<<"\n1.YA / 2.TIDAK : ";
									cin>>konfirmasi;
									if(konfirmasi==1 ){
										goto menuutama;
									}else if(konfirmasi==2 ){
										system("cls");
										keluar();
										break;
									}else{
										
										goto konfirmasi_ulang3;
									}
									goto menuutama;
									break;
									
								case 3:
									system("cls"); 
									cout <<"\n     Anda Memesan Sate Bulayak";
									cout <<"\n================================\n\n";
									cout <<"\n   Harga Sate Bulayak "<<"\n   ==================="<<"\n   Rp. "<<food3<<"/Bungkus";
									cout <<"\n\n     Tarif Go Food"<<"\n   ==================="<<"\n   Rp. "<<tarif_jarak_food<<"/km";
									
									cout << "\n\nMASUKAN TUJUAN ANDA : ";
		                            cin>>tujuan;
		                            cout << "\nJARAK : ";
	                            	cin>>jarak;
	                            	
		                            bayarb=tarif_jarak_food*jarak;
		                            bayar=bayarb+food3;    
                                    
		                            if ((bayar>=100000)){
		                            diskon=bayar*0.05; // 0.05 -> 0.95 -> 95% Diskon 
		                            akhir=diskon;
		                            
		                            cout<<endl<<"\nSelamat Anda Mendapatkan Diskon 95%"<<endl;
		                            
					                        	tagihan();
					                            cout<<"\nAyam Bakar               = "<<food3<<endl;
					                            cout<<"Biaya Antar              = "<<bayarb<<endl;
					                            cout<<"Diskon                   = 95%"<<endl;
					                            cout<<"===================================="<<endl;
					                            cout<<"Total Pembayaran         = "<<akhir<<endl;
                        
                                    }else {
                                    
		                            akhir=bayar;
		                            		                		                            
					                        	tagihan();
					                            cout<<"\nAyam Bakar               = "<<food3<<endl;
					                            cout<<"Biaya Antar              = "<<bayarb<<endl;
					                            cout<<"Diskon                   = 0%"<<endl;
					                            cout<<"===================================="<<endl;
					                            cout<<"Total Pembayaran         = "<<akhir<<endl;
                                    }
                                    
                                    saldo -= akhir;                          
		                            cout<<"\nSisa Saldo Anda = Rp.  "<<saldo<<endl;
		                            
									cout <<"\nSilahkan Tunggu Konfirmasi dari Pengemudi.";
									cout <<"\n\nTerima Kasih.";
									
									konfirmasi_ulang4:
									cout<<"\n\nApakah Anda Ingin Menggunakan Layanan Kami Lagi?";
									cout<<"\n1.YA / 2.TIDAK : ";
									cin>>konfirmasi;
									if(konfirmasi==1 ){
										goto menuutama;
									}else if(konfirmasi==2 ){
										system("cls");
										keluar();
										break;
									}else{
										
										goto konfirmasi_ulang4;
									}
									goto menuutama;
									
									break;
							}
							
							
						case 2 :
							cout<<"\nAnda Harus Mengaktifkan GPS untuk menggunakan Layanan ini";
							cout<<"\nKembali Ke Menu Utama";
							sleep(3);
							goto menuutama;
							break;
					
						}
					
					break;	
    	     	
    	     	
    	     	case 4 : 																												//GO SEND
				 system("cls"); 
     				cout << "     Lakukan Pemesanan Go Send\n";
     				cout << "================================\n\n"; 
     				cout << "\nTarif Go Send"<<endl<<"Biaya Jarak Pengiriman Rp. "<<tarif_jarak_send<<"/km"<<endl<<"Biaya per Berat Paket Kiriman Rp. "<<tarif_berat_send<<"/kg"<<endl;
					cout << "\nHidupkan GPS Anda Agar Pengemudi Dapat Menemukan Anda \n";
					cout << "1 / 2\n"; cin>>gps;
					switch(gps){
						case 1 :
							cout<<"\nGPS Anda Segera Dihidupkan...";
							sleep(3);
							cout<<"\nBerhasil Dihidupkan";
							
							cout << "\n\n\nMASUKAN TUJUAN PAKET : ";
		                    cin>>tujuan;
		                    cout << "\nMASUKKAN LOKASI JEMPUT PAKET : ";
		                    cin>>jemput;
		                    
		                    cout << "\nJarak : ";
		                    cin >> jarak;
		                    cout << "\nBerat Paket : ";
		                    cin >> berat;
		                  
	                       	//Hitung
	                       	bayarp=berat*tarif_berat_send;
		                    bayarj=tarif_jarak_send*jarak;
		                    bayar=bayarj+bayarp;
		                    
		                    
		                    if ((bayar>=100000)){
		                    //Hitung
                            diskon=bayar*0.05; // 0.05 -> 0.95 -> 95% Diskon 
                            akhir=diskon;
                            
                            cout<<endl<<"\nSelamat Anda Mendapatkan Diskon 95%"<<endl;
                            
			                        	tagihan();
			                            cout<<"\nBiaya Jarak Pengantaran  = "<<bayarj<<endl;
			                            cout<<"Berat Paket Kiriman      = "<<bayarp<<endl;
			                            cout<<"Diskon                   = 95%"<<endl;
			                            cout<<"===================================="<<endl;
			                            cout<<"Total Pembayaran         = "<<akhir<<endl;
                            }else {
                            	
                            akhir=bayar;
			                            tagihan();
			                            cout<<"\nBiaya Jarak Pengantaran  = "<<bayarj<<endl;
			                            cout<<"Berat Paket Kiriman      = "<<bayarp<<endl;
			                            cout<<"Diskon                   = 0%"<<endl;
			                            cout<<"===================================="<<endl;
			                            cout<<"Total Pembayaran         = "<<akhir<<endl;
                            }
                            saldo -= akhir;
		                    cout<<"\nSisa Saldo Anda = Rp.  "<<saldo<<endl;
							
							konfirmasi_ulang6:
							cout<<"\n\nApakah Anda Ingin Menggunakan Layanan Kami Lagi?";
							cout<<"\n1.YA / 2.TIDAK : ";
							cin>>konfirmasi;
							if(konfirmasi==1 ){
								goto menuutama;
							}else if(konfirmasi==2 ){
								system("cls");
								keluar();
								break;
							}else{
								
								goto konfirmasi_ulang6;
							}
							break;
							
						case 2 :
							cout<<"\nAnda Harus Mengaktifkan GPS untuk menggunakan Layanan ini";
							cout<<"\nKembali Ke Menu Utama";
							sleep(3);
							goto menuutama;
							break;
					
						}
					
					break;
					
				case 5: 
					system("cls");
						cout <<"\nTop Up Saldo Go Pay";
						cout <<"\n===========================";
						cout <<"\n\nMasukkan Nominal : Rp. ";cin>>topup;
						saldo += topup;
						cout <<"\n===========================";
						cout <<"\nSaldo Anda Saat Ini = Rp. "<<saldo;
						cout <<"\nTerima Kasih Telah Melakukan Top Up Saldo Go Pay.";
				sleep(5);
				goto menuutama;
				break;
    	     	
    	     	case 6:
    	     		system("cls"); 
    	     		cout << "Saldo Akhir Anda Rp. "<<saldo<<endl;
    	     		keluar();
    	     		
		} // Tutup Menu Utama
           
      		
    return 0;

  case 2 : system("cls");
		cout << "SORRY STILL UNDER DEVELOPMENT"	;
		break;	

   }else {            
            cout << "\n===========================\n";            
            cout << "Username / Password Salah! \n";
     		cout << "=============================\n\n";            
            goto cobalagi; 
       		}  
}
    
     
   
 }// Tutup Kurung Int Main
