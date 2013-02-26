#include <cstdlib>
#include <iostream>

using namespace std;
int busSec(int arr[], int n, int v);
int main(int argc, char *argv[])
{
    int n = atoi(argv[1]);
    int v = atoi(argv[2]);
    int arr[] = {1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31}; 
    busSec(arr,  n, v);
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

int busSec(int arr[], int n, int v){
    int i=0;
    int c=0;
    c++;
    while(i<n && arr[i]!=v){
              i=i+1;
              c+=5;
    }
    c+=5;
    printf(" El numero de pasos es de %d", c);
    return i<n?1:-1;
}
    
