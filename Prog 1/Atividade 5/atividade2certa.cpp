#include <iostream>
using namespace std;
int main(){
	int V[10];
	int X[10];
	int Y[20];
	int i, j, aux = 0;
	for(i=0; i<10; i++){
		cout<<"Digite um numero do vetor V: ["<<i<<"] : ";
		cin>>V[i];
	}
	for( i=0; i<10; i++ ){
        for( j=i+1; j<10; j++ ){
        if( V[i] > V[j] ){
        aux = V[i];
        V[i] = V[j];
        V[j] = aux;
        }
        }
    }
    cout<<"Ordem Crescente do Vetor V : "<<endl;
    for(i=0; i<10; i++){
    	cout<<"  "<<V[i];
	}
	cout<<endl;
	cout<<endl;
	for(i=0; i<10; i++){
		cout<<"Digite um numero do vetor X: ["<<i<<"] : ";
		cin>>X[i];
	}
	for( i=0; i<10; i++ ){
        for( j=i+1; j<10; j++ ){
        if( X[i] > X[j] ){
        aux = X[i];
        X[i] = X[j];
        X[j] = aux;
        }
        }
    }
    cout<<"Ordem Crescente do Vetor X : "<<endl;
    for(i=0; i<10; i++){
    	cout<<"  "<<X[i];
	}
	for(i=0; i<10; i++){
		Y[i]=V[i];
	}
	for(i=0; i<10; i++){
		Y[i+10]=X[i];
	}
	for(i=0; i<20; i++){
		 for( j=i+1; j<20; j++ ){
		if( Y[i] > Y[j] ){
        aux = Y[i];
        Y[i] = Y[j];
        Y[j] = aux;
        }
	}
	}
	cout<<endl;
	cout<<endl;
	 cout<<"Ordem Crescente do Vetor Y : "<<endl;
    for(i=0; i<20; i++){
    	cout<<"  "<<Y[i];
	}
}


