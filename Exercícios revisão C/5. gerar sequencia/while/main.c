#include <stdio.h>

int main(){
    int inicial, final;
    printf("insira o numero inicial: ");
    scanf("%d", &inicial);
    printf("insira o numero final: ");
    scanf("%d", &final);
    
    if(inicial < final){
        while(inicial <= final){
            printf(" %d ", inicial);
            inicial++;
        }
    }
    else{
        printf("Há algo errado, o número inicial é maior ou igual ao final...");
    }
    return 0;
}
