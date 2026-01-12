#include <stdio.h>
#include <string.h>

/**
 * @file estructuras.c
 * @brief Explicación de Structs, Enums y Unions.
 *
 * Permiten agrupar datos de diferentes tipos bajo un mismo nombre.
 */

// --- 1. ESTRUCTURAS (struct) ---
// Define una plantilla de datos
struct Persona {
  char nombre[50];
  int edad;
  float altura;
};

// --- 2. ENUMERACIONES (enum) ---
// Para crear tipos con valores con nombre (hace el código más legible)
enum DiaSemana { LUNES, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO, DOMINGO };

// --- 3. UNIONES (union) ---
// Similar a struct, pero todos sus miembros comparten el mismo espacio de
// memoria. Solo se puede usar uno a la vez.
union Dato {
  int i;
  float f;
  char str[20];
};

int main() {
  // --- Uso de Struct ---
  printf("--- Uso de Structs ---\n");
  struct Persona p1;

  // Para Strings en C no podemos poner p1.nombre = "Nacho", hay que usar strcpy
  strcpy(p1.nombre, "Nacho Garcia");
  p1.edad = 25;
  p1.altura = 1.78f;

  printf("Nombre: %s\n", p1.nombre);
  printf("Edad: %d\n", p1.edad);
  printf("Altura: %.2f\n", p1.altura);

  // --- Uso de Enum ---
  printf("\n--- Uso de Enums ---\n");
  enum DiaSemana hoy = MIERCOLES;
  if (hoy == MIERCOLES) {
    printf("Hoy es miércoles (valor numérico: %d)\n", hoy);
  }

  // --- Uso de Union ---
  printf("\n--- Uso de Unions ---\n");
  union Dato miDato;

  miDato.i = 10;
  printf("miDato.i = %d\n", miDato.i);

  miDato.f = 220.5;
  printf("miDato.f = %.2f\n", miDato.f);
  // CUIDADO: si ahora imprimimos miDato.i, su valor se habrá corrompido
  // porque f usa el mismo espacio.
  printf("miDato.i despues de tocar f: %d (Corrupto)\n", miDato.i);

  return 0;
}
