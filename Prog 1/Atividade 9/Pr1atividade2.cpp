#include <iostream>
using namespace std;
int main(){
	int a = 3, b = 5, c = 10, d = 0;
	if(a<=c){
		if(b<c-1){
			d = d+1;
		}else{
			d = d + 2;
			a = a + 1;
			b = b + 1;
		}
	}else{
		a = (b - c)*d;
		b = a;
		c = d;
	}
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	cout<<d;
}

