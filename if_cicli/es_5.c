/*
Progettare un algoritmo che effettui le seguenti operazioni:

• continui a leggere da tastiera una serie di terne di valori interi A ,
B e C finchè non vengono inseriti dei valori tali per cui A + B < C
• conteggi il numero di volte in cui la differenza tra A e B è pari, dispari, e quando è nulla
• prima di terminare, visualizzi il valore dei valori conteggiati
*/

#include <stdio.h>

int main()
{
    
    int a, b, c;
    int pari, dispari, nulla;

    do
    {
        printf ("Inserire primo numero: \n");
        scanf ("%d", &a);
        printf ("Inserire secondo numero: \n");
        scanf ("%d", &b);
        printf ("Inserire terzo numero: \n");
        scanf ("%d", &c);

        if ((a - b) == 0)
        {
            nulla = nulla + 1;
        }
        else if ((a - b)%2 == 0)
        {
            pari = pari + 1;
            
        }
        else
        {
            dispari = dispari + 1;
        }

    } while ((a + b) >= c);
    
    printf ("\nPari: %d\n", pari);
    printf ("Dispari: %d\n", dispari);
    printf ("Nulli: %d\n", nulla);

    return 0;
}