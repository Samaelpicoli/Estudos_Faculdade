#include<iostream>
using namespace std;

int main(){
	
	int n1[4][6], n2[4][6], m1[4][6], m2[4][6];
	
	for(int i=0;i<4;i++){
		for(int j=0;j<6;j++){
			cin>>n1[i][j];
		}
	}
	
	cout<<"============"<<endl;
	
	for(int i=0;i<4;i++){
		for(int j=0;j<6;j++){
			cin>>n2[i][j];
		}
	}
	
	for(int i=0;i<4;i++){
		for(int j=0;j<6;j++){
			m1[i][j] = n1[i][j] + n2[i][j];
		}
	}
	
	for(int i=0;i<4;i++){
		for(int j=0;j<6;j++){
			m2[i][j] = n1[i][j] - n2[i][j];
		}
	}
	
	
	for(int i=0;i<4;i++){
		for(int j=0;j<6;j++){
			cout<< m1[i][j] << " ";
		}
		cout<<endl;
	}
	
	for(int i=0;i<4;i++){
		for(int j=0;j<6;j++){
			cout<< m2[i][j] << " ";
		}
		cout<<endl;
	}
	
	
}
