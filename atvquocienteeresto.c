#include <stdio.h>

int main(){
    int n1,  n2, quociente, resto;
    scanf("%i%i",&n1, &n2);

    quociente = n1 / n2;
    resto = n1 % n2;

    printf("O quociente desses dois números é: %i, e o resto é: %i",quociente, resto);
return 0;
}
