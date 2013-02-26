#include <cstdlib>
#include <iostream>

using namespace std;
int busBin(int arr[], int n, int v);
int main(int argc, char *argv[])
{
    int n = atoi(argv[1]);
    int v = atoi(argv[2]);
    int arr[1010];
    FILE *f2 = fopen("fichero2.txt", "r");
    if (f2==NULL)
    {
       perror ("Error al abrir fichero.txt");
       return -1;
    }
    int cont = 1;
    while (!feof(f2))
    {
    
       fscanf (f2, "%d\n", &arr[cont]);
       cont++;
    }
    
    busBin(arr,  n, v);
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

int busBin(int arr[], int n, int v){
    int c=0;
    
    int i=0;
    int j=n-1;
    int enc=0;
    int k=0;
    c+=5;
    
    int cc=0;
    
    while(i<=j && !enc){
               cc++;
               k=(i+j)/2;
               c+=6;
               if(arr[k]==v){
                   enc=1;
                   c+=3;
               }
               else{
                    c+=2;
                    if(arr[k]<v){
                                 i=k+1;
                                 c+=4;
                    }
                    else{
                         j=k-1;
                         c+=4;
                    }
               }
        
    }
    c+=6;
        printf(" El numero de pasos del ciclo de %d\n\n", cc);
    printf(" El numero de pasos es de %d", c);
    return enc?k:1;
}
    
