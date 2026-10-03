#include <iostream>
using namespace std;

int main() {
    int opcion = 0;
    while (opcion != 5) {
        cout << "---PASSWORD MANAGER---" << endl;
        cout << "1. Agregar credencial" << endl;
        cout << "2. Buscar credencial" << endl;
        cout << "3. Generar contraseña segura" << endl;
        cout << "4. Eliminar credencial" << endl;
        cout << "5. Salir" << endl;
        cout << "Ingrese su opcion: ";
        cin >> opcion;
        if (opcion == 5) {
            cout << "Saliendo del programa..." << endl;
        } else{
            cout<< "En progreso...";
        }
    }
}