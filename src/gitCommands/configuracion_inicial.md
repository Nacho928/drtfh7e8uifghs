# Configuración de Git

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
