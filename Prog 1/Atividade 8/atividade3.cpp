#include <iostream>
#define tam 10
using namespace std;
int main(){
	int m[tam][tam];
	int i = 0, j = 0, maior = 0, menor = 0, dp = 0;
	float soma = 0;
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			cout<<"Digite um numero ["<<i+1<<","<<j+1<<"] : ";
			cin>>m[i][j];
			if((i == 0) && (j == 0)){
			maior = m[0][0];
			menor = m[0][0];
			}
			if(m[i][j] > maior){
				maior = m[i][j];
			}
			if(m[i][j]<menor){
				menor = m[i][j];
			}
		
			
			if(i==j){
				dp= dp + m[i][j];
					}
			soma = soma + m[i][j];
				
		}
	}
	cout<<"A media : "<<soma / 100<<endl;
	cout<<"O maior : "<<maior<<endl;
	cout<<"O menor : "<<menor<<endl;
	cout<<"A soma da diagonal principal : "<<dp;
}
