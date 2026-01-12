# Gestión de Commits y Archivos

## Eliminar archivos de un commit

### ANTES del push

```powershell
# Opción 1: Deshacer el commit y rehacerlo sin el archivo
git reset HEAD~1 --soft         # Deshace el commit, mantiene cambios en staging
git reset HEAD archivo.exe      # Quita ese archivo del staging
git commit -m "mensaje"         # Vuelve a hacer commit sin ese archivo

# Opción 2: Modificar el último commit directamente
git rm --cached archivo.exe     # Quita el archivo del tracking
git commit --amend              # Modifica el último commit
```

### DESPUÉS del push

```powershell
# Si nadie más ha cogido esos cambios
git rm --cached archivo.exe
git commit -m "Eliminado archivo.exe"
git push

# Si quieres reescribir la historia (⚠️ PELIGROSO si otros colaboran)
git reset HEAD~1 --soft
git reset HEAD archivo.exe
git commit -m "mensaje"
git push --force                # ⚠️ Sobrescribe el historial remoto
```
