#include <iostream>
using namespace std; 


int main(){
  int num_filhos, num_salarios, num_pessoas, pessoas_salarios_ate_400;
  float media_salario, media_filhos, salario, maior_salario, porcentagem_salarios_ate_400;

  num_filhos = 0, num_salarios = 0, num_pessoas = 0, pessoas_salarios_ate_400 = 0;
  maior_salario = 0.0, media_salario = 0.0,  media_filhos = 0.0;

  while(true){ 
    cout<<"Digite  salario. Digite valor negativo para salario quando desejar terminar."<<endl;
    cin>> salario;
    if(salario <0){
	
      break;} 
      cout<< "Digite numero de filhos : "<<endl;
    cin>> num_filhos;
    num_pessoas++;
    if (salario > maior_salario) maior_salario = salario;
    if (salario <= 400.0) pessoas_salarios_ate_400++;
    media_salario += salario;
    media_filhos += num_filhos;
    
  }
  if (num_pessoas)  media_salario = media_salario / num_pessoas;
  if (num_pessoas)  media_filhos = media_filhos / num_pessoas;
  if (num_pessoas) porcentagem_salarios_ate_400 = (pessoas_salarios_ate_400 / (float)num_pessoas) * 100.0;

  cout<<"A media do salario dos socios : "<< media_salario<<endl;
  cout<<"A media do numero de filhos : "<< media_filhos<<endl;
  cout<<"O maior salario : "<< maior_salario<<endl;
  cout<<"O percentual de pessoas com salario ate 400 reais e de : "<< porcentagem_salarios_ate_400<<" Porcento"<<endl;

  return 0;
}
