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

## Comandos útiles

| Comando | Descripción |
|---------|-------------|
| `git branch` | Ver ramas locales |
| `git branch -a` | Ver todas las ramas (locales + remotas) |
| `git checkout main` | Volver a la rama principal |
| `git merge nombre-rama` | Fusionar otra rama con la actual |
| `git fetch origin` | Traer info de ramas remotas |
| `git remote -v` | Ver remotos configurados |
