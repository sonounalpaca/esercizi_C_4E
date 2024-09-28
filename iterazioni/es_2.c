/*
Dato N un numero intero positivo, generare e visualizzare in ordine crescente i primi N numeri
interi positivi.
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int n, numero = 0;
    do
    {
        printf ("Inserisci un numero: ");
        scanf ("%d", &n);

    } while (n <= 0);

    for (int i = 0; i < n; i++)
    {
        numero = numero + 1;
        printf ("%d ", numero);

    }
        
    return 0;
}
