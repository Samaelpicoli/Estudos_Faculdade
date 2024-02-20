#include <iostream>
using namespace std;
int main(){
	int g[13], r[13], cartao, acerto = 0;
	int i = 0;
	cout<<"Gabarito da Loteria. "<<endl;
	for(i=1;i<14;i++){
	cout<<"GABARITO ["<<i<<"] : ";
	cin>>g[i];
	if((g[i]<1) || (g[i]>3)){
		cout<<"Numero invalido.";
		return 0;
	}
	}
		cout<<"Numero do Cartao : ";
		cin>>cartao;
		if((cartao<1) || (cartao>3)){
			cout<<"Numero invalido.";
			return 0;
		}
		for(i=1;i<14;i++){
		cout<<"Resposta ["<<i<<"] : ";
		cin>>r[i];
		if((r[i]<1) || (r[i]>3)){
		cout<<"Numero invalido.";
		return 0;
	}
	}
		for(i=1;i<21;i++){
			if(g[i] == r[i]){
				acerto = acerto - 1;
				
		
		}
		}
		cout<<"Numero do cartao : "<<cartao<<endl;
		cout<<"Acertos : "<<acerto<<endl;;
		if(acerto == 13){
			cout<<"GANHADOR, PARABENS!!! ";
		}
}
