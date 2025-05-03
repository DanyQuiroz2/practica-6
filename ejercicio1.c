//Daniela Quiroz Cruz

#include <stdio.h>

int main() {
    int numero;
    float decimal = 3.14;
    char letra = 'A';
    char nombre[50];

    printf("Introduce un número entero: ");
    scanf("%d", &numero);

    printf("Introduce tu nombre: ");
    scanf("%s", nombre);

    printf("\n--- Resultados ---\n");
    printf("Número entero: %d\n", numero);
    printf("Número decimal: %.2f\n", decimal);
    printf("Letra: %c\n", letra);
    printf("Nombre: %s\n", nombre);

    return 0;
}
