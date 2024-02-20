#define TAMANHO 10
#include <locale.h>
#include <iostream>
using namespace std;

int f1,f2,r1,r2,tam1,tam2;  //várivel f= frente, r = ré 
int fila1[TAMANHO],fila2[TAMANHO];


void inclusao(void);
void retirada(void); 	//iniciliza as funções caso queira chamar uma função dentro de outra função (Para não dar erro)
void consulta(void);

void inicializacao(void){
	f1 = f2 = r1 = r2 = -1;			
	tam1 = tam2 = TAMANHO-1;	//tam-1 pois começa no zero
}

void inclusao(int valor){
	if(r1==tam1 || r2==tam2){
		system("cls");
		cout<<"Overflow ocorrido!"<<endl;
		consulta(); 
		exit(0);
	}else{
		if(valor%2==0){
			fila1[++r1] = valor;
			system("cls");
			cout<<"Inclusão efetuada na fila 1!"<<endl;
		}else{													//Inclusão em cada fila
			fila2[++r2] = valor;
			system("cls");
			cout<<"Inclusão efetuada na fila 2!"<<endl;
		}
	}
}
void retirada(int valor){

		int aux;
			
	if(valor%3==0 && valor%5==0){
		cout<<"O número informado é múltiplo de 3 e 5!!"<<endl;
	}else if(valor%3==0){
		if(r1==f1){
			cout<<"Underflow ocorrido na fila 1!!"<<endl;
			consulta();
			exit(0);
		}else{
			aux = fila1[f1+1];  //auxiiar que pega o valor da fila 1
			fila1[f1+1] = 0;  	//zera o valor da fila 1
			f1++;				//adiciona o +1 ao índice da frente
			if (f1==r1){
				f1 = r1 = -1;	//reseta a frente e a ré caso a fila fique vazia
			}
			fila2[++r2] = aux;	
			cout<<"Elemento retirado da fila 1 e incluido na fila 2: "<<aux<<endl;
		}	
	}else if(valor%5==0){
			if(r2==f2){
			cout<<"Underflow ocorrido na fila 2"<<endl;
			consulta();
			exit(0);
		}else{
			aux = fila2[f2+1];
			fila2[f2+1] = 0;
								//mesma coisa, mas na fila 2
			f2++;
			if (f2==r2){
				f2 = r2 = -1;
			}
			fila1[++r1] = aux;	
			cout<<"Elemento retirado da fila 2 e incluído na fila 1: "<<aux<<endl;
		}
	}
}
		
	
void consulta(void){
		cout<<endl;	
	
			cout<<"Fila 1: ";
		for(int i=0;i<TAMANHO;i++){
			cout<<fila1[i]<<" ";
		}
	 
	 	cout<<endl;				//Função que consulta as 2 filas
		
		cout<<"Fila 2: ";
		for(int i=0;i<TAMANHO;i++){
			cout<<fila2[i]<<" ";
			
		}
		cout<<endl;
	}
		
		
int main(){
	
	int qtd=1,valor;
	
	setlocale(LC_ALL, "Portuguese");
	
	inicializacao();
	
	cout<<"SUAF - Sistema ultra-avançado de filas" <<endl;
	
	while(qtd<=20){
		cout<<endl;
		cout<<"Digite o "<<qtd<<"º número para incluir em uma fila: ";
		cin>>valor;
		inclusao(valor);
		retirada(valor);
		consulta();
		qtd++;
	}
}
		
		
		
