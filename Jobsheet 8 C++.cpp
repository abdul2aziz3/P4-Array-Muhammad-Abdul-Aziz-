#include <iostream>
using namespace std;
int main(){
	cout << "Muhammad Abdul Aziz\n";
  cout << "F1B019095\n";
  cout << "===================\n";
  int x[5],i;
  for(i=0;i<5;i++){
  	cout<<"Masukan Nilai "<<i+1<<" : ";
  	cin>>x[i];
  }
  cout<<endl;
  for(i=0;i<5;i++){
  	cout<<"Nilai Ke - "<<i+1<<" = "<<x[i]<<endl;
  }
  cout<<endl;
  return 0;
}
