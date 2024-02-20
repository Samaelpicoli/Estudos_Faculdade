#include <iostream>
using namespace std;
int main(){
	int n[48000];
	int i = 0, cont = 0;
	for(i=0;i<48000;i++){
		if((i%2 != 0) && (i%3 != 0) && (i%5 != 0)){
			cont++;	
		}
	}
	cout<<"Total de numeros nao divisiveis por 2, 3 e 5 entre 1 e 48000 : "<<cont<<endl;
}
