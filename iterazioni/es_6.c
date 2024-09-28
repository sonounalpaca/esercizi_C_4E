/*
Dato N un numero intero positivo, generare e visualizzare in ordine
crescente i numeri compresi maggiori uguali di -N e minori uguali di N.
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    
    int n1, n2, numero;
    do
    {
        printf ("Inserisci un numero: ");
        scanf ("%d", &n2);

    } while (n2 <= 0);

    n1 = -n2;
    numero = n1;
    do
    {
        printf ("%d ", numero);
        numero = numero + 1;
       
    } while (numero <= n2);

    return 0;
}
