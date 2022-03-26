#include <stdio.h>
#include <string.h>

int main(){
    int tamanho, i, j, contador, japassou;
    char string[] = "agatha";
    printf("%s\n", string);
    for(i=0; i < strlen(string); i++){
        contador = 0;
        japassou = 0;
        for(j = 0; j < strlen(string); j++){
            if(string[i] == string[j]){
                contador++;
                if(i > j){
                    japassou = 1;
                }
            }
        }
        if(japassou == 0){
            printf("a letra %c aparece %d vezes\n", string[i], contador);
        }
    }
    return 0;
}