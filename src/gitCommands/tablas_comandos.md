# Tablas de Referencia Git

## Comandos útiles

| Comando | Descripción |
|---------|-------------|
| `git branch` | Ver ramas locales |
| `git branch -a` | Ver todas las ramas (locales + remotas) |
| `git checkout main` | Volver a la rama principal |
| `git merge nombre-rama` | Fusionar otra rama con la actual |
| `git fetch origin` | Traer info de ramas remotas |
| `git remote -v` | Ver remotos configurados |

## Gestión de cambios y commits

| Comando | Descripción |
|---------|-------------|
| `git reset HEAD~1 --soft` | Deshace el último commit, mantiene cambios |
| `git reset HEAD archivo` | Quita archivo del staging |
| `git rm --cached archivo` | Quita archivo del tracking de git |
| `git commit --amend` | Modifica el último commit |
| `git push --force` | Fuerza push (⚠️ peligroso) |
