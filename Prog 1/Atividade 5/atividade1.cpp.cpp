#include <iostream>
using namespace std;
int main(){
	int V[20];
	int novo[20] = {};
	int i, j, x = 1, cont = 0, s = 0, conta = 0;
	for(i=0; i<20; i++){
		cout<<"Digite elementos do vetor : ["<<i<<"] : ";
		cin>>V[i];
	}
	cout<<endl;
	for(i=0; i<20; i++){
		cout<<" "<<V[i];
	}
	cout<<endl;
	cout<<endl;
	novo[0]=V[0];
	while(true){
		for(i=0; i<20; i++){
			if(novo[i]==V[x]){
				cont++;
			}
			
		}	
		if(cont == 0){
			novo[x] = V[x];

		}
		x++;
		cont=0;
		if(x==20){
			break;
		}
	}
	for(i=0; i<20; i++){
		if(novo[i]==0){
			
		}else{
			cout<<" "<<novo[i];
		}
	
	}
}
