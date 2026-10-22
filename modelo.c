#include <stdio.h>
#include "fib.h"
#include "fat.h"
/*Nome da dupla:
    -
    -
*/
int main(int argc, char* argv[]){
    int input = atoi(argv[0]);

    char nomeFib[] = nomeFib();
    char nomeFat[] = nomeFat();
    
    int resultado = fibonacci(input);
    
    printf("Codigo Fibonacci desenvolvido por %s\t: Fib(%d) = %d\n",nomeFib,input,fibonacci(input));
    printf("Codigo Fatorial desenvolvido por %s\t: Fat(%d) = %d\n",nomeFat,input,fatorial(input));

}

int fibonacci(int n){
    //TODO!
    return 0;
}

int fatorial(int n){
    //TODO!
    return 0;
}