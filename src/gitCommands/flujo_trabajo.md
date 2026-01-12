# Flujo de Trabajo en Git (add → commit → push)

```powershell
# 1. Ver el estado de los archivos (qué ha cambiado)
git status

# 2. Añadir archivos al staging area
git add .                    # Añadir TODOS los archivos modificados
git add archivo.txt          # Añadir un archivo específico
git add carpeta/             # Añadir una carpeta específica

# 3. Hacer el commit (guardar los cambios localmente)
git commit -m "Descripción de los cambios"

# 4. Subir los cambios a GitHub
git push                     # Si ya has hecho push antes en esta rama
git push -u origin nombre-rama   # Primera vez en esta rama (establece el upstream)

# 5. (Opcional) Ver el historial de commits
git log --oneline -5         # Ver últimos 5 commits en formato corto
```

### Ejemplo completo

```powershell
# Modificas archivos...
git status                   # Ves qué archivos cambiaron
git add .                    # Los añades
git commit -m "Añadido nuevo feature"   # Commit
git push                     # Subes a GitHub
```
