#include <iostream>
using namespace std;
int main() {
int i, j, m, n, matriks1[10][10], matriks2[10][10], hasil[10][10];
cout<< "Muhammad Abdul Aziz\n";
cout<< "F1B019095\n";
cout<< "===================\n";
cout<< "PenjumlahanMatriks\n";
cout<< "Masukkanjumlahbarismatriks: ";
cin>> m;
cout<< "Masukkanjumlahkolommatriks: ";
cin>> n;
cout<< "------------------------------------\n";
cout<< "Masukkanelemen matrix pertama: \n";
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
cin>> matriks1[i][j];
    }
  }
cout<< "-----------------------------------";
cout<< "\nMasukkanelemen matrix kedua: \n";
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
cin>> matriks2[i][j];
    }
  }
cout<< "-----------------------------------";
cout<< "\nHasilpenjumlahan matrix: \n";
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
hasil[i][j] = matriks1[i][j] + matriks2[i][j];
cout<<hasil[i][j] << "\t";
    }
cout<<endl;
  }

  return 0;
}
