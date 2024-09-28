/*
Dato N un numero intero positivo, generare e visualizzare in ordine crescente i numeri dispari
minori o uguali a N.
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    
    int n, numero = 1;
    do
    {
        printf ("Inserisci un numero: ");
        scanf ("%d", &n);

    } while (n <= 0);

    do
    {
        printf ("%d ", numero);
        numero = numero + 2;

    } while (numero <= n);

    return 0;
}
