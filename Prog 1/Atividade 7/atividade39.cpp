#include<iostream>
using namespace std;

int main(){
	int m[4][6], maior, cont_coluna=0, soma=0, media=0, x=1, multiplicacao=1, cont_negativo=0;
	
	cout<<"------------A------------"<<endl;
	for(int i=0;i<4;i++){
		for(int j=0;j<6;j++){			
			cin>>m[i][j];		
		}
	}
	
	maior = m[0][0];
	for(int i=0;i<4;i++){
		for(int j=0;j<6;j++){
			if(m[i][j] > maior){
				maior= m[i][j];
			}
		}	
		cout<<"O maior da linha foi: "<<maior<<endl; 
		maior=-1; 
	}
	
	cout<<"------------B------------"<<endl;
	
	while(cont_coluna != 6){
		for(int i=0;i<4;i++){
			for(int j=0;j<6;j++){
				if(cont_coluna == j){
					soma = soma + m[i][j];
				}
			}	
		}
		media = soma/4;
		soma=0;
		cont_coluna++;
		
		cout<<"A media da "<<x<<"* coluna e: " << media<<endl;
		x++;
	}	
	
	cout<<"------------C------------"<<endl;
	
	for(int i=0;i<4;i++){
		for(int j=0;j<6;j++){
			if(m[i][j] != 0){
				multiplicacao = multiplicacao * m[i][j];
			}			
		}
	}
	
	cout<<"A multiplicacao foi: " << multiplicacao<<endl;
	
	cout<<"------------D------------"<<endl;
	
	for(int i=0;i<4;i++){
		for(int j=0;j<6;j++){
			if(m[i][j] < 0){
				cont_negativo++;
			}
		}
	}
	
	cout<<"A quantidade de numeros negativos foi: " << cont_negativo<<endl;
	
	cout<<"------------E------------"<<endl;
	for(int i=0;i<4;i++){
		
		for(int j=0;j<6;j++){
			cout<<"["<<i<<"]"<<"["<<j<<"]"<< "= "<<m[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
}
