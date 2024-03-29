#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wuninitialized"
#pragma clang diagnostic ignored "-Winaccessible-base"
#ifndef PROGRAMACIONI_PROYECTO4PARCIAL_USUARIOS_H
#define PROGRAMACIONI_PROYECTO4PARCIAL_USUARIOS_H

#include <iostream>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <cstring>
#include <limits>
#include "Sucursales.h"

class Empleado {
public:
    // Constructor Implícito de Empleado
    Empleado() {
        this->ID="N/A";
        this->Nombre = "N/A";
        this->Direccion = "N/A";
        this->EstadoCivil = "N/A";
        this->RFC = "N/A";
        this->Puesto = "N/A";
        this->EstadoEmpresa = "N/A";
        this->Salario = "N/A";
        this->NumeroCuenta = 0;
        this->NumeroSeguroSocial = 0;
        this->SATKeys = 0;
        this->ConstanciaFiscal = 0;
        this->FechaContratacion_Dia = 0;
        this->FechaContratacion_Mes = 0;
        this->FechaContratacion_Year = 0;
    }

    // Constructor Explícito de Empleado
    Empleado(std::string ID,std::string Nombre, std::string Direccion, std::string EstadoCivil, std::string RFC, std::string Puesto, std::string EstadoEmpresa, std::string Salario, int NumeroCuenta, int NumeroSeguroSocial, int SATKeys, int ConstanciaFiscal,  int FechaContratacion_Dia, int FechaContratacion_Mes, int FechaContratacion_Year) {
        this->Nombre = Nombre;
        this->Direccion = Direccion;
        this->EstadoCivil = EstadoCivil;
        this->RFC = RFC;
        this->Puesto = Puesto;
        this->EstadoEmpresa = EstadoEmpresa;
        this->Salario = Salario;
        this->NumeroCuenta = NumeroCuenta;
        this->NumeroSeguroSocial = NumeroSeguroSocial;
        this->SATKeys = SATKeys;
        this->ConstanciaFiscal = ConstanciaFiscal;
        this->FechaContratacion_Dia = FechaContratacion_Dia;
        this->FechaContratacion_Mes = FechaContratacion_Mes;
        this->FechaContratacion_Year = FechaContratacion_Year;
    }

    void RevisarDatos() {
        std::string filename = "BDPrincipal.csv";

        std::cout << "Escriba su ID: ";
        std::cin >> ID;

        // Leer el archivo CSV
        std::ifstream csvFileIn(filename);
        if (!csvFileIn.is_open()) {
            std::cerr << "Error abriendo el archivo.";
            return;
        }

        // Almacenamos los datos en un vector para visualizarlos
        std::vector<std::vector<std::string>> Data;
        std::string Line;
        while (std::getline(csvFileIn, Line)) {
            std::stringstream ss(Line);
            std::string Item;
            std::vector<std::string> Fila;
            while (std::getline(ss, Item, ',')) {
                Fila.push_back(Item);
            }
            Data.push_back(Fila);
        }

        // Imprimimos una fila específica de datos
        size_t filaImprimir = std::stoull (ID);
        if (filaImprimir < Data.size()) {
            for (const auto& Item : Data[filaImprimir]) {
                std::cout << Item << " ";
            }
            std::cout << "\n";
        } else {
            std::cerr << "La Fila a Imprimir no Existe.\n";
        }
    }

public:
    // Declaración de Variables
    std::string ID;
    std::string Nombre;
    std::string Direccion;
    std::string EstadoCivil;
    std::string RFC;
    std::string Puesto;
    std::string EstadoEmpresa;
    std::string Salario;
    int NumeroCuenta;
    int NumeroSeguroSocial;
    int SATKeys;
    int ConstanciaFiscal;
    int FechaContratacion_Dia;
    int FechaContratacion_Mes;
    int FechaContratacion_Year;
};

class Contador : public Empleado{
public:
    // Constructor Implicito de Contador con Herencia de Empleado
    Contador():Empleado(){
        this -> Saldo = 0;
        this -> Sucursal = "N/A";
        this -> PuestoEmpleado = "N/A";
    }

    // Constructor Explícito de Contador con Herencia de Empleado
    Contador(int Saldo, std::string Sucursal, std::string PuestoEmpleado):
            Empleado(ID,Nombre,Direccion,EstadoCivil,RFC,Puesto,EstadoEmpresa,Salario,NumeroCuenta,NumeroSeguroSocial,SATKeys,ConstanciaFiscal,FechaContratacion_Dia, FechaContratacion_Mes, FechaContratacion_Year){
        this -> Saldo = Saldo;
        this -> Sucursal = Sucursal;
        this -> PuestoEmpleado = PuestoEmpleado;
    }

    void RevisarDatos() {
        std::string filename = "BDPrincipal.csv";

        std::cout << "Escriba su ID: ";
        std::cin >> ID;

        // Leer el archivo CSV
        std::ifstream csvFileIn(filename);
        if (!csvFileIn.is_open()) {
            std::cerr << "Error abriendo el archivo.";
            return;
        }

        // Almacenamos los datos en un vector para visualizarlos
        std::vector<std::vector<std::string>> Data;
        std::string Line;
        while (std::getline(csvFileIn, Line)) {
            std::stringstream ss(Line);
            std::string Item;
            std::vector<std::string> Fila;
            while (std::getline(ss, Item, ',')) {
                Fila.push_back(Item);
            }
            Data.push_back(Fila);
        }

        // Imprimimos una fila específica de datos
        size_t filaImprimir = std::stoull (ID);
        if (filaImprimir < Data.size()) {
            for (const auto& Item : Data[filaImprimir]) {
                std::cout << Item << " ";
            }
            std::cout << "\n";
        } else {
            std::cerr << "La Fila a Imprimir no Existe.\n";
        }
    }

    void SalarioEmpleado() {
        std::string linea;
        std::string valor_columna;
        int fila_deseada = 1;
        int columna_deseada = 6;
        std::string filename = "BDPrincipal.csv";

        std::cout << "Escriba su ID: ";
        std::cin >> ID;

        //
        std::ifstream csvFileIn(filename);
        if (!csvFileIn.is_open()) {
            std::cerr << "Error abriendo el archivo";
            return;
        }

        for (int i = 0; fila_deseada >= i; ++i){
            if(!std::getline(csvFileIn, linea)){
                std::cerr << "Nose pudo leer la fila" << fila_deseada << std::endl;
            }
        }

        std::istringstream linea_stream(linea);
        std::string token;
        int columna_actual = 0;

        // Dividir la línea en tokens usando ',' como delimitador
        while (std::getline(linea_stream, token, ',')) {
            if (columna_actual == columna_deseada) {
                valor_columna = token;
                break;
            }
            columna_actual++;
        }

        // Imprimir el valor de la columna deseada
        std::cout << "Salario: " << valor_columna << std::endl;



        csvFileIn.close(); // Cerramos el archivo
    }

    void ClaveSAT() {
        std::string linea;
        std::string valor_columna;
        int fila_deseada = 1;
        int columna_deseada = 6;
        std::string filename = "BDPrincipal.csv";

        std::cout << "Escriba su ID: ";
        std::cin >> ID;

        //
        std::ifstream csvFileIn(filename);
        if (!csvFileIn.is_open()) {
            std::cerr << "Error abriendo el archivo";
            return;
        }

        for (int i = 0; fila_deseada >= i; ++i){
            if(!std::getline(csvFileIn, linea)){
                std::cerr << "Nose pudo leer la fila" << fila_deseada << std::endl;
            }
        }

        std::istringstream linea_stream(linea);
        std::string token;
        int columna_actual = 0;

        // Dividir la línea en tokens usando ',' como delimitador
        while (std::getline(linea_stream, token, ',')) {
            if (columna_actual == columna_deseada) {
                valor_columna = token;
                break;
            }
            columna_actual++;
        }

        // Imprimir el valor de la columna deseada
        std::cout << "SATKeys: " << valor_columna << std::endl;



        csvFileIn.close(); // Cerramos el archivo
    }

    void ConstanciasFiscales() {
        std::string linea;
        std::string valor_columna;
        int fila_deseada = 1;
        int columna_deseada = 6;
        std::string filename = "BDPrincipal.csv";

        std::cout << "Escriba su ID: ";
        std::cin >> ID;

        //
        std::ifstream csvFileIn(filename);
        if (!csvFileIn.is_open()) {
            std::cerr << "Error abriendo el archivo";
            return;
        }

        for (int i = 0; fila_deseada >= i; ++i){
            if(!std::getline(csvFileIn, linea)){
                std::cerr << "Nose pudo leer la fila" << fila_deseada << std::endl;
            }
        }

        std::istringstream linea_stream(linea);
        std::string token;
        int columna_actual = 0;

        // Dividir la línea en tokens usando ',' como delimitador
        while (std::getline(linea_stream, token, ',')) {
            if (columna_actual == columna_deseada) {
                valor_columna = token;
                break;
            }
            columna_actual++;
        }

        // Imprimir el valor de la columna deseada
        std::cout << "Constancia Fiscal: " << valor_columna << std::endl;



        csvFileIn.close(); // Cerramos el archivo
    }


private:
    // Declaracion de Variables
    int Saldo;
    std::string Sucursal;
    std::string PuestoEmpleado;
};

class Almacen : public Empleado{
public:
    // Constructor Implicito de Almacen con Herencia de Empleado
    Almacen():Empleado(){
        this -> NumCajas = 0;
        this -> EspacioDisponible = 0;
        this -> EspacioOcupado = 0;
        this -> PesoCajas = 0;
        this -> ContenidoCajas = "N/A";
    }

    // Constructor Explicito de Almacen con Herencia de Empleado
    Almacen(int NumCajas, int EspacioDisponible, int EspacioOcupado, int PesoCajas, std::string ContenidoCajas) :
            Empleado(ID,Nombre,Direccion,EstadoCivil,RFC,Puesto,EstadoEmpresa,Salario,NumeroCuenta,NumeroSeguroSocial,SATKeys,ConstanciaFiscal,FechaContratacion_Dia, FechaContratacion_Mes, FechaContratacion_Year){
        this -> NumCajas = NumCajas;
        this -> EspacioDisponible = EspacioDisponible;
        this -> EspacioOcupado = EspacioOcupado;
        this -> PesoCajas = PesoCajas;
        this -> ContenidoCajas = ContenidoCajas;
    }

    void RevisarDatos() {
        std::string filename = "BDPrincipal.csv";

        std::cout << "Escriba su ID: ";
        std::cin >> ID;

        // Leer el archivo CSV
        std::ifstream csvFileIn(filename);
        if (!csvFileIn.is_open()) {
            std::cerr << "Error abriendo el archivo.";
            return;
        }

        // Almacenamos los datos en un vector para visualizarlos
        std::vector<std::vector<std::string>> Data;
        std::string Line;
        while (std::getline(csvFileIn, Line)) {
            std::stringstream ss(Line);
            std::string Item;
            std::vector<std::string> Fila;
            while (std::getline(ss, Item, ',')) {
                Fila.push_back(Item);
            }
            Data.push_back(Fila);
        }

        // Imprimimos una fila específica de datos
        size_t filaImprimir = std::stoull (ID);
        if (filaImprimir < Data.size()) {
            for (const auto& Item : Data[filaImprimir]) {
                std::cout << Item << " ";
            }
            std::cout << "\n";
        } else {
            std::cerr << "La Fila a Imprimir no Existe.\n";
        }
    }

    void SucursalesInventario() {
        std::cout << "SucursalesInventario()"; //Placeholder
    }


private:
    // Declaracion de Variables
    int NumCajas;
    int EspacioDisponible;
    int EspacioOcupado;
    int PesoCajas;
    std::string ContenidoCajas;
};

class Gerente : public Empleado {
public:
    // Constructor Implicito
    Gerente():Empleado(){
        this -> Contratar = "N/A";
        this -> Despedir = "N/A";
    }

    // Constructor Explicito
    Gerente(std::string Contratar, std::string Despedir) :
            Empleado(ID,Nombre,Direccion,EstadoCivil,RFC,Puesto,EstadoEmpresa,Salario,NumeroCuenta,NumeroSeguroSocial,SATKeys,ConstanciaFiscal,FechaContratacion_Dia, FechaContratacion_Mes, FechaContratacion_Year){
        this -> Contratar = Contratar;
        this -> Despedir = Despedir;
    }

    void ContratarEmpleado(){
        std::string filename = "BDPrincipal.csv";

        // Ingresar Datos del Empleado
        std::cout << "Ingrese los nuevos datos del Empleado procurando separar los datos con una coma (Puesto, Nombre, Dirección, Estado Civil, RFC, Salario, Numero de Cuenta, Numero de Seguro Social, SATKeys, ConstanciaFiscal, Dia de Contratación, Mes de Contratación, Año de Contratación y Estado Actual en la Empresa, Usuario, Contraseña): "<<std::endl;
        std::string userInput;
        std::getline(std::cin, userInput);

        // Utiilizamos un stringstream para dividir los datos ingresados
        std::stringstream ss(userInput);
        std::vector<std::string> newEmpleado;
        while (std::getline(ss, userInput, ',')) {
            newEmpleado.push_back(userInput);
        }

        // Abrimos la BD para ingresar los datos
        std::ofstream csvFile(filename, std::ios::app);

        if (!csvFile.is_open()) {
            std::cerr << "Error al abrir la Base de Datos" << filename << std::endl;
            return;
        }

        for (size_t i = 1; i < newEmpleado.size(); i++) {
            csvFile << newEmpleado[i];
            if (i < newEmpleado.size() - 1){
                csvFile << ",";
            }
        }
        csvFile << "\n";

        // Agregamos números secuenciales en la columna de ID
        size_t UpdateCol = 0;
        for (size_t i = 0; i < newEmpleado.size(); i++) {
            newEmpleado[i][UpdateCol] = std::to_string(i + 1)[0];
        }

        for (const auto& fila : newEmpleado) {
            for (size_t i = 0; i < fila.size(); i++) {
                csvFile << fila[i];
                if (i < fila.size() - 1) {
                    csvFile << ",";
                }
            }
            csvFile << "\n";
        }

        // Cerramos la BD
        csvFile.close();

        std::cout << "¡Empleado agregado exitosamente!";
    }

    void DespedirEmpleado(){
        std::string filename = "BDPrincipal.csv";

        std::cout << "Escriba el ID del empleado a quien desea despedir: ";
        std::cin >> ID;

        // Leer el archivo CSV
        std::ifstream csvFileIn(filename);
        if (!csvFileIn.is_open()) {
            std::cerr << "Error abriendo el archivo.";
        }

        // Almacenamos los datos en un vector para poder modificarlos
        std::vector<std::vector<std::string>> Data;
        std::string Line;
        while (std::getline(csvFileIn, Line)) {
            std::stringstream ss(Line);
            std::string Item;
            std::vector<std::string> Fila;
            while (std::getline(ss, Item, ',')) {
                Fila.push_back(Item);
            }
            Data.push_back(Fila);
        }

        //Acomodamos los datos de la filas y columnas para cambiar el estado del empleado.
        size_t filaModificar = std::stoi(ID);
        size_t colModificar = 12;

        if (filaModificar < Data.size() && colModificar < Data[filaModificar].size()) {
            Data[filaModificar][colModificar] = "Despedido";
        } else {
            std::cerr << "La posición a modificar no existe.";
            return;
        }

        // Procedimiento para guardar los nuevos datos modificados en la BD
        std::ofstream csvFileOut(filename);
        if (!csvFileOut.is_open()) {
            std::cerr << "Error al abrir la Base de Datos.";
            return;
        }

        for (const auto& Fila : Data) {
            for (size_t i = 0; i < Fila.size(); i++) {
                csvFileOut << ",";
            }
        }
        csvFileOut << "\n";
        csvFileOut.close();
        std::cout << "¡Procedimiento exitoso!";
    }

    void RevisarDatosEmpleados() {
        std::string filename = "BDPrincipal.csv";

        // Leer el archivo CSV
        std::ifstream csvFileIn(filename);
        if (!csvFileIn.is_open()) {
            std::cerr << "Error abriendo el archivo.";
        }

        // Almacenamos los datos en un vector para visualizarlos
        std::vector<std::vector<std::string>> Data;
        std::string Line;
        while (std::getline(csvFileIn, Line)) {
            std::stringstream ss(Line);
            std::string Item;
            std::vector<std::string> Fila;
            while (std::getline(ss, Item, ',')) {
                Fila.push_back(Item);
            }
            Data.push_back(Fila);
        }

        // Imprime la base de datos actual
        std::cout << "Datos de los Empleados Actuales:\n";
        for (const auto& Fila : Data) {
            for (const auto& Item : Fila) {
                std::cout << Item << " ";
            }
            std::cout << "\n";
        }
    }

    void RevisarDatos() {
        std::string filename = "BDPrincipal.csv";

        std::cout << "Escriba su ID: ";
        std::cin >> ID;

        // Leer el archivo CSV
        std::ifstream csvFileIn(filename);
        if (!csvFileIn.is_open()) {
            std::cerr << "Error abriendo el archivo.";
            return;
        }

        // Almacenamos los datos en un vector para visualizarlos
        std::vector<std::vector<std::string>> Data;
        std::string Line;
        while (std::getline(csvFileIn, Line)) {
            std::stringstream ss(Line);
            std::string Item;
            std::vector<std::string> Fila;
            while (std::getline(ss, Item, ',')) {
                Fila.push_back(Item);
            }
            Data.push_back(Fila);
        }

        // Imprimimos una fila específica de datos
        size_t filaImprimir = std::stoi(ID);
        if (filaImprimir < Data.size()) {
            for (const auto& Item : Data[filaImprimir]) {
                std::cout << Item << " ";
            }
            std::cout << "\n";
        } else {
            std::cerr << "La Fila a Imprimir no Existe.\n";
        }
    }

private:
    // Declaración de Variables
    std::string Contratar;
    std::string Despedir;
};

class Jefe : public Empleado{
public:
    // Constructor Implicito
    Jefe():Empleado(){
        this -> Ascender = "N/A";
        this -> Descender = "N/A";
        this -> Despedir = "N/A";
        this -> Contratar = "N/A";
    }

    // Constructor Explicito
    Jefe(std::string Ascender, std::string Descender, std::string Despedir, std::string Contratar) :
            Empleado(ID,Nombre,Direccion,EstadoCivil,RFC,Puesto,EstadoEmpresa,Salario,NumeroCuenta,NumeroSeguroSocial,SATKeys,ConstanciaFiscal,FechaContratacion_Dia, FechaContratacion_Mes, FechaContratacion_Year){
        this -> Ascender = Ascender;
        this -> Descender = Descender;
        this -> Despedir = Despedir;
        this -> Contratar = Contratar;
    }

    void ImprimirContenidoArchivo(const std::string& filename) {
        std::ifstream file(filename);
        if (file.is_open()) {
            std::cout << "Contenido del archivo " << filename << ":" << std::endl;
            std::string line;
            while (std::getline(file, line)) {
                if (!line.empty()) {
                    std::cout << line << std::endl;
                }
            }
            file.close();
        } else {
            std::cerr << "No se pudo abrir el archivo " << filename << " para lectura." << std::endl;
        }
    }


    void LimpiarBufferEntrada() {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    void ContratarEmpleado() {
        std::string filename = "./BDPrincipal.csv";
        std::string userInput;

        LimpiarBufferEntrada();

        // Ingresar Datos del Empleado
        std::cout << "Ingrese los nuevos datos del Empleado procurando separar los datos con una coma (Puesto, Nombre, Direccion, Estado Civil, RFC, Salario, Numero de Cuenta, Numero de Seguro Social, Dia de Contratacion, Mes de Contratacion, Year de Contratacion y Estado Actual en la Empresa, Usuario, Con): " << std::endl;
        std::cin.ignore(); // Ignorar el salto de línea pendiente en el buffer
        std::getline(std::cin, userInput);

        if (std::cin.fail()) {
            std::cerr << "Error al leer la entrada del usuario." << std::endl;
            LimpiarBufferEntrada();
            return;
        }

        // Utiilizamos un stringstream para dividir los datos ingresados
        std::stringstream ss(userInput);
        std::vector<std::string> NewEmpleado;
        while (std::getline(ss, userInput, ',')) {
            NewEmpleado.push_back(userInput);
        }

        //Verificar si NewEmpleado tiene información.
        if(NewEmpleado.empty()) {
            std::cerr << "No se han ingresado datos." << std::endl;
            return;
        }

        // Abrimos la BD para ingresar los datos
        std::ofstream csvFile(filename, std::ios::app);
        if(!csvFile.is_open()) {
            std::cerr << "Error al abrir el archivo" << filename << std::endl;
            return;
        }

        // Agregamos números secuenciales en la columna de ID
        NewEmpleado.insert(NewEmpleado.begin(), std::to_string(NewEmpleado.size()));


        //Escribir en el archivo
        for (size_t i = 0; i < NewEmpleado.size(); i++) {
            csvFile << NewEmpleado[i];
            if (i < NewEmpleado.size() - 1) {
                csvFile << ",";
            }
        }
        csvFile << "\n";

        std::cout << "¡Empleado agregado exitosamente!" << std::endl;

        csvFile.close();

        ImprimirContenidoArchivo(filename);


        /*std::cout << "Iniciando offstream..." << std::endl;

        std::ofstream csvFileOut(filename, std::ios::app);
        if(!csvFileOut.is_open()) {
            std::cerr << "Error al abrir la base de datos.";
        }

        std::cout << "Ciclo FOR de almacenado de datos..." << std::endl;
        for (const auto& Fila : NewEmpleado) {
            for (size_t i = 0; i < Fila.size(); i++) {
                csvFileOut << ",";
            }
        }
        csvFile << "\n";

        std::cout << "Cerrando DB" << std::endl;

        // Cerramos la BD
        csvFile.close();

        std::cout << "¡Empleado agregado exitosamente!" << std::endl;
         */
    }

    void DespedirEmpleado(){
        std::string filename = "BDPrincipal.csv";

        std::cout << "Escriba el ID del empleado a quien desea despedir: "<<std::endl;
        std::cin >> ID;

        // Leer el archivo CSV
        std::ifstream csvFileIn(filename);
        if (!csvFileIn.is_open()) {
            std::cerr << "Error abriendo el archivo.";
        }

        // Almacenamos los datos en un vector para poder modificarlos
        std::vector<std::vector<std::string>> Data;
        std::string Line;
        while (std::getline(csvFileIn, Line)) {
            std::stringstream ss(Line);
            std::string Item;
            std::vector<std::string> Fila;
            while (std::getline(ss, Item, ',')) {
                Fila.push_back(Item);
            }
            Data.push_back(Fila);
        }

        //Acomodamos los datos de la filas y columnas para cambiar el estado del empleado.
        size_t filaModificar = std::stoull(ID);
        size_t colModificar = 12;

        if (filaModificar < Data.size() && colModificar < Data[filaModificar].size()) {
            Data[filaModificar][colModificar] = "Despedido";
        } else {
            std::cerr << "La posición a modificar no existe.";
        }

        // Procedimiento para guardar los nuevos datos modificados en la BD
        std::ofstream csvFileOut(filename);
        if (!csvFileOut.is_open()) {
            std::cerr << "Error al abrir la Base de Datos.";
        }

        for (const auto& Fila : Data) {
            for (size_t i = 0; i < Fila.size(); i++) {
                csvFileOut << ",";
            }
        }
        csvFileOut << "\n";
        csvFileOut.close();
        std::cout << "¡Procedimiento exitoso!"<<std::endl;
    }

    void DescenderEmpleado(){
        std::string filename = "BDPrincipal.csv";
        std::string NewPuesto;

        std::cout << "Escriba el ID del empleado que desea descender: "<<std::endl;
        std::cin >> ID;
        std::cout << "Escriba el nuevo puesto del Empleado: "<<std::endl;
        std::cin >> NewPuesto;

        // Leer el archivo CSV
        std::ifstream csvFileIn(filename);
        if (!csvFileIn.is_open()) {
            std::cout << "Error abriendo el archivo."<<std::endl;
        }

        // Almacenamos los datos en un vector para poder modificarlos
        std::vector<std::vector<std::string>> Data;
        std::string Line;
        while (std::getline(csvFileIn, Line)) {
            std::stringstream ss(Line);
            std::string Item;
            std::vector<std::string> Fila;
            while (std::getline(ss, Item, ',')) {
                Fila.push_back(Item);
            }
            Data.push_back(Fila);
        }

        //Acomodamos los datos de la filas y columnas para cambiar el estado del empleado.
        size_t filaModificar = std::stoul (ID);
        size_t colModificar = 1;

        if (filaModificar < Data.size() && colModificar < Data[filaModificar].size()) {
            Data[filaModificar][colModificar] = NewPuesto;
        } else {
            std::cerr << "La posición a modificar no existe.";
        }

        // Procedimiento para guardar los nuevos datos modificados en la BD
        std::ofstream csvFileOut(filename);
        if (!csvFileOut.is_open()) {
            std::cerr << "Error al abrir la Base de Datos.";
        }

        for (const auto& Fila : Data) {
            for (size_t i = 0; i < Fila.size(); i++) {
                csvFileOut << ",";
            }
        }
        csvFileOut << "\n";
        csvFileOut.close();
        std::cout << "¡Procedimiento exitoso!";
    }

    void AscenderEmpleado() {
        std::string filename = "BDPrincipal.csv";
        std::string NewPuesto;

        std::cout << "Escriba el ID del empleado que desea ascender: "<<std::endl;
        std::cin >> ID;
        std::cout << "Escriba el nuevo puesto del Empleado: "<<std::endl;
        std::cin >> NewPuesto;

        // Leer el archivo CSV
        std::ifstream csvFileIn(filename);
        if (!csvFileIn.is_open()) {
            std::cerr << "Error abriendo el archivo.";
        }

        // Almacenamos los datos en un vector para poder modificarlos
        std::vector<std::vector<std::string>> Data;
        std::string Line;
        while (std::getline(csvFileIn, Line)) {
            std::stringstream ss(Line);
            std::string Item;
            std::vector<std::string> Fila;
            while (std::getline(ss, Item, ',')) {
                Fila.push_back(Item);
            }
            Data.push_back(Fila);
        }

        //Acomodamos los datos de la filas y columnas para cambiar el estado del empleado.
        size_t filaModificar = std::stoul (ID);
        size_t colModificar = 1;

        if (filaModificar < Data.size() && colModificar < Data[filaModificar].size()) {
            Data[filaModificar][colModificar] = NewPuesto;
        } else {
            std::cerr << "La posición a modificar no existe.";
        }

        // Procedimiento para guardar los nuevos datos modificados en la BD
        std::ofstream csvFileOut(filename);
        if (!csvFileOut.is_open()) {
            std::cerr << "Error al abrir la Base de Datos.";
        }

        for (const auto& Fila : Data) {
            for (size_t i = 0; i < Fila.size(); i++) {
                csvFileOut << ",";
            }
        }
        csvFileOut << "\n";
        csvFileOut.close();
        std::cout << "¡Procedimiento exitoso!";
    }

    void RevisarDatosEmpleados() {
        std::string filename = "BDPrincipal.csv";

        // Leer el archivo CSV
        std::ifstream csvFileIn(filename);
        if (!csvFileIn.is_open()) {
            std::cerr << "Error abriendo el archivo.";
        }

        // Almacenamos los datos en un vector para visualizarlos
        std::vector<std::vector<std::string>> Data;
        std::string Line;
        while (std::getline(csvFileIn, Line)) {
            std::stringstream ss(Line);
            std::string Item;
            std::vector<std::string> Fila;
            while (std::getline(ss, Item, ',')) {
                Fila.push_back(Item);
            }
            Data.push_back(Fila);
        }

        // Imprime la base de datos actual
        std::cout << "Datos de los Empleados Actuales:\n";
        for (const auto& Fila : Data) {
            for (const auto& Item : Fila) {
                std::cout << Item << " ";
            }
            std::cout << "\n";
        }
    }

    void RevisarDatos() {
        std::string filename = "BDPrincipal.csv";

        std::cout << "Escriba su ID: ";
        std::cin >> ID;

        // Leer el archivo CSV
        std::ifstream csvFileIn(filename);
        if (!csvFileIn.is_open()) {
            std::cerr << "Error abriendo el archivo.";
            return;
        }

        // Almacenamos los datos en un vector para visualizarlos
        std::vector<std::vector<std::string>> Data;
        std::string Line;
        while (std::getline(csvFileIn, Line)) {
            std::stringstream ss(Line);
            std::string Item;
            std::vector<std::string> Fila;
            while (std::getline(ss, Item, ',')) {
                Fila.push_back(Item);
            }
            Data.push_back(Fila);
        }

        // Imprimimos una fila específica de datos
        size_t filaImprimir = std::stoull (ID);
        if (filaImprimir < Data.size()) {
            for (const auto& Item : Data[filaImprimir]) {
                std::cout << Item << " ";
            }
            std::cout << "\n";
        } else {
            std::cerr << "La Fila a Imprimir no Existe.\n";
        }
    }

private:
    //Declaración de Variables
    std::string Ascender;
    std::string Descender;
    std::string Despedir;
    std::string Contratar;
};

#endif //PROGRAMACIONI_PROYECTO4PARCIAL_USUARIOS_H

#pragma clang diagnostic pop