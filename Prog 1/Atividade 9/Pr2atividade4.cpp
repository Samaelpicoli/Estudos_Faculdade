#include<iostream>

using namespace std;


int main(){
	int M[30][2], aux=0, cont=0, soma=0;
	double med=0;

	for(int i=0; i<30; i++){
		for(int j=0; j<2; j++){
			cout<<"Digite um numero : ["<<i+1<<","<<j+1<<"]: ";
			cin>>M[i][j];
			if(j==1){
				soma += M[i][j];
			}
		}
	}
	med = soma / 30;


	
	for(int i=0; i<30; i++){
		for(int j=0; j<2; j++){
			for(int x=i+1; x<30; x++){
				if(M[i][1] > M[x][1]){
					aux = M[i][j];
					M[i][j]= M[x][j];
					M[x][j] = aux;
				}
			}
		}
	}
	
	cout<<endl;
	cout<<"O codigo e o preco dos 4 artigos mais caros foi:"<<endl;
	for(int x=1; x<30; x++){
		for(int k=1; k<2; k++){
			if(cont<4){
				cout<<M[30-x][2-2]<<" "<<M[30-x][2-k];
			}
			cont++;	
		}
	cout<<endl;
	}
	
	cout<<endl;
	cout<<"O codigo e o preco dos 4 artigos mais baratos foi:"<<endl;	
	for(int i=0; i<4; i++){
		for(int j=0; j<2; j++){
			cout<<M[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<"O codigo dos artigos com preco superiores a media foi: "<<endl;	
	for(int i=0; i<30; i++){
		for(int j=0; j<2; j++){
			if(M[i][1]>med){
				cout<<M[i][j]<<" ";
			}
		}
		cout<<endl;
	}
	
	
	return 0;
}
