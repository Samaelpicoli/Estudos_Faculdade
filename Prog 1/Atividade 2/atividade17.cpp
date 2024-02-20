#include <iostream> 
#include <iomanip>
using namespace std; 
int main () { 
int n, i; 
double fat;
long double e; 
cin>>n; 
if (n<=0){ 

cout<<"Valor negado!!!"; 
return 0;
}
fat = 1;
e = 1;
for (i=1; i<=n; i++) {
	fat = fat * 1/i;
	e = e + fat;
	 
}
	cout<<fixed<<setprecision(10);
	cout<<e<<endl;
}
