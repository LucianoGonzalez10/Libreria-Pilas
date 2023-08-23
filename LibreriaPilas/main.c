#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int valores[100];
    int posTope; //posición de nuevo tope, lugar en donde se almacenará el nuevo valor
} Pila;

int main()
{
    printf("Hello world!\n");
    return 0;
}

void inicpila(Pila * A)
{
    A->posTope = 0;
}

void apilar(Pila * A, int dato)
{
    A->valores[A->posTope] = dato;
    A->posTope = A->posTope + 1;
}

void leer(Pila * A)
{
    int dato = 0;
    printf("Ingrese el numero a apilar: \n");
    scanf("%i", &dato);

    apilar(A, dato);
}

int desapilar(Pila * A)
{
    int tope = -1;
    if(A->posTope > 0)
    {
        tope = A->valores[(A->posTope)-1];
        A->posTope = A->posTope - 1;

    }
    else
    {
        printf("La pila esta vacia. \n");
    }
    return tope;
}

int tope(Pila * A)
{
    int tope = -1;
    if(A->posTope > 0)
    {
        tope = A->valores[(A->posTope) -1];
    }
    else
    {
        printf("La pila esta vacia. \n");
    }
    return tope;
}

void mostrar(Pila * A)
{
    int i = 0;
    printf("BASE --------------------tope \n");

    while(i < A->posTope)
    {

        printf(" %i ", A->valores[i]);
        i++;
    }

    printf("TOPE -------------------tope \n");
}

int pilavacia(Pila * A){
    int flag = 0;
    if(A->posTope == 0){
        flag = 1;
    }
    return flag;
}
