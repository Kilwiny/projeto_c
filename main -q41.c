/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float n1,n2,n3,media_ex, media_aprov;
    
    printf("Digite as notas da N1, N2, N3 e Nota dos exercicios: ");
    scanf("%f%f%f%f",&n1,&n2,&n3,&media_ex);
    
    media_aprov = (n1 + (n2*2) + (n3*3) + media_ex)/7;
    
    if(media_aprov>=9){
        printf("A\n");
    }else if(media_aprov>=7.5 && media_aprov<9){
        printf("B\n");
    }else if(media_aprov>=6 && media_aprov<7.5){
        printf("C\n");
    }else{
        printf("D\n");
    }

    return 0;
}
