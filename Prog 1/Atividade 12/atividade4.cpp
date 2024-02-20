#include <stdio.h>
#include <stdlib.h>
typedef struct no {
  int info;
  struct no* prox;
}no;



no* cria_no (void) {
  return NULL;
}



no* inserir (no* lst, int v) {
  no* novo = (no*) malloc(sizeof(no));
  novo->info = v;
  novo->prox = lst;
  return novo;
}


 void Comparar(no *l1, no *l2) 
 { 
    while (l1->prox!= NULL){
    l1= l1;
     while(l2->prox!= NULL){
        l2= l2;
          if(l1->info == l2->info){

                 printf("Iguais\n\n");
          } else
                  printf("Diferentes\n\n");
    system("pause");    
    }     

}

}
int main (void)
{
  no* lst1; 
  no* lst2; 

  lst1 = cria_no(); 
  lst1 = inserir(lst1, 21); 
  lst1 = inserir(lst1, 45); 
  lst1 = inserir(lst1, 10); 

  lst2 = cria_no(); 
  lst2 = inserir(lst2, 21); 
  lst2 = inserir(lst2, 45); 
  lst2 = inserir(lst2, 5); 


    printf("\nAS LISTAS SAO:\n");

    Comparar(lst1,lst2);


}

