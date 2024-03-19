//Autor: Mateus R Cichelero

//2)

#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 0;
    int b = 1;
    int c;
    int num;
    
    printf("\nDiga um numero inteiro: ");
    scanf("%d", &num);

    while(b < num){
        c = a + b;
        a = b;
        b = c;
    }

    if(b == num){
        printf("\n Este numero esta na serie Fibonacci!");
    }
    else printf("\n Este numero nao esta na serie Fibonacci!");

    return 0;
}