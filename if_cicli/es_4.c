/*
Progettare un algoritmo che effettui la lettura da tastiera di una serie
di coppie di valori numerici reali (sia positivi che negativi che zero).
Per ciascuna coppia, l’algoritmo deve calcolare e stampare il valore
della radice quadrata del rapporto tra il valore maggiore e quello
minore dei due. Il programma termina quando vengono inseriti dei valori
che non permettono di svolgere il calcolo nel dominio dei numeri reali.
Prima di terminare si richiede di stampare un messaggio che indichi la
ragione per cui non è stato possibile svolgere il calcolo.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    
    double x, y, rapporto;
    double radice;

    do
    {
        printf ("Inserire primo numero: \n");
        scanf ("%lf", &x);
        printf ("Inserire secondo numero: \n");
        scanf ("%lf", &y);

        if (x > y)
        {
            rapporto = x / y;
        }
        else 
        {
            rapporto = y / x;
        }

        if (rapporto > 0)
        {
            radice = sqrt (rapporto);
            printf ("Radice del rapporto: %0.2lf \n\n", radice);
        }

    } while (rapporto > 0);

    printf ("ERRORE: non si può calcolare la radice quadrata di un numero negativo");

    return 0;
}