/*
Esercizio 1
Progettare un algoritmo che effettui la lettura da tastiera di una serie di coppie di valori numerici.
L’algoritmo deve calcolare e stampare il rapporto tra il valore minore e quello maggiore dei due. Il
programma termina quando uno dei due valori o entrambi sono uguali a zero.
*/

#include <stdio.h>

int main()
{
    double x, y;
    double rapporto;

    do
    {
        printf ("Inserire primo numero: \n");
        scanf ("%lf", &x);
        printf ("Inserire secondo numero: \n");
        scanf ("%lf", &y);

        if (x > y) 
        {
            rapporto = y / x;
        } 
        else
        {
            rapporto = x / y;
        }

        printf ("Il rapporto è: %0.2lf \n\n", rapporto);

    } while (x != 0 && y != 0);
    
    return 0;
}