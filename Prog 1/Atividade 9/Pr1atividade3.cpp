#include <iostream>
using namespace std;
int main(){
	int numero;
	float salario, aumento = 0, salarionovo;
	cout<<"Numero do funcionario : "<<endl;
	cin>>numero;
	cout<<"Salario Atual : "<<endl;
	cin>>salario;
	if((salario >= 0) || (salario<=400)){
		aumento = salario + (salario * 0.15 ); 
	}
	if((salario > 400) || (salario<=700)){
		aumento = salario + (salario * 0.12 ); 
	}
	if((salario > 700) || (salario<=1000)){
		aumento = salario + (salario * 0.10 ); 
	}
	if((salario > 1000) || (salario<=1800)){
		aumento = salario + (salario * 0.07 ); 
	}
	if((salario > 1800) || (salario<=2500)){
		aumento = salario + (salario * 0.04 ); 
	}
	if(salario > 2500){
		aumento = salario + (salario * 0 ); 
	}
	
	cout<<"O funcionario numero : "<<numero<<" que tinha o salario de : "<<salario<<" Reais. Com o aumento seu salario agora eh de : "<<aumento<<" Reais";
}
