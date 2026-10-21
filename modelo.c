#include <stdio.h>
#include "funcoes.h"

/*Nome da dupla:
    -
    -
*/
int main(){
    int input;
    scanf("%d",&input);

    char nomeFib[] = "";
    char nomeFat[] = "";
    
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