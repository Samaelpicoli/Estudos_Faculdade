#include <iostream>
using namespace std;
int main(){
int i, num, par, impar, j;
int v[30], vet_par[5], vet_impar[5];
par = 0;
impar = 0;
num = 0;
i = 0;
j = 0;
	for (i = 0; i < 30; i++ ){
		cout<<"Numero : ";
		cin>>v[i];
		if (v[i] %2 == 0 ) {
			vet_par[par] = v[i]; 
			par++; 
			if (par == 5 ){
				cout<<"Numeros Pares em Bloco de 5 "<<endl;
				for(j = 0; j < 5; j++ ){
					cout<<vet_par[j]<<endl; 
				}
			par = 0; 
			}
		}
		else{
			vet_impar[impar] = v[i]; 
			impar++; 
			if (impar == 5 ){
				cout<<"Numeros Impares em Bloco de 5 : "<<endl;
				for(j = 0; j < 5; j++ ){
					cout<<vet_impar[j]<<endl; 
				}
				impar = 0;
			}
		}
	}
	cout<<"Os Numeros Digitados Foram:  "<<endl;
	for (i = 0; i < 30; i++){
		cout<<"- "<<v[i]; 
	}
}
