#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f2 = fopen("fichero2.txt", "w");
    if (f2==NULL)
    {
       perror ("Error al abrir fichero.txt");
       return -1;
    }
    int cont = 1;
    while (cont <= 1000)
    {
       fprintf (f2, "%d\n", cont);
       cont++;
    }
    fclose(f2);
    return 0;
}
