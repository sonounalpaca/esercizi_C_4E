/*
Data una misura di tempo espressa in secondi S1, convertirla in ore H,
minuti M e secondi S.

Esempio: se il numero dei secondi è 1630, si dovrà ottenere, in uscita
dal programma, 0h 27m 10s.
*/


#include <stdio.h>

int main(int argc, char *argv[])
{
    int sec, min = 0, ore = 0;

   do
    {
        printf("Inserire un tempo in secondi: ");
        scanf ("%d", &sec);

    } while (sec < 0);

    do
    {
        sec = sec - 60;
        min = min +1;
        
        if (min == 60)
        {
            ore = ore + 1;
            min = min - 60;
        }

    } while (sec > 60);
    
    printf ("%dh %dm %ds", ore, min, sec);
    
    return 0;  

}