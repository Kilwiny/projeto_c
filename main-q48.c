
#include <stdio.h>

int main()
{
    float av1=0;
    float av2=0;
    
    do{
        printf("Digite a primeira nota: ");
        scanf("%f",&av1);
        
        printf("Digite a segunda nota: ");
        scanf("%f",&av2);
    }while(av1<0 || av1>10 || av2<0 || av2>10);
    
    printf("\nMedia final: %.2f",(av1+av2)/2);
    
    return 0;
}
