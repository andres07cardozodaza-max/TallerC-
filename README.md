# Validador de Contraseñas Seguras 🛡️
Este proyecto es una aplicación desarrollada en **C++** como parte de un taller de ciberseguridad. Su función principal es analizar la solidez de una contraseña introducida por el usuario, evaluando múltiples criterios de seguridad informática mediante un sistema de puntaje y un entorno interactivo en consola.
---
##  Reglas de Evaluación
El programa verifica si la contraseña cumple con **4 reglas fundamentales**:
1. **Longitud mínima:** Debe contener al menos 8 caracteres.
2. **Letras mayúsculas:** Debe incluir al menos una letra mayúscula (`A-Z`).
3. **Números:** Debe incluir al menos un dígito numérico (`0-9`).
4. **Caracteres especiales:** Debe contener al menos uno de los siguientes símbolos permitidos: `!`, `@`, `#`, `$`, `%`, `&`, `*`.
---
##  Niveles de Seguridad
Dependiendo del número de reglas que cumpla la contraseña (calculado de forma automática mediante un puntaje del 0 al 4), el sistema clasifica el resultado en:
* **0 a 2 reglas cumplidas:** `DÉBIL` 🔴
* **3 reglas cumplidas:** `MEDIA` 🟡
* **4 reglas cumplidas:** `FUERTE` 🟢

