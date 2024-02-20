#include <iostream>
#define tam 200
using namespace std;
int main(){
	int m[tam][tam];
	int i, j, sa = 0, sb = 0, sc = 0, sd = 0;
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
			cout<<"Digite o numero para ["<<i+1<<","<<j+1<<"] : ";
			cin>>m[i][j];
		}
	}
	cout<<endl;
	cout<<endl;
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
			cout<<m[i][j]<< " ";
			}
		cout<<endl;
		cout<<"";
	}
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
			if(i<j){
				sa = sa + m[i][j];
			}
			if(i>j){
				sb = sb + m[i][j];
			}
			if(j<=tam-i-2){
				sc = sc + m[i][j];
			}
			if(j>=tam-i){
				sd = sd + m[i][j];
				}
		}
	}
	cout<<"A soma dos elementos acima da diagonal principal : "<<sa<<endl;
	cout<<"A soma dos elementos abaixo da diagonal principal : "<<sb<<endl;
	cout<<"A soma dos elementos acima da diagonal secundaria : "<<sc<<endl;
	cout<<"A soma dos elementos abaixo da diagonal secundaria : "<<sd<<endl;
	
}
