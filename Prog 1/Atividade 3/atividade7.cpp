#include <iostream> 
#define tam 10
using namespace std; 
int main () { 
 int i, v[tam], cont=0; 
 
    for (i=0;i<tam;i++) {
        
        cout<<"O valor 'i' : "<<i<<" esta sendo salva no v["<< i<<"] : ";
        cin>>v[i];
	} 
		
	for (i=0;i<tam;i++){ 
		cout<<"[" <<v[i]<<"]";
	} 			cout<<endl; 
	  			cout<<endl;
    for (i=0;i<tam;i++) { 
    	if(v[i]<0){
    		cont++;
    		
    		cout<<"O valor "<<v[i] <<" = negativo, e a sua posicao : ["<< i<<"]"<<endl; 
		}
	}
}
