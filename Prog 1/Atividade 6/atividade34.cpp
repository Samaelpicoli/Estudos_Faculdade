#include<iostream> 
#define tam 15
using namespace std; 
int main () { 
int matriz[tam][tam],l=0,c=0, soma_cima; 


	for(l=0;l<tam;l++) { 
	for(c=0;c<tam;c++) { 
	cout<<"Digite respectivamente linha "<<l+1<<"  e coluna: "<<c+1<<" "; 
	cin>>matriz[l][c];
	
}
} 

cout<<"\n";
for(l=0;l<tam;l++) { 
for(c=0;c<tam;c++) { 
	cout<<"  "<<matriz[l][c]; 
}
	cout<<"\n";
}
		
for(l=0;l<tam;l++) { 
for(c=0;c<tam;c++) { 
	if(l<c && l+c < tam-1 ){
		
	soma_cima=soma_cima+matriz[l][c];
}
}
}
cout<<"\n A soma dos numeros ACIMA da matriz principal e segundaria sao: "<<soma_cima<<"\n";
//B
		soma_cima=0;
for(l=0;l<tam;l++) { 
for(c=0;c<tam;c++) { 
	if(l>c && l+c > tam-1 ){
		
	soma_cima=soma_cima+matriz[l][c];
}
}
}
cout<<"\n A soma dos numeros ABAIXO da matriz principal e segundaria sao: "<<soma_cima<<"\n"; 

	soma_cima=0; 
	//C
	for(l=0;l<tam;l++) { 
for(c=0;c<tam;c++) { 
	if(l<c && l+c >tam -1 ){
		
	soma_cima=soma_cima+matriz[l][c];
}
}
}
cout<<endl<< "Soma dos elementos que estão simultaneamente acima da diagonal principal e abaixo da diagonal secundria: "<< soma_cima<<endl;
	
		soma_cima=0; 
	
	for(l=0;l<tam;l++) { 
	for(c=0;c<tam;c++) { 
	if(l>c && l+c <tam -1 ){
		
	soma_cima=soma_cima+matriz[l][c];
}
}
}
cout<< "\n Soma dos elementos que estão simultaneamente acima da diagonal secundária e abaixo da diagonal principal: "<< soma_cima<<"\n";

}

