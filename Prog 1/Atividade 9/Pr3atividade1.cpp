#include <iostream>
using namespace std;
int main(){
	int v[10];
	int i, cont = 0;
	for(i=0;i<10;i++){
		cout<<"Digite um numero : ";
		cin>>v[i];
	}
	for(i=0;i<10;i++){
		if(v[i]<0){
			cont++;
		}
	}
	for(i=0;i<10;i++){
		if(v[i]<0){
			cout<<"O numero negativo : "<<v[i]<<" e sua posicao : "<<i<<endl;
		}
	}
	for(i=0;i<10;i++){
		if(v[i]<0){
			v[i] = 1;
		}
	}
	
	cout<<endl;
	cout<<"Quantidade de numeros negativos no Vetor : "<<cont<<endl;
	cout<<"Vetor Modificado : ";
	for(i=0;i<10;i++){
	cout<<" "<<v[i];
	}
}
