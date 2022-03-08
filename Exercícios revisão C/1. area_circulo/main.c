#include <stdio.h>

float pi = 3.14159;

float calcula_area(float raio){
    return pi * (raio * raio);
}

int main(){
    float raio = -1;
    while(raio < 0){
        printf("Insira o raio do circulo: ");
        scanf("%f", &raio);
    }
    printf("%f", calcula_area(raio));
    return 0;
}
