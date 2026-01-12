#include <stdio.h>

/**
 * @file estructuras_control.c
 * @brief Explicación de cómo controlar el flujo de un programa en C.
 */

int main() {
  int numero = 15;

  // --- 1. CONDICIONALES (if, else if, else) ---
  printf("--- Condicionales ---\n");
  if (numero > 20) {
    printf("El número es mayor que 20\n");
  } else if (numero == 15) {
    printf("El número es exactamente 15\n");
  } else {
    printf("El número es menor que 15\n");
  }

  // --- 2. SWITCH (Selección múltiple) ---
  // Ideal para menús o cuando comparamos una variable contra valores fijos.
  char nota = 'B';
  printf("\n--- Switch ---\n");
  switch (nota) {
  case 'A':
    printf("Excelente\n");
    break; // Importante para no seguir con los siguientes casos
  case 'B':
    printf("Muy bien\n");
    break;
  case 'C':
    printf("Aprobado\n");
    break;
  default:
    printf("Nota no válida\n");
  }

  // --- 3. BUCLES (Loops) ---

  // FOR: Cuando sabemos cuántas veces queremos repetir algo
  printf("\n--- Bucle FOR (0 al 4) ---\n");
  for (int i = 0; i < 5; i++) {
    printf("Iteración: %d\n", i);
  }

  // WHILE: Se repite mientras la condición sea verdadera
  printf("\n--- Bucle WHILE ---\n");
  int contador = 3;
  while (contador > 0) {
    printf("Cuenta atrás: %d\n", contador);
    contador--;
  }

  // DO-WHILE: Se ejecuta al menos una vez, y luego comprueba la condición
  printf("\n--- Bucle DO-WHILE ---\n");
  int j = 10;
  do {
    printf("Este mensaje saldrá al menos una vez aunque j no sea < 5\n");
  } while (j < 5);

  return 0;
}
