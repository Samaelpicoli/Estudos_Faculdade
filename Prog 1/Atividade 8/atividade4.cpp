#include<iostream>
using namespace std;

int main(){
	 int m[4][4],cont=0;
	 
	 float media=0 ,somatorio=0;
	 
	 for(int i=0;i<4;i++){
	 	for(int j=0;j<4;j++){
	 		cout<<"Digite um numero : "
	 		cin>>m[i][j];
		 }
	 }
	 cout<<endl<<endl;
	for(int i=0;i<4;i++){
	 	for(int j=0;j<4;j++){
	 		cout<<m[i][j]<<" ";
		 }
		 cout<<endl;
	 }
	 
	cout<<"-------media------"<<endl;
	for(int i=0;i<4;i++){
	 	for(int j=0;j<4;j++){
	 		if(i%2==0){
	 			somatorio=somatorio+m[i][j];
	 			cont++;
			 }
	 		
		 }
	 }
	 
	 media=somatorio/cont;
	 
	 cout<<"a media foi: "<<media;
}
