#define TAM 10
#include <locale.h>
#include <iostream>

using namespace std;

int t, t2, b, b2, tam, tam2, nmr;
int pilha[TAM];

void inicializacao(void);
void consulta(void);
void retirada(void); 

void inicializacao(void){
	t = b = -1;
	t2= b2 = TAM;
	tam = TAM - 1;
	tam2 = 0; 
}

void inclusao(int valor){
	if (t==tam || t2 == b + 1){
//	system("cls");
	cout<<"Overflow ocorrido!!"<<endl<<endl;
	consulta(); 
	exit(0);

	}else{
		if(valor%2==0){
		pilha[++t] = valor;
	//	system("cls");
		cout<<"Inclusao efetuada na pilha 1!"<<endl<<endl;;
		}else{
			pilha[--t2] = valor;
	//		system("cls");
			cout<<"Inclusao efetuada na pilha 2!"<<endl<<endl;
			}
		}
}

void consulta(void){
	int i;
//	system("cls");
	cout<<endl;
	for(i=9;i>=0;i--){
		cout<<pilha[i]<<endl;
	}
	cout<<endl;
}

void retirada(void){
	int valor,aux,aux2;
	if(t==b || t2==b2){
//		system("cls");
		cout<<"UNDERFLOW ocorrido!"<<endl<<endl;
		}else{
			if(nmr%2==0){
			aux=t;
			valor = pilha[t--];
			pilha[aux]=0;
			system("cls");
			cout<<"Valor retirado da pilha 1: "<<valor<<endl;
			}else{
				aux2 = t2;
				valor = pilha[t2++];
				pilha[aux2]=0;
				system("cls");
				cout<<"Valor retirado da pilha 2: "<<valor<<endl;
		}	
	}
}

int main(){
	
	int escolha,qtd=0;
	
	inicializacao();
	
	while(qtd<=20){		
		
		cout<<"Sistema de pilhas"<<endl<<endl;
		cout<<"1 - Inclusao"<<endl;
		cout<<"2 - Consulta"<<endl;
		cout<<"0- Finalizar programa"<<endl<<endl;
		cin>>escolha;
		
		if(escolha!=1 && escolha!=2 && escolha!=0){
		//	system("cls");
			cout<<"Digite o numero de uma opcao valida!"<<endl<<endl;
		}
		switch(escolha){
			case 1:
				system("cls");
				cout<<"Informe um numero de 1 a 99: ";
				cin>>nmr;
				
				if(nmr>=1 && nmr<=99){
					
					if(nmr>50){
						inclusao(nmr);
						qtd++;
						cout<<"qtd: "<<qtd;
					}
				
					if(nmr<=50){
						retirada();		
					}
				}else{
					cout<<"Esse numero e invalido!"<<endl;
					cout<<"Tente novamente!!"<<endl<<endl;
				}
				break;
			
			case 2:
				consulta();
				break;
			case 0:
				return 0;
		}
				
		
	}
	
}
