#include <stdio.h>

int main(){
    int n;
    printf("digite um número inteiro: ");
    scanf("%i", &n);
    if(n % 2 == 0){
        printf("%i é par", n);
    }
    else{
        printf("%i é impar", n);
    }
}
