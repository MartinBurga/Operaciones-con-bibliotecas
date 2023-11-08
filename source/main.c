#include <stdio.h>
#include "../librerias/archivo.h"
#include "../librerias/archivodos.h"
#include "../librerias/archivotres.h"
#include "../librerias/archivocuatro.h"

int main(int argc, char const *argv())
{
    int a;
    int b;
    printf("Ingrese un valor.\n");
    scanf("%d", &a);
    printf("Ingrese un valor 2.\n");
    scanf("%d", &b);
    printf("El resultado de la suma es: %d\n", sumar(a,b));
    printf("El resultado de la resta es: %d\n", resta(a,b));
    printf("El resultado de la multiplicacion es: %d\n", multiplicar(a,b));
    printf("El resultado de la division es: %d\n", division(a,b));
    return 0;
}
