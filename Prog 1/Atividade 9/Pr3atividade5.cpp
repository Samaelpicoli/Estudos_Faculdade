#include <iostream>
using namespace std;
int main(){
	int m1[3][3];
	int m2[3][3];
	int i, j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			m1[i][j] = i+1;
			m2[i][j] = j+1;
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<m1[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<endl;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<m2[i][j]<<" ";
		}
		cout<<endl;
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(m1[i][j]==m2[i][j]){
				m1[i][j]=0;
			}else{
				m2[i][j] = 1;
			}
		}
	}
	cout<<endl;
	cout<<endl;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<m1[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<endl;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<m2[i][j]<<" ";
		}
		cout<<endl;
	}	
}
