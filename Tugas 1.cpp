#include<iostream>
#include<iomanip>
#include<conio.h>

using namespace std;

int develop_data(){   
	cout<<"Muhammad Abdul Aziz\n";
	cout<<"F1B019095\n";
	cout<<"KELOMPOK 20\n";
	cout<<"============================================\n";
	cout<<"          PROGRAM TUGAS TAMBAHAN P4\n";
	cout<<"============================================\n\n";
	system("pause");
}

int main()
{
	develop_data();
	int i, nilai, benar=0, salah=0;
	string nim, pass;
	char pilihlogin, pilihan, jawab, pilih;
	ulang :
	cout<<"                                          SELAMAT DATANG\n";
	cout<<"                                                DI\n";
	cout<<"                                      COVID-19 Quiz BERHADIAH\n";
	cout<<"                           =============================================\n";
	cout<<"                                    Silahkan Login Terlebih Dahulu!\n";
	cout<<"\t\t\t\t\t\t\t\t\t\n";
	cout<<"\t\t\t\t Masukkan NIM : ";cin>>nim;cout<<"\n";
	cout<<"\t\t\t\t Masukkan Password  : ";cin>>pass;cout<<"\t\t\n";
			if (nim == "1" && pass == "1")
			{
				cout<<"\t\t\t         Login Berhasil!\t\t\n";
				system("pause");
			}
			else
			{
				cout<<"\t\t\t Ussername dan password anda salah silahkancobakembali \t\t\n";
				cout<<"\t\t\t Cobalagi ?[y/t]  : ";cin>>pilihlogin;cout<<"\t\t\n";
					if (pilihlogin=='y' || pilihlogin=='Y')
					{system("cls");
					goto ulang;}
					else{goto selesai;}
					if (pilihlogin=='t' || pilihlogin=='T')
					{goto selesai;}		
			}
			
			
	cout<<"-------------------------------------------------------------------------\n";
	system("cls");
	{
ulangjwb :
	cout<<"PILIH SALAH SATU JAWABAN YANG MENURUT ANDA BENAR!\n";
	cout<<"=========================================================================\n";
	cout<<"1. Dimana Negara awal muncul Virus Covid19 ini?\n";
	string pilgan1[50]={"a. Indonesia ","b. Filipina","c. Myanmar","d. Cina"};
	for (i=0;i<=3;i++)
	{cout<<pilgan1[i]<<"\n";}
cout<<"Pilihan Anda : ";
cin>>jawab;
if(jawab == 'd' || jawab == 'D')
        {benar++;}
else{
        salah++;}
    cout<<"==========================================================================\n";        
cout<<"2. Hewan Asal Virus Ini muncul Adalah...\n";
    string pilgan2[50]={"a. Kalelawar","b. Tokok","c. Sapi","d. Gurita"};
	for (i=0;i<=3;i++)
	{cout<<pilgan2[i]<<"\n";}
cout<<"Pilihan Anda : ";
cin>>jawab;
if(jawab == 'a' || jawab == 'A')
        {benar++;}
else{
        salah++;}
    cout<<"==========================================================================\n";        
	cout<<"3. Daerah yang pertama kali melakukan lockdown adalah...\n";
	string pilgan3[50]={"a. Beijing","b. Wuhan","c. Bangkok","d. Jakarta"};
	for (i=0;i<=3;i++)
	{cout<<pilgan3[i]<<"\n";}
cout<<"Pilihan Anda : ";
cin>>jawab;
if(jawab == 'b' || jawab == 'B')
        {benar++;}
else{
        salah++;}
	cout<<"==========================================================================\n";				
	cout<<"4. Tahun Awal Muncul Virus ini adalah...\n";
	string pilgan4[50]={"a. 2001","b. 2011","c. 2015","d. 2019"};
    for (i=0;i<=3;i++)
	{cout<<pilgan4[i]<<"\n";}
	cout<<"Pilihan Anda : ";
cin>>jawab;
if(jawab == 'd' || jawab == 'D')
        {benar++;}
else{
        salah++;}
    cout<<"==========================================================================\n";       
cout<<"5. Organ Tubuh yang di serang oleh Virus Covid 19 adalah...\n";
    string pilgan5[50]={"a. Hati","b. Ginjal","c. Paru Paru","d. Pankreas"};
	for (i=0;i<=3;i++)
	{cout<<pilgan5[i]<<"\n";}
cout<<"Pilihan Anda : ";
cin>>jawab;
if(jawab == 'c' || jawab == 'C')
        {benar++;}
else{
        salah++;}
	cout<<"==========================================================================\n";
	cout<<"6. Virus ini masuk ke dalam tubuh manusia melalui...\n";
	string pilgan6[50]={"a. Kulit","b. Kaki","c. Tangan","d. Mulut"};
	for (i=0;i<=3;i++)
	{cout<<pilgan6[i]<<"\n";}
	cout<<"Pilihan Anda : ";
cin>>jawab;
if(jawab == 'd' || jawab == 'D')
        {benar++;}
else{
        salah++;}     
	cout<<"==========================================================================\n";
	cout<<"7. Pertolongan Pertama saat melihat seseorang yang mulai terinfeksi Virus ini di tempat umum adalah...\n";
	string pilgan7[50]={"a. Tidak Menyentuh dan memanggil petugas Kesehatan","b. Mengobati dengan P3k","c. Memberi Nafas Buatan","d. Memberi Minum"};
	for (i=0;i<=3;i++)
	{cout<<pilgan7[i]<<"\n";}
cout<<"Pilihan Anda : ";
cin>>jawab;
if(jawab == 'a' || jawab == 'A')
        {benar++;}
else{
        salah++;}
	cout<<"==========================================================================\n";
	cout<<"8. Provinsi pertama kali Virus ini masuk di Indonesia adalah...\n";
	string pilgan8[50]={"a. Jakarta","b. Medan","c. Mataram","d. Bali"};
    for (i=0;i<=3;i++)
	{cout<<pilgan8[i]<<"\n";}
	cout<<"Pilihan Anda : ";
cin>>jawab;
if(jawab == 'a' || jawab == 'A')
        {benar++;}
else{
        salah++;}
	cout<<"==========================================================================\n";
	cout<<"9. Jumlah Negara yang terjangkit Virus ini adalah...\n";
	string pilgan9[50]={"a. 216","b. 211","c. 200","d. 095"};
	for (i=0;i<=3;i++)
	{cout<<pilgan9[i]<<"\n";}
	cout<<"Pilihan Anda : ";
cin>>jawab;
if(jawab == 'a' || jawab == 'A')
        {benar++;}
else{
        salah++;}
	cout<<"==========================================================================\n";
	cout<<"10. Di Indonesia Waktu Minimal dilakukan Karantina Mandiri adalah...\n";
	string pilgan10[50]={"a. 7 Hari","b. 14 Hari","c. 7 Bulan","d. 14 Bulan"};
	for (i=0;i<=3;i++)
	{cout<<pilgan10[i]<<"\n";}
	cout<<"Pilihan Anda : ";
cin>>jawab;
if(jawab == 'b' || jawab == 'B')
        {benar++;}
else{
        salah++;} 
			
	cout<<"Apakah anda yakin dengan jawaban anda??[y/t]\n";cin>>pilihan;cout<<"\n";
					if (pilihan=='y' || pilihan=='Y')
					{goto nilai;}
					
					if (pilihan=='t' || pilihan=='T')
					{system("cls"); 
					goto ulangjwb;
					cout<<endl;}												

	}		nilai :
					cout<<"=====================================================\n";
					cout<<"Penilaian :"<<endl;
		nilai = benar*10;
		cout<<"    Jawaban Benar : "<<benar<<" soal "<<endl;
		cout<<"    Jawaban Salah : "<<salah<<" soal "<<endl;
		cout<<"    Nilai Anda   : "<<nilai<<"\n"<<endl;
			selesai :
				cout<<"Lihat Kunci Jawaban?[y/t]\n";cin>>pilihan;cout<<"\n";
					if (pilihan=='y' || pilihan=='Y')
					{
						cout<<"1. Dimana Negara awal muncul Virus Covid19 ini? Cina\n";
						cout<<"2. Hewan Asal Virus Ini muncul Adalah Kalelawar\n";
						cout<<"3. Daerah yang pertama kali melakukan lockdown adalah Wuhan\n";
						cout<<"4. Tahun Awal Muncul Virus ini adalah 2019\n";
						cout<<"5. Organ Tubuh yang di serang oleh Virus Covid 19 adalah Paru paru\n";
						cout<<"6. Virus ini masuk ke dalam tubuh manusia melalui Mulut\n";
						cout<<"7. Pertolongan Pertama saat melihat seseorang yang mulai terinfeksi Virus ini di tempat umum adalah Tidak Menyentuh dan memanggil petugas Kesehatan\n";
						cout<<"8. Provinsi pertama kali Virus ini masuk di Indonesia adalah Jakarat\n";
						cout<<"9. Jumlah Negara yang terjangkit Virus ini adalah 216 Negara\n";
						cout<<"10. Di Indonesia Waktu Minimal dilakukan Karantina Mandiri adalah 14 Hari\n";
						cout<<"\n\n\n==========================="<<endl;
						cout<<"Program Selesai, Terimakasi\n";
						cout<<"==========================="<<endl;
					}
					
					if (pilihan=='t' || pilihan=='T')
					{
					cout<<"==========================="<<endl;
					cout<<"Program Selesai, Terimakasi\n";
					cout<<"==========================="<<endl;
					}	
}
