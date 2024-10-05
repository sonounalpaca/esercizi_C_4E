/*
Dato un numero N calcolare e visualizzare tutte le coppie di numeri minori di N che
danno per somma il numero stesso. Non considerare la proprietà commutativa. 
*/


#include <stdio.h>

int main(int argc, char *argv[])
{
    int numero, n1, n2;

   do
    {
        printf("Inserire un numero: ");
        scanf ("%d", &numero);

    } while (numero < 0);

    n1 = 0;
    n2 = numero;

    do
    {
        if ((n1 + n2) == numero)
        {
            printf ("%d + %d = %d\n", n1, n2, numero);
        }
        n1 = n1 + 1;
        n2 = n2 - 1;

    } while (n2 != 0);
    
    
    return 0;  

}