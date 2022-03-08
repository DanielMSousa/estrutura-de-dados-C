#include <stdio.h>
#include <math.h>

double retorna_delta(double a, double b, double c){
    double delta;
    delta = (b * b) - 4 * a * c;
    return delta;
}

double retorna_raizes(double a, double b, double delta, double *x1, double *x2){
    *x1 = (-b + sqrt(delta))/(2*a);
    *x2 = (-b - sqrt(delta))/(2*a);
}

int main(){
    double a, b, c, delta;
    double x1, x2;
    
    printf("ax**2 + b*x + c\n");
    printf("insira o valor de a: ");
    scanf("%lf", &a);
    printf("insira o valor de b: ");
    scanf("%lf", &b);
    printf("insira o valor de c: ");
    scanf("%lf", &c);
    
    if(a > 0){
        delta = retorna_delta(a, b, c);
        if(delta > 0){
            retorna_raizes(a, b, delta, &x1, &x2);
            printf("x1 vale %lf e x2 vale %lf", x1, x2);
        }
        else if(delta == 0){
            retorna_raizes(a, b, delta, &x1, &x2);
            printf("As duas raizes x1 e x2 valem %lf", x1);
        }
        else{
            printf("Equação sem raizes reais!");
        }
    }
    else{
        printf("a é igual a 0, a equação não é de segundo grau!");
    }
    return 0;
}
