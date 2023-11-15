
#include <stdio.h>

int main()
{
    float valor1=0;
    float valor2=0;
    
    while(valor2==0){
        printf("Digite um valor: ");
        scanf("%f",&valor1);
        
        printf("Digite outro valor: ");
        scanf("%f",&valor2);
        
        if(valor2==0){
            printf("Valor invalido\n");
            printf("Digite um novo valor2: ");
            scanf("%.2f",&valor2);
        }
        
    }
    
    printf("Resultado da divisao de %i/%i e %i\n",valor1,valor2,(valor1/valor2));
    printf("FIM DO PROGRAMA\n");
    return 0;
}
