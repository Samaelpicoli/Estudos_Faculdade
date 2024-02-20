#include <iostream>
using namespace std;
int main(){
	int g[20], r[20], aluno, acerto =0, total_acerto, nota;
	int i = 0;
	cout<<"Gabarito de Prova Objetiva. 20 questoes, opcoes do 1 ao 5. Digite um numero diferente para parar o programa. "<<endl;
	for(i=1;i<21;i++){
	cout<<"GABARITO ["<<i<<"] : ";
	cin>>g[i];
	if((g[i]<1) || (g[i]>5)){
		cout<<"Numero invalido.";
		return 0;
	}
	}
	while(true){
		cout<<"Numero do Aluno : ";
		cin>>aluno;
		for(i=1;i<21;i++){
		cout<<"Resposta ["<<i<<"] : ";
		cin>>r[i];
		if((r[i]<1) || (r[i]>5)){
		cout<<"Numero invalido.";
		return 0;
	}
	}
		for(i=1;i<21;i++){
			if(g[i] == r[i]){
				acerto = acerto + 1;
				
		
		}
		}
		cout<<endl;
		cout<<endl;
		total_acerto = 20 - acerto;
		total_acerto = total_acerto / 2;
		total_acerto = acerto - total_acerto;
		nota = (total_acerto - (20-total_acerto)/2)/2;
		if(nota>=5){
			cout<<aluno<<" Nota : "<<nota<<" . Aprovado"<<endl;
		}else{
			cout<<aluno<<" Nota : "<<nota<<" . Reprovado"<<endl;
		}
		
		
		
}
}
