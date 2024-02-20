#include<iostream>
using namespace std;

int main(){
	
	int m[6][6], v[36], a,aux=0;
	
	cout<<"----------VETOR------------"<<endl;
	for(int i=0;i<6;i++){
		for(int j=0;j<6;j++){
			cin>>m[i][j];
		}
	}
	cout<<"--------- VALOR A --------- ";
	cin>>a;
	
	for(int i=0;i<6;i++){
		for(int j=0;j<6;j++){
			v[aux] = a * m[i][j];
			aux++;
		}
	}
	
	cout<<"-------> IMPRIMINDO O VETOR V"<<endl;	
	for(int i=0;i<36;i++){
		cout<< v[i]<<" ";
	}
	
}
