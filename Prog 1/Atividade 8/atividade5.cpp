#include<iostream>
using namespace std;

int main(){
	 int m[5][5],cont=0,somatorio=0;
	 
	 for(int i=0;i<5;i++){
	 	for(int j=0;j<5;j++){
	 		cout<<"Digite um numero : ";
	 		cin>>m[i][j];
		 }
	 }
	 cout<<endl<<endl;
	for(int i=0;i<5;i++){
	 	for(int j=0;j<5;j++){
	 		cout<<m[i][j]<<" ";
		 }
		 cout<<endl;
	 }
	 
	int aux = 0;
	for(int i=0;i<5;i++){
	 	for(int j=0;j<5;j++){
	 		aux=m[i][j];
	 		for(int k=1;k<=aux;k++){
	 			if(aux % k == 0){
	 				cont++;
				 }
			}
			
			if(cont==2){
				somatorio=somatorio+aux;
				cont=0;
			}else{
				cont=0;
			}	 		
		}
	}
	
	cout<<"A soma dos primos foi: "<<somatorio<<endl;
}
	 
