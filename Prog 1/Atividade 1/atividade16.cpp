#include <iostream> 
using namespace std; 
int main () { 

float nota1, nota2, nota3, media; 
int aluno; 
while(true){
	
	

	

cout<< "Numero do aluno: "<<endl; 
cin>>aluno; 
cout<<"Nota 1: "<<endl; 
cin>>nota1; 
cout<<"Nota 2: "<<endl; 
cin>>nota2; 
cout<<"Nota 3: "<<endl; 
cin>>nota3;

if ( (nota1>nota2) && (nota1>nota3) ) { 
media = (nota1 * 4 + nota2 * 3 + nota3 * 3) / 10; 
 cout<<media<<endl; 
}
 if ( (nota2>nota1) && (nota2>nota3) ) { 
media = (nota1 * 3 + nota2 * 4 + nota3 * 3) / 10; 
 cout<<media<<endl;  
}
 if ( (nota3>nota1) && (nota3>nota2) ) { 
media = (nota1 * 3 + nota2 * 3 + nota3 * 4) / 10; 
 cout<<media<<endl; 
 
} 
 if (nota1 = nota2 = nota3){ 
 media = (nota1 * 4 + nota2 * 3 + nota3 * 3) / 10; 
 cout<<media<<endl; 
 }

 if (media >=5){ 
 cout<< "Aluno "<<aluno<<" APROVADO. "<<endl;
 } 
 if (media <5) { 
 cout<< "Aluno "<<aluno<<" REPROVADO. "<<endl; 
}
 };
 }


