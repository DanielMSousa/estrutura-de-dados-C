#include <stdio.h>

int main(){
    int x, i, primo;
    printf("insira um numero: ");
    scanf("%d", &x);
    i = x - 1;
    primo = 1;
    while(i != 1){
        printf("valor de i: %d\n", i);
        if(x % i == 0){
            primo = 0;
            break;
        }
        i--;
    }
    if(primo == 0){
        printf("%d nao e um numero primo!", x);
    }
    else{
        printf("%d e um numero primo!", x);
    }
    return 0;
}
