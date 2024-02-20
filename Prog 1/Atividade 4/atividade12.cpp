#include <iostream>
#define tam 20
using namespace std;
int main(){
	int k[tam];
	int i=0, j = 0;
	for(i=0; i<tam; i++){
		cout<<"Digite o valor : ";
		cin>>k[i];
	}
	for(i=0; i<tam; i++){
		cout<<"  "<<k[i];
	}
	for(i=0; i<tam; i++){
		if(i%2==0){
			j = k[i];
			k[i] = k[i+1];
			k[i+1] = j;		
		}
	}
	cout<<endl;
	cout<<endl;
	cout<<"Vetores trocados : "<<endl;
	cout<<endl;
	for(i=0;i<tam;i++){
		
		cout<<"  "<<k[i];
		
		
	}
}
