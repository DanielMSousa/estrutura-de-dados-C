#include <stdio.h>

int main(){
    double n1, n2, n3, n4, media;
    printf("insira a nota 1: ");
    scanf("%lf", &n1);
    
    printf("insira a nota 2: ");
    scanf("%lf", &n2);
    
    printf("insira a nota 3: ");
    scanf("%lf", &n3);
    
    media = (n1 + n2 + n3)/4;
    
    if(media >= 7){
        printf("aprovado com media %lf", media);       
    }
    else if(media < 7){
        n4 = (28 - n1 - n2 - n3);
        if(n4 <= 10){
            printf("Em recuperacao, precisa tirar %lf na prova 4", n4);
        }
        else{
            printf("Reprovado...");
        }
    }
    
    return 0;
}
