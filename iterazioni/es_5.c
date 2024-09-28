/*
Dati due numeri interi positivi N1 e N2 con N2>N1, generare e
visualizzare in ordine crescente i numeri interi compresi
nell'intervallo chiuso [N1,N2]. 
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int n1, n2, numero;
    do
    {
        printf ("Inserisci un primo numero: ");
        scanf ("%d", &n1);
        printf ("Inserisci un secondo numero: ");
        scanf ("%d", &n2);

    } while (n1 >= n2);

    numero = n1;
    do
    {
        printf ("%d ", numero);
        numero = numero + 1;
       
    } while (numero <= n2);
    

    return 0;
}
