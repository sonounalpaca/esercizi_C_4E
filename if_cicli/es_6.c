/*
Progettare un algoritmo che effettui le seguenti operazioni:
• legga da tastiera una coppia di valori interi A e B con A<B;
• continui a leggere da tastiera una serie di valori interi, terminando 
quando il valore letto è al di fuori dell’intervallo [A, B];
• conteggi la media dei valori letti;
• prima di terminare, stampi il valore calcolato.
*/

#include <stdio.h>

int main()
{
    
    double a, b, x, somma = 0, conta = 0;
    double media;

    do
    {
        printf ("Inserire primo numero: \n");
        scanf ("%lf", &a);
        printf ("Inserire secondo numero: \n");
        scanf ("%lf", &b);
       
    } while (b < a);
    
    do
    {
        printf ("\nInserire un numero: \n");
        scanf ("%lf", &x);

        if (x >= a && x <= b)
		{
			somma = somma + x;
			conta = conta + 1;
        }    
		

    } while (x >= a && x <= b);
    
    media = somma / conta;
    printf ("La media è: %0.2lf", media);
    
    return 0;
}
