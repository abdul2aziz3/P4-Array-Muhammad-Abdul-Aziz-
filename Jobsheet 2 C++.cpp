#include <iostream>
using namespace std;
int main()
{
	cout<<"Muhammad Abdul Aziz\n\n";
	string nim[5];
	
	cout<<"Masukkan NIM 1 : "; cin>>nim[0];
	cout<<"\nMasukkan NIM 2 : "; cin>>nim[1];
	cout<<"\nMasukkan NIM 3 : "; cin>>nim[2];
	cout<<"\nMasukkan NIM 4 : "; cin>>nim[3];
	cout<<"\nMasukkan NIM 5 : "; cin>>nim[4];
	
	cout<<endl;
	
	cout<< "Data NIM Mahasisawa yang anda input : "<<endl;
	cout<< "Nim ke-1 adalah " <<nim[0] <<endl;
	cout<< "\nNim ke-2 adalah " <<nim[1] <<endl;
	cout<< "\nNim ke-3 adalah " <<nim[2] <<endl;
	cout<< "\nNim ke-4 adalah " <<nim[3] <<endl;
	cout<< "\nNim ke-5 adalah " <<nim[4] <<endl;
	
	return 0;

}
