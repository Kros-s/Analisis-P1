#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int n = atoi(argv[1]);
    int k = atoi(argv[2]);
    printf(" valor de n %d",n);
    int c=0;
    
    int s = 0;
    c++;
    for(int i=1;i<=n;i=i+k){
            s=s*2;
            c+=5;
    }
    c+=3;
    printf("\nEL numero de pasos es de %d\n\n", c);
    system("PAUSE");
    return EXIT_SUCCESS;
}
