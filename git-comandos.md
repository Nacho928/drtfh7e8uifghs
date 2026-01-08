# Guía de Comandos Git

## Crear repositorio con cuenta diferente a la global

```powershell
# 1. Crear la carpeta y entrar (si no está hecho)
mkdir MiProyectoInstituto
cd MiProyectoInstituto

# 2. Inicializar Git
git init

# 3. Configurar el email local (diferente al global)
git config user.email "alumno.775545@ies-azarquiel.es"
git config user.name "Nacho Instituto"

# 4. Verificar que está bien configurado
git config --list --local

# 5. Añadir archivos, hacer commit y conectar con GitHub
git add .
git commit -m "Initial commit"
git remote add origin https://github.com/tu-usuario/tu-repo.git
git push -u origin main
```

---

## Diferencia entre configuración global y local

```powershell
# Tu configuración actual (global)
git config --global user.email
# Muestra: nachogarciaiglesias809@gmail.com

# Entras a un repo del instituto
cd C:\ProyectosInstituto\MiRepo
git config user.email "alumno.775545@ies-azarquiel.es"  # ← SIN --global

# Ahora en ESE repo:
git config user.email
# Muestra: alumno.775545@ies-azarquiel.es

# Pero la global sigue igual:
git config --global user.email
# Muestra: nachogarciaiglesias809@gmail.com
```

---

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

---

## Conectar con un repo donde eres colaborador

```powershell
git remote add origin https://github.com/USUARIO/NOMBRE-REPO.git
```

---

## Flujo completo de trabajo (add → commit → push)

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

---

## Merge (fusionar ramas)

El merge sirve para traer los cambios de una rama a otra.

### Cómo hacer un merge

```powershell
# 1. Primero te cambias a la rama DESTINO (donde quieres traer los cambios)
git checkout main

# 2. Fusionas la otra rama
git merge features
```

Esto trae todos los commits de `features` a `main`.

### Ejemplo visual

```
Antes del merge:

main:      A---B---C
                    \
features:            D---E---F

Después de: git checkout main && git merge features

main:      A---B---C---D---E---F
```

### Resolver conflictos

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

---

## Comandos útiles

| Comando | Descripción |
|---------|-------------|
| `git branch` | Ver ramas locales |
| `git branch -a` | Ver todas las ramas (locales + remotas) |
| `git checkout main` | Volver a la rama principal |
| `git merge nombre-rama` | Fusionar otra rama con la actual |
| `git fetch origin` | Traer info de ramas remotas |
| `git remote -v` | Ver remotos configurados |

---

## git switch (alternativa moderna a checkout)

`git switch` es la versión moderna de `git checkout` para cambiar de ramas. Es más intuitivo.

### Comparación checkout vs switch

| Acción | checkout (antiguo) | switch (moderno) |
|--------|-------------------|------------------|
| Cambiar a una rama | `git checkout main` | `git switch main` |
| Crear rama y cambiarte | `git checkout -b nueva-rama` | `git switch -c nueva-rama` |
| Traer rama remota | `git checkout nombre-rama` | `git switch nombre-rama` |

### Ejemplos

```powershell
# Cambiar a main
git switch main

# Crear una rama nueva y cambiarte a ella
git switch -c mi-nueva-rama

# Volver a la rama anterior
git switch -
```

---

## Pull Requests (cuando no puedes hacer push directo)

Si el repo tiene reglas de protección de rama, no podrás hacer push directo. Tendrás que crear un **Pull Request**.

### Error típico

```
remote: error: GH013: Repository rule violations found
remote: - Changes must be made through a pull request.
```

### Solución: crear tu propia rama

```powershell
# Crear tu propia rama desde donde estés
git switch -c mi-cambio

# Subir TU rama (esta sí te dejará)
git push -u origin mi-cambio
```

Luego ve a GitHub y crea un **Pull Request** de `mi-cambio` → `rama-protegida`.

