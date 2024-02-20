#include <stdlib.h>
#include <stdio.h>
#include<iostream>
#define TAM 15 
using namespace std;

int f, r, tamanho;
int f2, r2, tamanho2;
int f3, r3, tamanho3;
int fila[TAM]; 
int aux, valor;

void inicializacao();
void inclusao();
void retirada();
void mostrarfilas();



void inicializacao(){
 f = r = -1;
 tamanho =  TAM - 11;
 f2 = r2 = TAM - 11;
 f3 = r3 = TAM - 6;
 tamanho2 = TAM - 6;
 tamanho3 = TAM - 1;
}
 

void inclusao( int valor )
{
 if((r==tamanho&& f<=0) || (r!=tamanho && r+1==f)){
        cout<<"Overflow Ocorrido na fila 1"<<endl;
        mostrarfilas();
        exit(0);
    }
 
 
 if ( ( r2 == tamanho2 && f2 <= 5 ) || ( r2 != tamanho2 && r2+1 == f2 ) ){
 	cout<<"Overflow Ocorrido na fila 2"<<endl;
 	mostrarfilas();
 	exit(0);
 }
 
 
 if ( ( r3 == tamanho3 && f3 <= 10 ) || ( r3 != tamanho3 && r3+1 == f3 ) ){
 	cout<<"Overflow Ocorrido na fila 3"<<endl;
 	mostrarfilas();
 	exit(0);
 }else if((valor >=1) && (valor <=10)){
 if ( r == tamanho ){
 	r = 0;
 }else{
 	r++;
	fila[ r ] = valor;

 }
 
}else if((valor >=11) && (valor <=20)){
	if (r2 == tamanho2){
		r2 = 0;
	}else{r2++;
	fila[r2] = valor;

	}
}else if((valor >=21) &&(valor <=30)){
	if (r3 == tamanho3){
	    r3 =0;
 }else{r3++;
 fila[r3] = valor;

 }
}
}

void retirada( void ){

 if ( r == f ){
 cout<<"UNDERFLOW ocorrido na fila 1"<<endl;
 }
 if ( r2 == f2 ){
 cout<<"UNDERFLOW ocorrido na fila 2"<<endl;
 }
 if ( r3 == f3 ){
 cout<<"UNDERFLOW ocorrido na fila 3"<<endl;
 }else{
 	if (valor%3==0){
	 	if ( f == tamanho ){
		 valor = fila[ 0 ]; 
		 f = 0;
		 }
		 else{
		 aux = fila[ f+1 ]; 
		 fila[f+1] = 0;
		 f++;
		 cout<<"Elemento retirado da fila 1: "<<aux<<endl; 
		 }
		 if ( f == r ){
		 f = r = -1;
		 }	
	 }
	if (valor%5==0){
	 	if ( f2 == tamanho2 ){
		 valor = fila[ 5 ]; 
		 f2 = 0;
		 }
		 else{
		 aux = fila[ f2+1 ]; 
		 fila[f2+1] = 0;
		 f2++;
		 cout<<"Elemento retirado da fila 2: "<<aux<<endl; 
		 }
		 if ( f2 == r2 ){
		 f2 = r2 = TAM -11;
		 }	
	 }
	 if (valor%7==0){
	 	if ( f3 == tamanho3 ){
		 valor = fila[ 10 ]; 
		 f3 = 0;
		 }
		 else{
		 aux = fila[ f3+1 ]; 
		 fila[f3+1] = 0;
		 f3++;
		 cout<<"Elemento retirado da fila 3: "<<aux<<endl; 
		 }
		 if ( f3 == r3 ){
		 f3 = r3 = TAM -6;
		 }	
	 }
}
 
}
 void mostrarfilas(void){
 	for (int i = 0; i<5; i++){
        cout<<"fila1["<<i+1<<"]:"<<fila[i]<<"\n";
    }
    for (int i = 5; i<10; i++){
        cout<<"fila2["<<i+1<<"]:"<<fila[i]<<"\n";
    }
    for (int i = 10; i<15; i++){
       cout<<"fila3["<<i+1<<"]:"<<fila[i]<<"\n";
    }
    cout<<"\n";
 }
int main(){
	
	inicializacao();
int cont = 0;
while(cont <40){
	if(cont ==39){
	mostrarfilas();
	exit(0);	
	}else{
	cout<<"Digite um valor: ";
	cin>>valor;
	if((valor >=1) && (valor <=30)){
	inclusao(valor);
	cont++;
	retirada();
	mostrarfilas();
	}else{
	cout<<"Valor Invalido\n";	
	}
	}
}
	
	
}
