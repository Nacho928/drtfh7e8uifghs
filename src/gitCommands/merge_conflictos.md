# Merge y Resolución de Conflictos

El merge sirve para traer los cambios de una rama a otra.

## Cómo hacer un merge

```powershell
# 1. Primero te cambias a la rama DESTINO (donde quieres traer los cambios)
git checkout main

# 2. Fusionas la otra rama
git merge features
```

Esto trae todos los commits de `features` a `main`.

## Ejemplo visual

```
Antes del merge:

main:      A---B---C
                    \
features:            D---E---F

Después de: git checkout main && git merge features

main:      A---B---C---D---E---F
```

## Resolver conflictos

Si ambas ramas modificaron las mismas líneas, Git te pedirá resolver el conflicto manualmente. Verás algo así en el archivo:

```
<<<<<<< HEAD
código de main (tu rama actual)
=======
código de features (la rama que estás fusionando)
>>>>>>> features
```

**Para resolverlo:**
1. Edita el archivo y elige qué código quieres quedarte
2. Elimina las líneas `<<<<<<<`, `=======` y `>>>>>>>`
3. Guarda el archivo
4. Haz `git add .` y `git commit -m "Resuelto conflicto"`
