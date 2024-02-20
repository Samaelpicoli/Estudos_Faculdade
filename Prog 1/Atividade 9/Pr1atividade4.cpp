#include <iostream>
using namespace std;
int main(){
	int numero[4];
	int i, maior, menor, media, pares, soma = 0;
	for(i=0; i<4; i++){
		cout<<"Digite um numero : ";
		cin>>numero[i];
	}
	for(i=0; i<4; i++){
		soma = soma + numero[i];
		media = soma / 4;
	}
	maior = numero[0];
	for(i=0; i<4; i++){
		if(numero[i]>maior){
			maior = numero[i];
		}
	
	}
	menor = numero[0];
	for(i = 0; i<4; i++){
		if(numero[i]<menor){
			menor = numero[i];
		}
	}
	for(i = 0; i<4; i++){
		if(numero[i]%2 == 0){
			pares++;
		}
	}
	cout<<"A media dos numeros : "<<media<<endl;
	cout<<"A quantidade de numeros pares : "<<pares<<endl;
	cout<<"O maior numero : "<<maior<<endl;
	cout<<"O menor numero : "<<menor;
}
