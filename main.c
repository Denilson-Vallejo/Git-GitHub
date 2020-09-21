#include <stdio.h>


int main(){
    char nombre[100];
    unsigned int edad;

    printf("Hola mundo\n");
    printf("Nombre: ");
    fgets(nombre, sizeof(nombre), stdin);
    printf("Hola %s", nombre);
    printf("EDAD: ");
    scanf("%u", &edad);
    printf("   edad %u", edad);
    return 0;
}