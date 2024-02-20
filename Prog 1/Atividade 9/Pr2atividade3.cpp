#include <iostream>
using namespace std;
int main(){
	int v[20];
	int i, cont = 0, aux = 0, j = 0;
	for(i=0;i<20;i++){
		cout<<"Digite um numero : ";
		cin>>v[i];
	}
	for(i=0;i<20;i++){
		aux = v[i]; 
		for(j=1; j<=aux; j++){
			if(aux % j == 0){
				cont++;
			}
		}
		if(cont == 2){
			cout<<"Numero primo : "<<aux<<endl;
			cont = 0;
		}else{
			cont = 0;
		}
	}
}
