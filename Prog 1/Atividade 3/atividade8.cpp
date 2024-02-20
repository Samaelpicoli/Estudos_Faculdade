#include <iostream>
#define tam 50
using namespace std;
int main(){
	int c[tam];
	int maior, i = 0, j;
	for(i=0; i <tam; i++){
		cout<<"Digite um numero : "<<endl;
		cin>>c[i];
		 }
		maior = c[0];
		
		for(j = 0; j <tam; j++){
			if(c[j]>maior){
				maior = c[j];
			}
		}
		cout<<endl;
		cout<<"["<<maior<<"]"<<" E O MAIOR."<<endl;
}
