# include <iostream> 
 #define tam 20
using namespace std; 
int main () { 


int auxiliar;
	int k[tam];
	int i=0;
	for(i=0; i<tam; i++){
		cout<<"Digite o valor : ";
		cin>>k[i];
	}
	for(i=0; i<tam; i++){
		cout<<"  "<<k[i];
	}  
	cout<<endl;
	for(i=0; i<10; i++){
	 
			j = k[i]; 
			k[i] = k[i+10] ;
			k[i + 10] = j ; 
		
	}
	cout<<endl;
	cout<<endl;  
	for(i=0;i<tam; i++){ 
		cout<<"  "<<k[i]; 
	}
			
}
