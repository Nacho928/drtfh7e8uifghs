#include <stdio.h>
#include <string.h> // Biblioteca esencial para manejar strings

/**
 * @file arrays_y_strings.c
 * @brief Explicación de arrays (arreglos) y cadenas de texto en C.
 *
 * En C, un array es un bloque contiguo de memoria del mismo tipo.
 * Un string es simplemente un array de caracteres que termina con el carácter
 * nulo '\0'.
 */

int main() {
  // --- 1. ARRAYS (ARREGLOS) ---
  printf("--- Arrays de Enteros ---\n");
  int numeros[5] = {10, 20, 30, 40, 50};

  // Acceso por índice (empieza en 0)
  printf("Primer elemento: %d\n", numeros[0]);

  // Recorrer un array
  for (int i = 0; i < 5; i++) {
    printf("Elemento en indice %d: %d\n", i, numeros[i]);
  }

  // --- 2. STRINGS (CADENAS DE CARACTERES) ---
  printf("\n--- Strings en C ---\n");

  // Forma 1: Array de caracteres
  char saludo[] = "Hola"; // C añade automáticamente '\0' al final

  // Forma 2: Puntero a char (literal de cadena)
  char *nombre = "Nacho";

  printf("Saludo: %s\n", saludo);
  printf("Nombre: %s\n", nombre);

  // --- 3. FUNCIONES DE string.h ---
  char buffer[100];

  // Copiar strings (strcpy)
  strcpy(buffer, "Aprender C es genial");
  printf("\nBuffer copiado: %s\n", buffer);

  // Concatenar strings (strcat)
  strcat(buffer, " y potente.");
  printf("Buffer concatenado: %s\n", buffer);

  // Longitud del string (strlen)
  printf("Longitud del buffer: %zu caracteres\n", strlen(buffer));

  // Comparar strings (strcmp)
  // Devuelve 0 si son iguales
  char clave[] = "1234";
  if (strcmp(clave, "1234") == 0) {
    printf("¡Clave correcta!\n");
  }

  // --- 4. CUIDADO CON LOS LÍMITES ---
  // C no comprueba si te sales del array.
  // numeros[10] = 5; // ESTO ES PELIGROSO y causará errores de memoria.

  return 0;
}
