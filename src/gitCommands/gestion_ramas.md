# Gestión de Ramas en Git

## Trabajar con ramas

### Crear una rama nueva y subirla

```powershell
# Crear la rama y cambiarte a ella
git checkout -b nombre-rama

# Hacer tus cambios y commit
git add .
git commit -m "Mi commit"

# Subir la rama nueva a GitHub (primera vez)
git push -u origin nombre-rama
```

### Subir a una rama que ya existe en remoto

```powershell
# Cambiarte a esa rama
git checkout nombre-rama

# Hacer cambios y commit
git add .
git commit -m "Mi commit"

# Subir
git push
```

### Si la rama existe en remoto pero no en local

```powershell
# Traer la rama del remoto
git fetch origin
git checkout nombre-rama
```
