#include <stdio.h>

/**
 * @file archivos.c
 * @brief Explicación de cómo leer y escribir archivos en C.
 */

int main() {
  FILE *archivo; // Puntero a la estructura FILE

  // --- 1. ESCRIBIR EN UN ARCHIVO ---
  // "w" (write): Crea el archivo o lo sobrescribe si ya existe.
  archivo = fopen("ejemplo.txt", "w");

  if (archivo == NULL) {
    printf("Error al abrir el archivo para escribir.\n");
    return 1;
  }

  fprintf(archivo, "Hola! Este es un texto guardado desde C.\n");
  fprintf(archivo, "Línea 2: Aprendiendo manejo de ficheros.\n");

  fclose(archivo); // ¡MUY IMPORTANTE cerrar el archivo siempre!
  printf("Archivo escrito correctamente.\n");

  // --- 2. LEER DE UN ARCHIVO ---
  // "r" (read): Abre para lectura. Debe existir.
  archivo = fopen("ejemplo.txt", "r");

  if (archivo == NULL) {
    printf("El archivo no existe.\n");
    return 1;
  }

  printf("\n--- Contenido del archivo ---\n");
  char linea[100];
  // fgets lee una línea completa
  while (fgets(linea, sizeof(linea), archivo) != NULL) {
    printf("%s", linea);
  }

  fclose(archivo);

  // --- 3. MODOS COMUNES ---
  // "a" (append): Añade al final sin borrar lo anterior.
  // "rb", "wb": Para archivos binarios.

  return 0;
}
