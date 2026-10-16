#include <iostream>
#include <string>

using namespace std;

int main() {
    string password;

    cout << "========================================\n";
    cout << "   VALIDADOR DE CONTRASEÑAS SEGURAS     \n";
    cout << "========================================\n";
    cout << "Escribe una contraseña (o escribe 'salir' para terminar):\n\n";

    while (true) {
        cout << "Ingrese una contraseña: ";
        cin >> password;

        if (password == "salir") {
            cout << "Saliendo del programa...\n";
            break;
        }

        // Variables bool para marcar si cada regla se cumple
        bool reglaLongitud = false;
        bool reglaMayuscula = false;
        bool reglaNumero = false;
        bool reglaEspecial = false;

        // Regla 1: Tiene 8 caracteres o más
        if (password.length() >= 8) {
            reglaLongitud = true;
        }

        // Recorre la contraseña carácter por carácter con un for
        for (size_t i = 0; i < password.length(); i++) {
            char c = password[i];

            // Regla 2: Contiene al menos una letra mayúscula (A-Z)
            if (c >= 'A' && c <= 'Z') {
                reglaMayuscula = true;
            }

            // Regla 3: Contiene al menos un número (0-9)
            if (c >= '0' && c <= '9') {
                reglaNumero = true;
            }

            // Regla 4: Contiene al menos un carácter especial (! @ # $ % & *)
            if (c == '!' || c == '@' || c == '#' || c == '$' || c == '%' || c == '&' || c == '*') {
                reglaEspecial = true;
            }
        }

        // Suma los bool para obtener el puntaje total (en C++ true vale 1)
        int puntajeTotal = reglaLongitud + reglaMayuscula + reglaNumero + reglaEspecial;

        // Imprimir el resultado según las reglas cumplidas
        cout << "Nivel de seguridad: ";
        if (puntajeTotal <= 2) {
            cout << "DÉBIL" << endl;
        } else if (puntajeTotal == 3) {
            cout << "MEDIA" << endl;
        } else if (puntajeTotal == 4) {
            cout << "FUERTE" << endl;
        }
        cout << "----------------------------------------\n";
    }

    return 0;
}