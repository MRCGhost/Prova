//Autor: Mateus R Cichelero

//5)

#include <stdio.h>

// Função para calcular o comprimento de uma string
int length(char *str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

// Função para inverter uma string
void inverterString(char *str) {
    int len = length(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char string[100]; // Tamanho máximo da string

    // Solicitar ao usuário que insira a string
    printf("Digite uma string: ");
    scanf("%s", string);
    
    // Inverter a string
    inverterString(string);
    
    // Imprimir a string invertida
    printf("String invertida: %s\n", string);
    
    return 0;
}