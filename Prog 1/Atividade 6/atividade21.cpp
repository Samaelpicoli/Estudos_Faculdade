#include <iostream>
using namespace std;
int main(){
	int conta[30];
	int i = 0;
	float despesa, maior, lucro, somatorio = 0;
	for(i=0; i<30; i++){
		cout<<"O que entrou no dia "<<i+1<<"  na empresa: ";
		cin>>conta[i];
	}
	for(i=0;i<30;i++){ 
	somatorio=somatorio+conta[i];
} 
	
	maior=conta[0];
	for(i=0;i<30;i++){
            if(conta[i]>maior){
                maior=conta[i];
            }
        }
	    
     cout<<"A Receita foi de "<<maior<<" Reais. "<<endl;
     cout<<"As despesas foram de "<<somatorio-maior<<" Reais. "<<endl;
     lucro = maior - somatorio + maior;
     if(lucro>=0){
     	cout<<"O lucro foi de "<<lucro<<" Reais.";
	 }else{
	 	cout<<"O prejuizo foi de "<<-(lucro)<<" Reais.";
	 }
     
}
