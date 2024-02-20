#include<iostream>
using namespace std;
int main(){
	
	int cont1=0, cont2=0, cont3=0, cont4=0, x;
	
	while(true){
		cin>>x;
		
		if((x<0) || (x>100)){
			cout<<"[ 0, 25 ): " << cont1<<endl;
			cout<<"[ 25, 50 ): " << cont2<<endl;
			cout<<"[ 50, 75 ): " << cont3<<endl;
			cout<<"[ 75, 100 ]: " << cont4<<endl;
			
		}
		
		if((x>=0) && (x<25))
			cont1++;
			
		if((x>=25)&&(x<50))
			cont2++;
			
		if((x>=50)&&(x<75))
			cont3++;
		
		if((x>=75)&&(x<=100))
			cont4++;
	}
	
}
