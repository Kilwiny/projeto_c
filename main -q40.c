/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char nome[50];
    int quantidade;
    float preco_unitario,desconto,total;
    
    printf("Digite o nome: ");
    scanf("%s", nome);
    
    printf("Digite a quantidade: ");
    scanf("%i",&quantidade);
    
    printf("Digite o preco unitario: ");
    scanf("%f",&preco_unitario);
    
    total = quantidade * preco_unitario;
    
    if(quantidade<=5){
        desconto = total * 0.02;
    }else if(quantidade>5 && quantidade<=10){
        desconto = total * 0.03;
    }else{
        desconto = total * 0.05;
    }
    
    float total_pagar = total - desconto;
    
    printf("Total a pagar: %.2f\n",total_pagar);
    

    return 0;
}/*63,75  1,275*/
