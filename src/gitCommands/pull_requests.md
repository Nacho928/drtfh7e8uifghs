# Pull Requests y Protección de Ramas

Si el repo tiene reglas de protección de rama, no podrás hacer push directo. Tendrás que crear un **Pull Request**.

## Error típico

```
remote: error: GH013: Repository rule violations found
remote: - Changes must be made through a pull request.
```

## Solución: crear tu propia rama

```powershell
# Crear tu propia rama desde donde estés
git switch -c mi-cambio

# Subir TU rama (esta sí te dejará)
git push -u origin mi-cambio
```

Luego ve a GitHub y crea un **Pull Request** de `mi-cambio` → `rama-protegida`.
