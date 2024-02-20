#include <iostream>
#define tam 3
using namespace std;
int main(){
	int m[tam][tam];
	int i = 0, j = 0, maior = 0, linha = 0, menor = 0;
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			cout<<"Digite um numero : ["<<i+1<<"]["<<j+1<<"]";
			cin>>m[i][j];
		}
	}
	maior = m[0][0]; 		
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			if(m[i][j] > maior){
				maior = m[i][j];
				linha = i;
			}
		}
	}
	menor = m[linha][0];
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			if(m[linha][j]<menor){
				menor = m[linha][j];
			}
		}
	}
			
	cout<<"O maior : "<<maior<<endl;
	cout<<"Na linha : "<<linha<<endl;
	cout<<"O minimex : "<<menor;	
}

