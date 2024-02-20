#include<iostream>
using namespace std;

int main(){

	int m[5][5], sl[5], sc[5],soma_col=0, soma_lin=0;
	
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin>>m[i][j];
		}
	}
	
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cout<<m[i][j]<<" ";
		}
		cout<<endl;
	}
	
	int aux_l=0;
	while(aux_l<5){
		for(int i=0;i<5;i++){
			soma_lin=soma_lin+m[aux_l][i];
		}
		sl[aux_l]=soma_lin;
		soma_lin=0;
		aux_l++;
	}
	
	int aux_c=0;
	while(aux_c<5){
		for(int i=0;i<5;i++){
			soma_col=soma_col+m[i][aux_c];
		}
		sc[aux_c]=soma_col;
		soma_col=0;
		aux_c++;
	}
	
	cout<<"IMPRIMINDO VETOR LINHA"<<endl;
	for(int i=0;i<5;i++){
		cout<<sl[i]<<" ";
	}
	cout<<endl;
	
	cout<<"IMPRIMINDO VETOR COLUNA"<<endl;
	for(int j=0;j<5;j++){
		cout<<sc[j]<<" ";	
	}
	



}
