#include <stdio.h>

/**
 * @file funciones.c
 * @brief Explicación de funciones, prototipos y parámetros.
 */

// --- 1. PROTOTIPO DE LA FUNCIÓN ---
// En C, si la función está escrita después del main,
// debemos avisar al compilador que existe arriba.
int sumar(int a, int b);
void saludar(char nombre[]);

int main() {
  printf("--- Uso de Funciones ---\n");

  // Llamada a una función que devuelve un valor
  int resultado = sumar(5, 7);
  printf("La suma de 5 + 7 es: %d\n", resultado);

  // Llamada a una función 'void' (no devuelve nada)
  saludar("Nacho");

  return 0;
}

// --- 2. DEFINICIÓN DE LAS FUNCIONES ---

/**
 * Función que recibe dos enteros y devuelve su suma.
 * @param a Primer número
 * @param b Segundo número
 * @return La suma de a + b
 */
int sumar(int a, int b) { return a + b; }

/**
 * Función 'void' no devuelve ningún valor. Se usa para acciones.
 * @param nombre Una cadena de caracteres (array de chars)
 */
void saludar(char nombre[]) {
  printf("¡Hola, %s! Bienvenido a la programación en C.\n", nombre);
}

// --- NOTAS SOBRE EL PASO DE PARÁMETROS ---
// 1. Por valor: Se pasa una copia. Si modificas el parámetro dentro de la
// función,
//    la variable original fuera no cambia.
// 2. Por referencia (punteros): Se pasa la dirección de memoria.
//    Permite modificar la variable original (lo veremos en el archivo de
//    punteros).
