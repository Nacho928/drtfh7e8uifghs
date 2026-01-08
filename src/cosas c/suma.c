#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    int b;
    printf("Introduce un numero");
    scanf("%d", &a);
    printf("Introduce otro numero");
    scanf("%d", &b);
    printf("La suma de %d y %d es  %d", a, b, a + b);
    //que se cierre tras que el usuario pulse enter
    system("pause");
    return 0;
}