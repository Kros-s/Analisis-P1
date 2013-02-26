#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int n = atoi(argv[1]);
    printf(" valor de n %d",n);
    int c=0;
    
    int s = 0;
    c++;
    for(int i=1;i<=n;i=i+3){
            s=s+2;
            c+=5;
    }
    c+=3;
    printf("Total de pasos %d !", c);
    system("PAUSE");
    return EXIT_SUCCESS;
}
