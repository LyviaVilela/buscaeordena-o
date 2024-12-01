#include <stdio.h>


int buscaBinaria(int numeros[], int tamanho, int procurado) {
    int esquerda = 0, direita = tamanho - 1;

    while (esquerda <= direita) {
        int meio = (esquerda + direita) / 2;

        if (numeros[meio] == procurado) 
            return meio; 
        else if (numeros[meio] < procurado) 
            esquerda = meio + 1; 
        else 
            direita = meio - 1;  
    }

    return -1;
}

int main() {
    int numeros[] = {1, 3, 5, 7, 9}; 
    int procurar = 5;
    int tamanho = sizeof(numeros) / sizeof(numeros[0]); 

    int resultado = buscaBinaria(numeros, tamanho, procurar);
    if (resultado != -1) 
        printf("Número encontrado na posição %d\n", resultado);
    else 
        printf("Número não encontrado\n");

    return 0;
}


