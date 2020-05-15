#include <iostream>
using namespace std;
int main() {
	
	cout<< "Muhammad Abdul Aziz\n";
cout<< "F1B019095\n";
cout<< "===================\n";
cout<< "PerkalianMatriks\n";
	
int matriks1[10][10], matriks2[10][10], hasil[10][10];
int i, j, k, m, n, p, q, jumlah = 0;
cout<< "Masukkanjumlahbarismatrikspertama: ";
cin>> m;
cout<< "Masukkanjumlahkolommatrikspertama: ";
cin>> n;
cout<< "Masukkanjumlahbarismatrikskedua: ";
cin>> p;
cout<< "Masukkanjumlahkolommatrikskedua: ";
cin>> q;
cout<< "\n========================================\n";
  if(n != p){
cout<< "Matrikstidakdapatdikalikansatusama lain.\n";
  } else {
	
cout<< "Masukkanelemenmatrikspertama: \n";
    for(i = 0; i < m; i++){
      for(j = 0; j < n; j++){
cin>> matriks1[i][j];  
      }
    }
cout<< "\n========================================\n";
cout<< "Masukkanelemenmatrikskedua: \n";
    for(i = 0; i < p; i++){
      for(j = 0; j < q; j++){
cin>> matriks2[i][j];
      }
    }
cout<< "\n========================================\n";
    for(i = 0; i < m; i++){
      for(j = 0; j < q; j++){
        for(k = 0; k < p; k++){
jumlah = jumlah + matriks1[i][k] * matriks2[k][j];
        }
hasil[i][j] = jumlah;
jumlah = 0;
      }
    }
cout<< "\n========================================\n";
cout<< "Hasilperkalianmatriks: \n";
    for(i = 0; i < m; i++){
      for(j = 0; j < n; j++){
cout<<hasil[i][j] << "\t";
      }
cout<<endl;
    }
  }

  return 0;
}
