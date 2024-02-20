#include <iostream>

using namespace std;

struct numero{
	int num;
	bool contabilizado = false;
};

struct conta{
	int num=0;
	int contagem=0;
};


int main(){

	numero val[20];
	conta contagem[20];
	
	for(int i=0; i<20; i++){
		cout<<"Digite o valor para o vetor V["<<i+1<<"]:";
		cin>>val[i].num;				
	}
	
	
	//contagem
	int cont_conta =0;
	for(int i=0;i<20;i++){
		
	if(!val[i].contabilizado){
		contagem[cont_conta].num =val[i].num;
		contagem[cont_conta].contagem++;
		val[i].contabilizado = true;
		
		for(int j=0;j<20;j++){
			if(j!=i && val[i].num == val[j].num ){
				val[j].contabilizado = true;
				contagem[cont_conta].contagem++;
			}
		}
		cont_conta++;
	}
	
}
		cout<<" ---------------------------------------"<<endl;
		cout<<"RELACAO DE VALORES E QUANTIDADES:"<<endl;
		for(int i=0;i<cont_conta;i++){
		cout <<"NR: "<< contagem[i].num <<" = " << contagem[i].contagem << endl;
		}


   
	
    return 0;
}
