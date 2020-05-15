#include <cstdlib>
#include <iostream>

using namespace std; 
int main(int argc,char *argv[]) {  
char nama [2][2][2];  
int i,j,k;  
cout << "Muhammad Abdul Aziz\n";
cout << "F1B019095\n";
cout << "===================\n";
for(i=0;i<2;i++)  {   
for(j=0;j<2;j++)   { 
for(k=0;k<2;k++) {
cout<<"NIM ["<<i+1<<"][ "<<j+1<<"] ["<<k+1<<"] :   ";   
cin>>nama[i][j][k];
}  
}   
cout<<endl;  }
for(i=0;i<2;i++)  {   
for(j=0;j<2;j++)   {  
for(k=0;k<2;k++) {
	cout<<"\nNIM ["<<i+1<<"][ "<<j+1<<"] ["<<k+1<<"] :   "<<nama[i][j][k];
}      
}  
} 
}
