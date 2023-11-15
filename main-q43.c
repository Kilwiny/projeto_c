/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a, b,c;
    int valores[5][3]={{1,2,3},{3,4,5},{2,2,4},{4,4,4},{5,3,3}};
    
    for(int l=0; l<5;l++){
        a = valores[l][0];
        b = valores[l][1];
        c= valores[l][2];
        
        if(a<(b+c)&& b<(a+c)&&c<(a+b)){
            if(a==b && c==b){
                printf("%d | %d | %d | Triangulo Equilatero\n",a,b,c);
            }else{
                if(a==b && b==c && a==c){
                    printf("%d | %d | %d | Triangulo Isosceles\n",a,b,c);
                }else{
                    printf("%d | %d | %d | Triangulo Escaleno\n",a,b,c);
                }
            }
        }else{
            printf("| Nao e possivel formar um triangulo |\n");
        }
    }
    

    return 0;
}
