/*
Dato N un numero intero positivo, generare e visualizzare il numero 
successivo.
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int x, successivo;

    do
    {
        printf ("Inserisci un numero: ");
        scanf ("%d", &x);

    } while (x <= 0);
    
    successivo = x + 1;
    printf ("\nNumero successivo: %d", successivo);

    return 0;
}
