# Guía de Merge (Fusión de Ramas)

El comando `git merge` se utiliza para combinar el historial de una rama con otra.

## Pasos para realizar un Merge

### 1. Cambiar a la rama "destino"
Es la rama que recibirá los cambios (normalmente `main` o `develop`).
```powershell
git switch develop
```

### 2. Ejecutar la fusión
Indicas el nombre de la rama que tiene los cambios nuevos.
```powershell
git merge nombre-de-tu-rama
```

## Tipos de Merge

### Fast-forward (Fusión rápida)
Ocurre cuando no ha habido cambios en la rama destino desde que creaste la rama secundaria. Git simplemente "mueve el puntero" hacia adelante.
*   **Resultado**: Un historial lineal y limpio.

### Recursive / Three-way merge
Ocurre cuando ambas ramas han avanzado por separado. Git crea un "Merge Commit" (un commit especial que une ambos caminos).
*   **Resultado**: Verás un nodo donde se unen las dos líneas en el historial.

---

## Resolución de Conflictos

Si ambos archivos modificaron la misma línea, Git se detendrá y pedirá ayuda.

### Cómo identificar conflictos
Ejecuta `git status`. Los archivos con conflictos aparecerán como "both modified".

### Cómo solucionarlos
1.  Abre el archivo. Verás marcas como estas:
    ```
    <<<<<<< HEAD
    (Tus cambios en la rama actual)
    =======
    (Cambios que vienen de la otra rama)
    >>>>>>> nombre-rama
    ```
2.  Borra lo que no quieras y deja el código final.
3.  **Borra las marcas** (`<<<<<<<`, `=======`, `>>>>>>>`).
4.  Guarda el archivo.
5.  Termina el proceso:
    ```powershell
    git add .
    git commit -m "Resuelto conflicto de merge"
    ```

## Comandos Útiles post-merge
```powershell
# Ver cómo ha quedado el árbol
git log --oneline --graph --all

# Cancelar un merge si algo sale mal (solo si hay conflictos)
git merge --abort
```
