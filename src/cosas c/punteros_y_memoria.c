#include <stdio.h>
#include <stdlib.h> // Necesario para malloc y free

/**
 * @file punteros_y_memoria.c
 * @brief Explicación de punteros, direcciones de memoria y memoria dinámica.
 *
 * Este es el concepto más "temido" pero más potente de C.
 */

void duplicar(int *p); // Función que usa punteros para modificar el original

int main() {
  // --- 1. ¿QUÉ ES UN PUNTERO? ---
  // Un puntero es una variable que guarda una DIRECCIÓN DE MEMORIA.

  int numero = 42;
  int *punteroANumero = &numero; // & saca la dirección, * declara el puntero

  printf("--- Punteros Básicos ---\n");
  printf("Valor del número: %d\n", numero);
  printf("Dirección del número (&numero): %p\n", (void *)&numero);
  printf("Valor guardado en el puntero: %p\n", (void *)punteroANumero);
  printf("Valor apuntado por el puntero (*punteroANumero): %d\n",
         *punteroANumero);

  // --- 2. MODIFICAR EL VALOR DESDE EL PUNTERO ---
  *punteroANumero =
      100; // Accedemos a la caja del "numero" y cambiamos el contenido
  printf("\nNuevo valor de numero tras usar el puntero: %d\n", numero);

  // --- 3. PASO POR REFERENCIA ---
  int valorParaDuplicar = 5;
  printf("\nValor original: %d\n", valorParaDuplicar);
  duplicar(&valorParaDuplicar); // Pasamos la dirección
  printf("Valor después de llamar a la función duplicar: %d\n",
         valorParaDuplicar);

  // --- 4. MEMORIA DINÁMICA (Heap) ---
  // A veces no sabemos cuánta memoria necesitamos hasta que el programa corre.
  // malloc reserva memoria y devuelve un puntero.
  // TAMBIÉN es MUY IMPORTANTE liberar esa memoria con free().

  int *arrayDinamico =
      (int *)malloc(5 * sizeof(int)); // Reservamos para 5 enteros

  if (arrayDinamico == NULL) {
    printf("Error: No se pudo asignar memoria\n");
    return 1;
  }

  // Llenamos el array
  for (int i = 0; i < 5; i++) {
    arrayDinamico[i] = i * 10;
    printf("ArrayDinamico[%d] = %d\n", i, arrayDinamico[i]);
  }

  // ¡SIEMPRE LIBERAR LA MEMORIA!
  free(arrayDinamico);
  printf("\nMemoria dinámica liberada correctamente.\n");

  return 0;
}

void duplicar(int *p) {
  // Para acceder al valor hay que "desreferenciar" con *
  *p = (*p) * 2;
}
