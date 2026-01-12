#include <stdbool.h>
#include <stdio.h>


/**
 * @file basicos.c
 * @brief Explicación de los conceptos básicos de C: variables, tipos de datos y
 * E/S.
 *
 * En C, todo debe estar declarado antes de ser usado. C es un lenguaje de
 * tipado estático y de nivel medio-bajo.
 */

int main() {
  // --- 1. VARIABLES Y TIPOS DE DATOS ---

  // Enteros (números sin decimales)
  int numeroEntero = 10;       // Normalmente 4 bytes
  short enteroCorto = 5;       // Menos rango, ocupa menos espacio (2 bytes)
  long enteroLargo = 1000000L; // Mayor rango (4 u 8 bytes)

  // Punto flotante (números con decimales)
  float decimalSimple = 3.14f;   // Precisión simple (4 bytes)
  double decimalDoble = 3.14159; // Precisión doble (8 bytes) - Recomendado

  // Caracteres
  char unaLetra = 'A'; // Un solo carácter entre comillas simples (1 byte)
  // Nota: 'char' en realidad guarda el valor ASCII (un número entero)

  // Booleanos (requiere <stdbool.h>)
  bool esVerdad = true;
  bool esFalso = false;

  // --- 2. SALIDA DE DATOS (printf) ---
  // printf usa "especificadores de formato" que empiezan con %

  printf("--- Información Básica ---\n");
  printf("Entero: %d\n", numeroEntero);             // %d para int
  printf("Decimal (float): %.2f\n", decimalSimple); // %.2f limita a 2 decimales
  printf("Decimal (double): %lf\n", decimalDoble);  // %lf para double
  printf("Carácter: %c\n", unaLetra);               // %c para char
  printf("Valor booleano: %d (1=true, 0=false)\n", esVerdad);

  // --- 3. ENTRADA DE DATOS (scanf) ---
  // IMPORTANTE: scanf necesita la dirección de memoria de la variable (&)

  int edad;
  printf("\nIntroduce tu edad: ");
  // scanf("%d", &edad);
  // Comentado para evitar que el programa se detenga en la ejecución de prueba
  // Pero así es como se haría. &edad significa "la dirección de la variable
  // edad"

  // --- 4. CONSTANTES ---
  const double PI = 3.14159265;
  // PI = 3.14; // Esto daría error porque es constante

  printf("\nValor de PI: %f\n", PI);

  return 0; // Indica que el programa terminó correctamente
}
