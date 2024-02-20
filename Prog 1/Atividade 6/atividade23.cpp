#include <iostream>
using namespace std;
int main()
{
    int n, k[15],d,EhPrimo,resto;
    
   
	 for (n=0;n<15;n++) {

 		cout<<"Digite um numero : ";
    	cin>>k[n];
	}
	for (n=0;n<15;n++) {
		d = 2;
		EhPrimo = 1;
    	if (k[n] <= 1) {
			EhPrimo = 0;

	}


    while (EhPrimo == 1 && d <= k[n] / 2) {
		resto = k[n] % d;
		if (resto == 0)
	    	EhPrimo = 0;
			d = d + 1;
    }

    if (EhPrimo == 1){
	
	cout<<endl<< k[n]<<" NUMERO PRIMO.";
	}
	}
    return 0;
}
