/*
Progettare un algoritmo che risolva il seguente problema. Si richieda 
all’utente di inserire una serie di terne di dati numerici (A, B, C). 
Il programma deve terminare quando uno dei valori inseriti è minore di
zero. Si scartino le terne nelle quali i valori non sono in ordine
strettamente crescente, ovvero quelle terne per cui non valga A < B < C.
Su tutte le terne non scartate si calcoli il massimo e il minimo dei
valori inseriti. Si stampino a video tali valori massimi e minimi prima
di terminare il programma.
*/

#include <stdio.h>
#include <limits.h>

int main(int argc, char *argv[])
{
    int a, b, c;
    int min = INT_MAX, max = 0;

    do
    {
        printf ("Inserire il primo numero\n");
        scanf ("%d", &a);
        printf ("Inserire il secondo numero\n");
        scanf ("%d", &b);
        printf ("Inserire il terzo numero\n");
        scanf ("%d", &c);

        if (a < b && b < c)
        {
            if (a < min)
            {
                min = a;
            }
            if (c > max)
            {
                max = c;
            }
        }

        
    } while (a >= 0 && b >= 0 && c >= 0);
    
    printf ("Minimo: %d\n", min);
    printf ("Massimo: %d\n", max);

    return 0;
}
