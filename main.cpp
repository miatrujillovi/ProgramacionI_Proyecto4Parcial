#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

// Función que verifica la existencia de la base de datos, y si no, la crea.
void CreateDB(){
    std::string filename = "BDPrincipal.csv";

    // Verificamos si existe el archivo, sino, se crea
    std::ifstream fileCheck(filename);
    if (fileCheck.good()){

    } else {
        std::ofstream csvFile(filename);

        if (!csvFile.is_open()) {
            std::cerr << "Error al abrir Base de Datos" << std::endl;
            return 1;
        }

        // Creamos los encabezados de la base de datos
        std::vector<std::string> headers = {"ID", "Puesto", "Nombre", "Direccion", "EstadoCivil", "RFC", "Salario", "NumeroCuenta", "NumeroSeguroSocial", "FechaContratacion_Dia", "FechaContratacion_Mes", "FechaContratacion_Year", "EstadoEmpresa"};
        for (size_t i = 0; i < headers.size(); i++) {
            csvFile << headers[i];
            if (i < headers_size() -1) {
                csvFile << ",";
            }
        }
        csvFile << "\n";

        // Agregamos números secuenciales en la columna de ID
        size_t UpdateCol = 0;
        for (size_t i = 0; i < IDs(); i++) {
            IDs[i][UpdateCol] = std::to_string(i + 1);
        }

        for (const auto& fila : IDs) {
            for (size_t i = 0; i < fila.size(); i++) {
                csvFile << fila[i];
                if (i < fila.size() - 1) {
                    csvFile << ",";
                }
            }
            csvFile << "\n";
        }

        csvFile.close();
    }
}


/* Tomado de mi main.cpp, solo usenla para testear que los menús funcionen correctamente
 *
 * Si jala a la primera, soy la reata.
 * Si no jala a la primera... es tu PC, en la mia si corre bien :D
 *
 * */

void TestMenu() {
    int option;

    std::cout << "[DEBUG] Escoge un menu" << std::endl;
    std::cout << "[1] Menu gerente" << std::endl;
    std::cout << "[2] Menu jefe" << std::endl;

    std::cin >> option;

    if(option == 1) {
        MenuGerente();
    } else if(option == 2) {
        MenuJefe();
    }
}

int main(){
    CreateDB();
}
