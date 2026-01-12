# Gestión de Ramas en Git

## Listar ramas

```powershell
# Ver ramas locales (la que tiene el * es en la que estás)
git branch

# Ver todas las ramas (locales y remotas de GitHub)
git branch -a

# Ver ramas y el último commit de cada una
git branch -v
```

## Trabajar con ramas

### Crear una rama nueva y subirla

```powershell
# Crear la rama y cambiarte a ella
git switch -c nombre-rama

# Hacer tus cambios y commit
git add .
git commit -m "Mi commit"

# Subir la rama nueva a GitHub (primera vez)
git push -u origin nombre-rama
```

### Subir a una rama que ya existe en remoto

```powershell
# Cambiarte a esa rama
git switch nombre-rama

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
git switch nombre-rama
```

## Eliminar ramas

**Nota:** No puedes borrar la rama en la que estás actualmente. Tienes que cambiarte a otra primero (ej. `git switch main`).

### Eliminar rama local

```powershell
# Borrado seguro (solo si ya has fusionado los cambios)
git branch -d nombre-rama

# Borrado forzado (borra aunque no hayas fusionado los cambios)
git branch -D nombre-rama
```

### Eliminar rama remota (GitHub)

```powershell
git push origin --delete nombre-rama
```
