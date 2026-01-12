# git switch (alternativa moderna a checkout)

`git switch` es la versión moderna de `git checkout` para cambiar de ramas. Es más intuitivo.

## Comparación checkout vs switch

| Acción | checkout (antiguo) | switch (moderno) |
|--------|-------------------|------------------|
| Cambiar a una rama | `git checkout main` | `git switch main` |
| Crear rama y cambiarte | `git checkout -b nueva-rama` | `git switch -c nueva-rama` |
| Traer rama remota | `git checkout nombre-rama` | `git switch nombre-rama` |

## Ejemplos

```powershell
# Cambiar a main
git switch main

# Crear una rama nueva y cambiarte a ella
git switch -c mi-nueva-rama

# Volver a la rama anterior
git switch -
```
