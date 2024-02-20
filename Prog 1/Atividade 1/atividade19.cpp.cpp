#include<iostream>
using namespace std;
int main(){
	
	float gusaltura =1.40, julaltura=1.10;
	int ano=0;
	
	while(julaltura < gusaltura){
		julaltura = julaltura + 0.03;
		ano++;
		
	}
	
	cout<<"Quantos anos levou para Juliano passar a altura de Gustavo : "<<ano<<endl;	
}
