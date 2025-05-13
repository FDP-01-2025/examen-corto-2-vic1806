#include <iostream>
#include <string>
using namespace std;

int main() {
    int edad;
    cout << "Ingresar tu edad: ";
    cin >> edad;

    if (edad < 12) {
        cout << "No puede seguir coomprando.\n";
        return 0;
    }

    int tipo;
    cout << "\nTipo de cliente:\n";
    cout << "1. Estudiante\n";
    cout << "2. Adulto Mayor\n";
    cout << "3. Ver todo\n";
    cout << "Seleccione (1-3): ";
    cin >> tipo;

    double saldo = 7.00;
    int opcion;
    string plato;
    double precio = 0.0;

    switch (tipo) {
        case 1:
            cout << "\n--- Menú Estudiante (25% desc.) ---\n";
            cout << "1. Combo Hamburguesa - $6.00\n";
            cout << "2. Combo Pizza Personal - $5.25\n";
            cout << "3. Almuerzo Ejecutivo - $7.50\n";
            cout << "Seleccione su plato (1-3): ";
            cin >> opcion;

            switch (opcion) {
                case 1:
                    plato = "Combo Hamburguesa";
                    precio = 6.00;
                    break;
                case 2:
                    plato = "Combo Pizza Personal";
                    precio = 5.25;
                    break;
                case 3:
                    plato = "Almuerzo ejecutivo";
                    precio = 7.50;
                    break;
                default:
                    cout << "Opción inválida.\n";
                    return 0;
            }
            break;

        case 2:
            cout << "\n--- Menú Adulto Mayor (30% desc.) ---\n";
            cout << "1. Sopa Nutritiva - $4.20\n";
            cout << "2. Plato Casero - $6.30\n";
            cout << "3. Postre + Café - $3.50\n";
            cout << "Seleccione un plato (1-3): ";
            cin >> opcion;

            switch (opcion) {
                case 1:
                    plato = "Sopa Nutritiva";
                    precio = 4.20;
                    break;
                case 2:
                    plato = "Plato Casero";
                    precio = 6.30;
                    break;
                case 3:
                    plato = "Postre + Café";
                    precio = 3.50;
                    break;
                default:
                    cout << "Opción inválida.\n";
                    return 0;
            }
            break;

        case 3:
            cout << "\nDebe elegir 1 o 2 para continuar.\n";
            return 0;

        default:
            cout << "Opción inválida.\n";
            return 0;
    }

    
    if (precio > saldo) {
        cout << "No se pudo comprar " << plato << ". Faltan $" << precio - saldo << ".\n";
    } else {
        cout << "Compra exitosa. Usted compró " << plato << " y le quedan $" << saldo - precio << ".\n";
    }

    return 0;
}
