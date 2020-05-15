#include <iostream>
using namespace std;
int main(){
int i, j, m, n, matriks[50][50], transpose[50][50];
cout<< "Muhammad Abdul Aziz\n";
cout<< "F1B019095\n";
cout<< "===================\n";
cout<< "Transpose Matriks\n";
cout<< "\n========================================\n";
cout<< "Masukkan jumlah baris : ";
cin>> m;
cout<< "Masukkan jumlah kolom : ";
cin>> n;
cout<< "\n========================================\n";
cout<< "Masukkan elemen matriks\n";
  for (i = 0; i < m; i++){
    for (j = 0; j < n; j++){
cin>>matriks[i][j];
    }
  }
  for (i = 0; i < m; i++){
    for (j = 0; j < n; j++){
      transpose[j][i] = matriks[i][j];
    }
  }
cout<< "\n========================================\n";
cout<< "\nHasil Transpose Matriks: \n";
  for (i = 0; i < n; i++){
    for (j = 0; j < m; j++){
cout<< transpose[i][j] << "\t";
    }
cout<<endl;
  }
