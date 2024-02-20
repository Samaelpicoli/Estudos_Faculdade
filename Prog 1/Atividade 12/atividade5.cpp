#include<iostream>
using namespace std;
#define TAMANHO 100

struct nodo {
    int elo_a;
    int info;
    int elo_p;
}; 

int disp, nc,cont=0,liar=0,ultimo;
float valor;
 
struct nodo lista[ TAMANHO ]={-2};
 
void cria_pnd( void ){
    int i = 0;
    while ( i < TAMANHO -1 ){
        lista[ i ].elo_p = i+1;
        i++;
    }
    lista[ TAMANHO-1 ].elo_p = -1;
    disp = 0;
}
 
int obtem( void ){
    int aux;
    if ( disp == -1 )
        return -1;
    aux = disp;
    disp = lista[ disp ].elo_p;
    return aux;
}
 
 
void cria_nc( void ){ 
    nc=obtem();
    if ( nc == -1 ){
        printf("\nNao pode criar NC. Programa abortado!");
        exit( 1 );
    }
    lista[ nc ].elo_a = nc;
    lista[ nc ].elo_p = nc;
}
 
 
void consulta( int valor ){ 
    int indice;
    if ( lista[ nc ].elo_p == nc )
        printf("\nLista vazia");
    else{
        indice = lista[ nc ].elo_p;
    while( indice != nc ){
        if ( valor == lista[ indice ].info ) 
            break;
    indice = lista[ indice ].elo_p;
    }
    if ( indice == nc )
        printf("\nValor nao encontrado");
    else{
}
       
    }
}
 
void inclusao( int valor ){
    int post, indice;
    indice = obtem();
    if ( indice == -1 )
        printf("\nOVERFLOW");
    else{
        lista[ indice ].info = valor;
        post = lista[ nc ].elo_p;
        while( post != nc ){
            if ( valor < lista[ post ].info )
                break;
            post = lista[ post ].elo_p;
        }
        lista[ indice ].elo_p = post;
        lista[ indice ].elo_a = lista[ post ].elo_a;
        lista[ lista[ indice ].elo_a ].elo_p = indice;
        lista[ lista[ indice ].elo_p ].elo_a = indice;
       
    }
}
 
void libera( int indice ){
    lista[ indice ].elo_p = disp;
    disp = indice;
    lista[indice].info= -1;
    
    for(int i=1;i<=cont;i++){
    	if(lista[i].info!=0){
    		liar=i;
		}
	}
	
}
 
void retirada( int valor ){
    int indice;
    if ( lista[ nc ].elo_p == nc )
        printf("\nUNDERFLOW");
    else{
        indice = lista[ nc ].elo_p;
        while( indice != nc ){
            if ( valor == lista[ indice ].info ) 
                break;
        indice = lista[ indice ].elo_p;
        }
        if ( indice == nc )
            printf("\nValor nao encontrado");
        else{
            lista[ lista[ indice ].elo_a ].elo_p = lista[ indice ].elo_p;
            lista[ lista[ indice ].elo_p ].elo_a = lista[ indice ].elo_a;
            libera( indice );
        }
    }
}
 
 
void verifica_Maior(void){
    int maior;
    maior=lista[1].info;
    
    for(int i=1;i<TAMANHO;i++){
        if(maior<lista[i].info)
            maior=lista[i].info;        
    }
    printf("\nMaior:%i",maior);
}
 
void verifica_Menor(void){
    int menor;
    menor=lista[1].info;
    int ultimo;
    
    for(int i=1;i<=cont ;i++){
    	if(menor == -1 && menor == 0){
    		menor=lista[i+1].info;
    		break;
		}
	}
    
    for(int i=1;i<TAMANHO;i++){
		if(menor>lista[i].info && lista[i].info!= -1 && menor!=-1 && lista[i].info!= 0){
			menor=lista[i].info;    
		}                
    }
    printf("\nMenor:%i",menor);
}
 
void calcula_Media(void){
    float soma=0;
    int contt=0;
   
    for(int i=0;i<TAMANHO;i++){
		if(lista[i].info!=0){
			ultimo=i;
		}
	}
	
    for(int i=1;i<=ultimo;i++){
    	if(lista[i].info != -1){
    		soma+=lista[i].info;
    		contt++;
		}
    }
    cout<<soma<<endl; 
    cout<<endl<<"A media eh: "<<soma/(contt)<<endl;
    contt=0;
}
 
void mostrar(void){
	
	for(int i=0;i<TAMANHO;i++){
		if(lista[i].info!=0){
			ultimo=i;
		}
	}
	
            printf("\n|Elo_a|INFO|Elo_b|");
    for(int i=0;i<=ultimo;i++){
    	if(lista[i].info != 0){
    		printf("\n| %i | %i | %i |",lista[i].elo_a,lista[i].info,lista[i].elo_p);
		}	
	}
}
 
int main(void){
    int op;
     
    cria_pnd();
    cria_nc();
    
    while(true){
    	cout<<"\n\n...MENU DE COMANDOS...\n";
    	 cout<<"1..INFORMAR VALOR:\n";
    	 cout<<"2..DELETAR VALOR:\n";
    	 cout<<"3..VER VETOR:\n";
    	 cout<<"4..VERIFICAR MAIOR:\n";
    	 cout<<"5..VERIFICAR MENOR:\n";
    	 cout<<"6..VERIFICAR MEDIA:\n";
    	 cout<<"7..SAIR..\n";
    	 cin>>op;
    	 switch(op){
    	 	case 1:
    	 		cout<<"Valor a ser inserido: ";
    	 		cin>>valor;
    	 		liar++;
    	 		inclusao(valor);
    	 		cont++;
    	 		break;
    	 	case 2:
    	 		cout<<"Valor a ser retirado: ";
    	 		cin>>valor;
    	 		retirada(valor);
    	 		cont--;
    	 		break;		
    		case 3: 
    			mostrar();
				break;
			case 4: 
				verifica_Maior();
				break;
			case 5:
				verifica_Menor();
				break;
			case 6:
				calcula_Media();
				break;
			case 7:
				exit(0);
				break;
			default:
				cout<<"VALOR INVALIDO, TENTE NOVAMENTE...\n";
		 }
	}
}
