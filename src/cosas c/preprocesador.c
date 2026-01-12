#include <stdio.h>

/**
 * @file preprocesador.c
 * @brief Explicación de las directivas del preprocesador (#define, macros,
 * etc.)
 *
 * El preprocesador actúa ANTES de que el código se compile realmente.
 */

// --- 1. DEFINICIÓN DE CONSTANTES ---
#define PI 3.14159
#define LIMITE 100

// --- 2. MACROS CON ARGUMENTOS ---
// CUIDADO: Siempre usa paréntesis en los argumentos de una macro
#define CUADRADO(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

// --- 3. COMPILACIÓN CONDICIONAL ---
// Útil para hacer código multiplataforma o para depuración (debug)
#define MODO_DEBUG 1

int main() {
  printf("--- Uso del Preprocesador ---\n");

  printf("El valor de PI es: %.5f\n", PI);

  int num = 5;
  printf("El cuadrado de %d es %d\n", num, CUADRADO(num));

  int x = 10, y = 20;
  printf("El mayor entre %d y %d es %d\n", x, y, MAX(x, y));

  // Uso de compilación condicional
#if MODO_DEBUG
  printf("\n[DEBUG] El programa está en modo depuración.\n");
#else
  printf("\nEl programa está en modo producción.\n");
#endif

  // --- 4. OTRAS DIRECTIVAS COMUNES ---
  // #include <archivo.h>  -> Busca en las carpetas del sistema
  // #include "archivo.h"  -> Busca en la carpeta del proyecto

  // #ifndef HEADER_H      -> "Si no está definido..." (Se usa en cabeceras)
  // #define HEADER_H
  // ...
  // #endif

  return 0;
}
