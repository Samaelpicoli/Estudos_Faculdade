#include <iostream> 
using namespace std; 
int main () { 

int num[4],i,menor,aux,maior, menor2; 

for(i=0;i<4;i++) { 

	cout<< "digite um numero: "; 
		cin>>num[i]; 
	
}	menor=num[0]; 
	maior=num[0];
for(i=0;i<4;i++){ 
	if(num[i]<menor){ 
		menor=num[i]; 
			aux=i; 
	} 
				if(num[i]>maior) { 
					maior=num[i]; 	
				}
}
for(i=0;i<4;i++){ 
	if((num[i]<maior) && (i!=aux)){ 
		menor2=num[i]; 
			maior=menor2;
	}
}
			cout<<"Valor total: "<<menor+maior;

	}
