#include<iostream>

using namespace std;


int main(){
	double M[2][19], d1=0,d2=0,d3=0,d4=0,d5=0,d6=0, soma=0,soma1=0,soma2=0,soma3=0,soma4=0,soma5=0,soma6=0, med=0;
	
	 
	for(int i=0; i<2; i++){
		for(int j=0; j<19; j++){
			cout<<"Digite o valor para a matriz M = ["<<i+1<<","<<j+1<<"] :";
			cin>>M[i][j];
		}					
	}
	for(int i=0; i<2; i++){
		for(int j=0; j<19; j++){
			cout<<M[i][j]<<" ";
		}	
		cout<<endl;				
	}
	
	cout<<""<<endl;
	for(int i=0; i<2; i++){
		for(int j=0; j<19; j++){
			if((j == 1) || (j == 2) || (j == 3)){
				soma1 = soma1 + M[i][j];
				d1 = (soma1/3);
			}
			if((j == 4) || (j == 5) || (j == 6)){
				soma2 = soma2 + M[i][j];
				d2 = (soma2/3);	
			}
			if((j == 7) || (j == 8) || (j == 9)){
				soma3 = soma3 + M[i][j];
				d3 = (soma3/3);
			}
			if((j == 10) || (j == 11) || (j == 12)){
				soma4 = soma4 + M[i][j];
				d4 = (soma4/3);	
			}
			if((j == 13) || (j == 14) || (j == 15)){
				soma5 = soma5 + M[i][j];
				d5 = (soma5/3);	
			}
			if((j == 16) || (j == 17) || (j == 18)){
				soma6 = soma6 + M[i][j];
				d6 = (soma6/3);	
			}
			soma = (soma1 + soma2 + soma3 + soma4 + soma5 + soma6);
			med = (soma/18);
		}
		
		cout<<"Aluno "<<M[0][0]<<endl;
		cout<<"D1 "<<d1<<endl;
		cout<<"D2 "<<d2<<endl;
		cout<<"D3 "<<d3<<endl;
		cout<<"D4 "<<d4<<endl;
		cout<<"D5 "<<d5<<endl;
		cout<<"D6 "<<d6<<endl;		
		cout<<"Media Geral : "<<med<<endl;
		soma1=0;soma2=0;soma3=0;soma4=0;soma5=0;soma6=0;
	}
	
	

			
	return 0;
}
