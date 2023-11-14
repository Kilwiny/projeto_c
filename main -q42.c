/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
  char codigo[5];
  int idade,tempo_de_trabalho;
  
  printf("Digite o codigo [5 digitos]: ");
  scanf("%s",codigo);
  
  printf("Digite a sua idade: ");
  scanf("%i",&idade);
  
  printf("Digite o seu tempo de trabalho: ");
  scanf("%i",&tempo_de_trabalho);
  
  
  if(idade>=65){
      printf("Requer aposentaria\n");
  }else if(tempo_de_trabalho>=30){
      printf("Requer aposentaria\n");
  }else if(idade>=60 && tempo_de_trabalho>=25){
      printf("Requer aposentaria\n");
  }else{
      printf("Nao requer\n");
  }
}
