#include <iostream>
#define tam 80
using namespace std;
int main(){
int n[tam];
int menor, i = 0, pv;
	for(i = 0; i<tam; i++){
		cout<<"Digite um numero : "<<endl;
		cin>>n[i];
    }
    	for (i=0;i<tam;i++){ 
		cout<<" [ " <<n[i]<<" ] "<<endl;
		} 			
	  	cout<<endl;
    menor = n[i];
    for(i = 0; i<tam; i++){
    	if(n[i]< menor){
    		menor=n[i];
    		pv = i;
		}
	}
	
		cout<<"O menor numero e : "<<menor<<" e sua posicao : ["<<n[i]<<"]"<<endl;
}
