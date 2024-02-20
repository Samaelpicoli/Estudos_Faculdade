#include <iostream>
using namespace std;
int main(){
	int x, a, cont = 0;
	cout<<"Digite 10 numeros : "<<endl;
	for(x=0; x<10; x++){
		cin>>a;
		if ((a>10) && (a<20)){
			cont++;
		}
	}
	cout<<" Numeros que estao entre 10 e 20 : "<<cont<<endl;
	
}

