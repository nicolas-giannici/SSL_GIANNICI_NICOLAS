#include <stdio.h>

int main() {
    char nombre[120];
    
    printf("Ingresa tu nombre: ");
    scanf("%s", nombre);
    
    printf("Hola, %s. Bienvenido!\n", nombre);
    
    return 0;
}