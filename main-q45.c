
#include <stdio.h>

int main()
{
    int valor1=0;
    int valor2=0;
    
    while(valor2==0){
        printf("Digite um valor: ");
        scanf("%i",&valor1);
        
        printf("Digite outro valor: ");
        scanf("%i",&valor2);
        
        if(valor2==0){
            printf("Repita\n");
            printf("Digite um novo valor2: ");
            scanf("%i",&valor2);
        }
        
    }
    
    printf("Resultado da divisao de %i/%i e %i\n",valor1,valor2,(valor1/valor2));
    printf("FIM DO PROGRAMA\n");
    return 0;
}
