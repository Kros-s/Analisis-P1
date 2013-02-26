#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int n = atoi(argv[1]);
    printf(" valor de n %d",n);
    /*---------------------------------------*/
    int c=0;
    int s=0;//1
    c++;//Declaracion de la S 
    for(int i=1;i<=n;i++){
            s=(s+2)/6;//3
            c = c+6;
            printf("\n%d", c);
    }
    c+=2;
    printf("\nEl numero de pasos totales es de : %d\n", c);
    system("PAUSE");
    return EXIT_SUCCESS;
}
     
