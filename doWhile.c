
#include <stdio.h>

int main()
{
    float av1=0, av2=0;
    char opc='s';
    
    do{
        printf("Digite a av1: ");
        scanf("%f",&av1);
        
        printf("Digite a av2: ");
        scanf("%f",&av2);
        
        if(av1<=10 && av1>0 && av2<=10 && av2>0){
            printf("Digite a opção: ");
            scanf("%s",&opc);
        }else{
            printf("Invalido\n");
        }
        
        
    }while(opc!='n');
    
    printf("Média avaliativa: %.2f\n",(av1+av2)/2);
    return 0;
}
    