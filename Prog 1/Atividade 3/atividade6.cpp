#include <iostream>
#define tam 100  
 using namespace std;  
 int main(){ 
 int x[tam];  
 int i = 0;  
 	for ( i=0; i<tam; i++){  
	cout<<"Digite um numero : "<<endl;
	cin>>x[i]; 
	}
	
	for (i=0; i<tam;i++) {
		cout<<"["<<x[i]<<"] "<<endl;
	}
	for (i=0; i<tam;i++) {
		if (x[i]<0){
		x[i] = 1;	
		}
		
	}
	cout<<"Vetores convertidos (se preciso) : "<<endl;
	for (i=0; i<tam;i++) { 
	    cout<<"["<<x[i]<<"] ";
		
	}
	
}
  

