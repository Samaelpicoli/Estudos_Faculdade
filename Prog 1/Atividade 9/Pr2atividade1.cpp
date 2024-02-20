#include <iostream>
using namespace std;
int main(){
	int a[10], b[10], c[10], d[10];
	int i, j, soma1, soma2, vetc, vetd, sub = 0;
	cout<<"Digite os numeros do vetor A : "<<endl;
	for(i=0; i<10; i++){
		cin>>a[i];	
	}
	cout<<"Digite os numeros do vetor B : "<<endl;
	for(i=0; i<10; i++){
	cin>>b[i];
	}
	for(i = 0; i<10; i++){
	c[i] = a[i] + b[i];
	}
	cout<<endl;
	cout<<"Vetor C : "<<endl;
	for(i=0;i<10;i++){
		cout<<c[i]<<endl;
	}
	for(i = 0; i<10; i++){
	d[i] = a[i] - b[i];
	}
	cout<<endl;
	cout<<endl;
	
	cout<<"Vetor D : "<<endl;
	for(i=0;i<10;i++){
		cout<<d[i]<<endl;
	}
	
	
	
}
