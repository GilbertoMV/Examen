#include <stdio.h>

int exponenteEntero(int entero, int exponente);

int main()
{
    int entero, exponente, resultado;
    
    printf("Hola, ingrese el numero que desea elevar: ");
    scanf("%d",&entero);
    printf("Ahora ingrese el exponente: ");
    scanf("%d",&exponente);
    
    resultado = exponenteEntero(entero, exponente);
    
    printf("El resultado de elevar %d^%d es: %d",entero, exponente, resultado);
    return 0;
}

int exponenteEntero(int entero, int exponente) {
    
    int resultado;
    
    if (exponente == 0)
        resultado=1;
    else if (exponente > 0) {
        resultado = entero * exponenteEntero(entero, exponente - 1);
    }
    else if (exponente < 0)
    {
        resultado = 1 / entero * exponenteEntero(entero, exponente + 1);
    }   
    return resultado;
}