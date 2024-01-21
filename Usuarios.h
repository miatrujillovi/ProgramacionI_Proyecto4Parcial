#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winaccessible-base"
#ifndef PROGRAMACIONI_PROYECTO4PARCIAL_USUARIOS_H
#define PROGRAMACIONI_PROYECTO4PARCIAL_USUARIOS_H

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include "Sucursales.h"

class Empleado{
public:
    // Constructor Implicito de Empleado
    Empleado(){
        this -> Nombre = "N/A";
        this -> Direccion = "N/A";
        this -> EstadoCivil = "N/A";
        this -> RFC = "N/A";
        this -> Puesto = "N/A";
        this -> EstadoEmpresa = "N/A";
        this -> Salario = 0;
        this -> NumeroCuenta = 0;
        this -> NumeroSeguroSocial = 0;
        this -> FechaContratacion_Dia = 0;
        this -> FechaContratacion_Mes = 0;
        this -> FechaContratacion_Year = 0;
    }

    // Constructor Explicito de Empleado
    Empleado(std::string Nombre, std::string Direccion, std::string EstadoCivil, std::string RFC, std::string Puesto, std::string EstadoEmpresa, int Salario, int NumeroCuenta, int NumeroSeguroSocial, int FechaContratacion_Dia, int FechaContratacion_Mes, int FechaContratacion_Year){
        this -> Nombre = Nombre;
        this -> Direccion = Direccion;
        this -> EstadoCivil = EstadoCivil;
        this -> RFC = RFC;
        this -> Puesto = Puesto;
        this -> EstadoEmpresa = EstadoEmpresa;
        this -> Salario = Salario;
        this -> NumeroCuenta = NumeroCuenta;
        this -> NumeroSeguroSocial = NumeroSeguroSocial;
        this -> FechaContratacion_Dia = FechaContratacion_Dia;
        this -> FechaContratacion_Mes = FechaContratacion_Mes;
        this -> FechaContratacion_Year = FechaContratacion_Year;
    }

    //Getters
    std::string getNombre(){
        return this -> Nombre;
    }
    std::string getDireccion(){
        return this -> Direccion;
    }
    std::string getEstadoCivil(){
        return this -> EstadoCivil;
    }
    std::string getRFC(){
        return this -> RFC;
    }
    std::string getPuesto(){
        return this -> Puesto;
    }
    std::string getEstadoEmpresa(){
        return this -> EstadoEmpresa;
    }
    int getSalario(){
        return this -> Salario;
    }
    int getNumeroCuenta(){
        return this -> NumeroCuenta;
    }
    int getNumeroSeguroSocial(){
        return this -> NumeroSeguroSocial;
    }
    int getFechaContratacion_Dia(){
        return this -> FechaContratacion_Dia;
    }
    int getFechaContratacion_Mes(){
        return this -> FechaContratacion_Mes;
    }
    int getFechaContratacion_Year(){
        return this -> FechaContratacion_Year;
    }

    //Setters
    void setNombre(std::string Nombre){
        this -> Nombre = Nombre;
    }
    void setDireccion(std::string Direccion){
        this -> Direccion = Direccion;
    }
    void setEstadoCivil(std::string EstadoCivil){
        this -> EstadoCivil = EstadoCivil;
    }
    void setRFC(std::string RFC){
        this -> RFC = RFC;
    }
    void setPuesto(std::string Puesto){
        this -> Puesto = Puesto;
    }
    void setEstadoEmpresa(std::string EstadoEmpresa){
        this -> EstadoEmpresa = EstadoEmpresa;
    }
    void setSalario(int Salario){
        this -> Salario = Salario;
    }
    void setNumeroCuenta(int NumeroCuenta){
        this -> NumeroCuenta = NumeroCuenta;
    }
    void setNumeroSeguroSocial(int NumeroSeguroSocial){
        this -> NumeroSeguroSocial = NumeroSeguroSocial;
    }
    void setFechaContratacion_Dia(int FechaContratacion_Dia){
        this -> FechaContratacion_Dia = FechaContratacion_Dia;
    }
    void setFechaContratacion_Mes(int FechaContratacion_Mes){
        this -> FechaContratacion_Mes = FechaContratacion_Mes;
    }
    void setFechaContratacion_Year(int FechaContratacion_Year){
        this -> FechaContratacion_Year = FechaContratacion_Year;
    }


    void RevisarDatos() {
        std::string filename = "BDPrincipal.csv";

        std::cout << "Escriba su ID: ";
        std::cin >> ID;

        // Leer el archivo CSV
        std::ifstream csvFileIn(filename);
        if (!csvFileIn.is_open()) {
            std::cerr << "Error abriendo el archivo.";
            return 1;
        }

        // Almacenamos los datos en un vector para visualizarlos
        std::vector<std::vector<std::string>> Data;
        std::string Line;
        while (std::getLine(csvFileIn, Line)) {
            std::stringstream ss(Line);
            std::string Item;
            std::vector<std::string> Fila;
            while (std::getline(ss, Item, ',')) {
                Fila.push_back(Item);
            }
            Data.push_back(Fila);
        }

        // Imprimimos una fila especifica de datos
        size_t filaImprimir = ID;
        if (filaImprimir << Data.size()) {
            for (const auto& Item : Data[filaImprimir]) {
                std::cout << Item << " ";
            }
            std::cout << "\n";
        } else {
            std::cerr << "La Fila a Imprimir no Existe.";
            return 1;
        }
    }

private:
    // Declaracion de Variables
    std::string Nombre;
    std::string Direccion;
    std::string EstadoCivil;
    std::string RFC;
    std::string Puesto;
    std::string EstadoEmpresa;
    int Salario;
    int NumeroCuenta;
    int NumeroSeguroSocial;
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
        this -> SATKeys = "N/A";
        this -> ConstanciaSituacionFiscal = "N/A";
        this -> PuestoEmpleado = "N/A";
    }

    // Constructor Explicito de Contador con Herencia de Empleado
    Contador(int Saldo, std::string Sucursal, std::string SATKeys, std::string ConstanciaSituacionFiscal, std::string PuestoEmpleado): Empleado(std::string Nombre, std::string Direccion, std::string EstadoCivil, std::string RFC, std::string Puesto, std::string EstadoEmpresa, int Salario, int NumeroCuenta, int NumeroSeguroSocial, int FechaContratacion_Dia, int FechaContratacion_Mes, int FechaContratacion_Year){
        this -> Saldo = Saldo;
        this -> Sucursal = Sucursal;
        this -> SATKeys = SATKeys;
        this -> ConstanciaSituacionFiscal = ConstanciaSituacionFiscal;
        this -> PuestoEmpleado = PuestoEmpleado;
    }

    //Getters
    int getSaldo(){
        return this -> Saldo;
    }
    std::string getSucursal(){
        return this -> Sucursal;
    }
    std::string getSATKeys(){
        return this -> SATKeys;
    }
    std::string getConstanciaSituacionFiscal(){
        return this -> ConstanciaSituacionFiscal;
    }
    std::string getPuestoEmpleado(){
        return this -> PuestoEmpleado;
    }

    //Setters
    void setSaldo(int Saldo){
        this -> Saldo = Saldo;
    }
    void setSucursal(std::string Sucursal){
        this -> Sucursal = Sucursal;
    }
    void setSATKeys(std::string SATKeys){
        this -> SATKeys = SATKeys;
    }
    void setConstanciaSituacionFiscal(std::string ConstanciaSituacionFiscal){
        this -> ConstanciaSituacionFiscal = ConstanciaSituacionFiscal;
    }
    void setPuestoEmpleado(std::string PuestoEmpleado){
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
            return 1;
        }

        // Almacenamos los datos en un vector para visualizarlos
        std::vector<std::vector<std::string>> Data;
        std::string Line;
        while (std::getLine(csvFileIn, Line)) {
            std::stringstream ss(Line);
            std::string Item;
            std::vector<std::string> Fila;
            while (std::getline(ss, Item, ',')) {
                Fila.push_back(Item);
            }
            Data.push_back(Fila);
        }

        // Imprimimos una fila especifica de datos
        size_t filaImprimir = ID;
        if (filaImprimir << Data.size()) {
            for (const auto& Item : Data[filaImprimir]) {
                std::cout << Item << " ";
            }
            std::cout << "\n";
        } else {
            std::cerr << "La Fila a Imprimir no Existe.";
            return 1;
        }
    }

    void SalarioEmpleado() {
        std::string filename = "BDPrincipal.csv";

        std::cout << "Escriba su ID: ";
        std::cin >> ID;

        //
        std::ifstream csvFileIn(filename);
        if (!csvFileIn.is_open()) {
            std::cerr << "Error abriendo el archivo";
            return 1;
        }

        char delimitador = ',';
        while(std::getline(csvFileIn, linea)){
            std::stringstream stream(linea);

            //Pedir o sacar datos de la BD
            std::getline(stream, id, delimitador);
            std::getline(stream, Salario, delimitador);

            //Imprimir los datos que se solicitan
            std::cout << "ID: " << std::endl;
            std::cout << "Salario: " << std::endl;
        }

        csvFileIn.close(); //Cerramos el archivo

    }

    void ClavesSAT() {
        std::string filename = "BDPrincipal.csv";

        std::cout << "Escriba su ID: ";
        std::cin >> ID;

        //
        std::ifstream csvFileIn(filename);
        if (!csvFileIn.is_open()) {
            std::cerr << "Error abriendo el archivo";
            return 1;
        }

        char delimitador = ',';
        while(std::getline(csvFileIn, linea)){
            std::stringstream stream(linea);

            //Pedir o sacar datos de la BD
            std::getline(stream, id, delimitador);
            std::getline(stream, SATKeys, delimitador);

            //Imprimir los datos que se solicitan
            std::cout << "ID: " << std::endl;
            std::cout << "Clave SAT: " << std::endl;
        }

        csvFileIn.close(); //Cerramos el archivo
    }

    void ConstanciasFiscales() {
        std::string filename = "BDPrincipal.csv";

        std::cout << "Escriba su ID: ";
        std::cin >> ID;

        //
        std::ifstream csvFileIn(filename);
        if (!csvFileIn.is_open()) {
            std::cerr << "Error abriendo el archivo";
            return 1;
        }

        //Mostrar datos de BD
        char delimitador = ',';
        while(std::getline(csvFileIn, linea)){
            std::stringstream stream(linea);

            //Pedir o sacar datos de la BD
            std::getline(stream, id, delimitador);
            std::getline(stream, ConstanciaSituacionFiscal, delimitador);

            //Imprimir los datos que se solicitan
            std::cout << "ID: " << std::endl;
            std::cout << "Constancia de Situacion Fiscal: " << std::endl;
        }

        csvFileIn.close(); //Cerramos el archivo
    }


private:
    // Declaracion de Variables
    int Saldo;
    std::string Sucursal;
    std::string SATKeys;
    std::string ConstanciaSituacionFiscal;
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
    Almacen(int NumCajas, int EspacioDisponible, int EspacioOcupado, int PesoCajas, std::string ContenidoCajas) : Empleado(std::string Nombre, std::string Direccion, std::string EstadoCivil, std::string RFC, std::string Puesto, std::string EstadoEmpresa, int Salario, int NumeroCuenta, int NumeroSeguroSocial, int FechaContratacion_Dia, int FechaContratacion_Mes, int FechaContratacion_Year){
        this -> NumCajas = NumCajas;
        this -> EspacioDisponible = EspacioDisponible;
        this -> EspacioOcupado = EspacioOcupado;
        this -> PesoCajas = PesoCajas;
        this -> ContenidoCajas = ContenidoCajas;
    }

    //Getters
    int getNumCajas(){
        return this -> NumCajas;
    }
    int getEspacioDisponible(){
        return this -> EspacioDisponible;
    }
    int getEspacioOcupado(){
        return this -> EspacioOcupado;
    }
    int getPesoCajas(){
        return this -> PesoCajas;
    }
    std::string getContenidoCajas(){
        return this -> ContenidoCajas;
    }

    //Setters
    void setNumCajas(int NumCajas){
        this -> NumCajas = NumCajas;
    }
    void setEspacioDisponible(int EspacioDisponible){
        this -> EspacioDisponible = EspacioDisponible;
    }
    void setEspacioOcupado(int EspacioOcupado){
        this -> EspacioOcupado = EspacioOcupado;
    }
    void setPesoCajas(int PesoCajas){
        this -> PesoCajas = PesoCajas;
    }
    void setContenidoCajas(std::string ContenidoCajas){
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
            return 1;
        }

        // Almacenamos los datos en un vector para visualizarlos
        std::vector<std::vector<std::string>> Data;
        std::string Line;
        while (std::getLine(csvFileIn, Line)) {
            std::stringstream ss(Line);
            std::string Item;
            std::vector<std::string> Fila;
            while (std::getline(ss, Item, ',')) {
                Fila.push_back(Item);
            }
            Data.push_back(Fila);
        }

        // Imprimimos una fila especifica de datos
        size_t filaImprimir = ID;
        if (filaImprimir << Data.size()) {
            for (const auto& Item : Data[filaImprimir]) {
                std::cout << Item << " ";
            }
            std::cout << "\n";
        } else {
            std::cerr << "La Fila a Imprimir no Existe.";
            return 1;
        }
    }

    void Sucursales() {
        std::string filename = "BDPrincipal.csv";

        std::cout << "Escriba su ID: ";
        std::cin >> ID;

        //
        std::ifstream csvFileIn(filename);
        if (!csvFileIn.is_open()) {
            std::cerr << "Error abriendo el archivo";
            return 1;
        }

        char delimitador = ',';
        while(std::getline(csvFileIn, linea)){
            std::stringstream stream(linea);

            //Pedir o sacar datos de la BD
            std::getline(stream, id, delimitador);
            std::getline(stream, Salario, delimitador);

            //Imprimir los datos que se solicitan
            std::cout << "ID: " << std::endl;
            std::cout << "Salario: " << std::endl;
        }

        csvFileIn.close(); //Cerramos el archivo
    }

    void Inventario() {
        std::string filename = "BDPrincipal.csv";

        std::cout << "Escriba su ID: ";
        std::cin >> ID;

        //
        std::ifstream csvFileIn(filename);
        if (!csvFileIn.is_open()) {
            std::cerr << "Error abriendo el archivo";
            return 1;
        }
    }

    void ContenidoInventario() {
        std::string filename = "BDPrincipal.csv";

        std::cout << "Escriba su ID: ";
        std::cin >> ID;

        //
        std::ifstream csvFileIn(filename);
        if (!csvFileIn.is_open()) {
            std::cerr << "Error abriendo el archivo";
            return 1;
        }
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
    Gerente(std::string Contratar, std::string Despedir) : Empleado(std::string Nombre, std::string Direccion, std::string EstadoCivil, std::string RFC, std::string Puesto, std::string EstadoEmpresa, int Salario, int NumeroCuenta, int NumeroSeguroSocial, int FechaContratacion_Dia, int FechaContratacion_Mes, int FechaContratacion_Year){
        this -> Contratar = Contratar;
        this -> Despedir = Despedir;
    }

    //Getters
    int getContratar(){
        return this -> Contratar;
    }
    int getDespedir(){
        return this -> Despedir;
    }

    //Setters
    void setContratar(std::string Contratar){
        this -> Contratar = Contratar;
    }
    void setDespedir(std::string Despedir){
        this -> Despedir = Despedir;
    }

    void ContratarEmpleado(){
        std::string filename = "BDPrincipal.csv";

        // Ingresar Datos del Empleado
        std::cout << "Ingrese los nuevos datos del Empleado procurando separar los datos con una coma (Puesto, Nombre, Dirección, Estado Civil, RFC, Salario, Numero de Cuenta, Numero de Seguro Social, Dia de Contratación, Mes de Contratación, Año de Contratación y Estado Actual en la Empresa): "
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
            return 1;
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
        for (size_t i = 0; i < newEmpleado(); i++) {
            newEmpleado[i][UpdateCol] = std::to_string(i + 1);
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

        std::cout << "Escriba el ID del empleado a quien desea despedir: "
        std::cin >> ID;

        // Leer el archivo CSV
        std::ifstream csvFileIn(filename);
        if (!csvFileIn.is_open()) {
            std::cerr << "Error abriendo el archivo.";
            return 1;
        }

        // Almacenamos los datos en un vector para poder modificarlos
        std::vector<std::vector<std::string>> Data;
        std::string Line;
        while (std::getLine(csvFileIn, Line)) {
            std::stringstream ss(Line);
            std::string Item;
            std::vector<std::string> Fila;
            while (std::getline(ss, Item, ',')) {
                Fila.push_back(Item);
            }
            Data.push_back(Fila);
        }

        //Acomodamos los datos de la filas y columnas para cambiar el estado del empleado.
        size_t filaModificar = ID;
        size_t colModificar = 12;

        if (filaModificar < Data.size() && colModificar < Data[filaModificar].size()) {
            Data[filaModificar][colModificar] = "Despedido";
        } else {
            std::cerr << "La posición a modificar no existe.";
            return 1;
        }

        // Procedimiento para guardar los nuevos datos modificados en la BD
        std::ofstream csvFileOut(filename);
        if (!csvFileOut.is_open()) {
            std::cerr << "Error al abrir la Base de Datos.";
            return 1;
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
            return 1;
        }

        // Almacenamos los datos en un vector para visualizarlos
        std::vector<std::vector<std::string>> Data;
        std::string Line;
        while (std::getLine(csvFileIn, Line)) {
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
            return 1;
        }

        // Almacenamos los datos en un vector para visualizarlos
        std::vector<std::vector<std::string>> Data;
        std::string Line;
        while (std::getLine(csvFileIn, Line)) {
            std::stringstream ss(Line);
            std::string Item;
            std::vector<std::string> Fila;
            while (std::getline(ss, Item, ',')) {
                Fila.push_back(Item);
            }
            Data.push_back(Fila);
        }

        // Imprimimos una fila especifica de datos
        size_t filaImprimir = ID;
        if (filaImprimir << Data.size()) {
            for (const auto& Item : Data[filaImprimir]) {
                std::cout << Item << " ";
            }
            std::cout << "\n";
        } else {
            std::cerr << "La Fila a Imprimir no Existe.";
            return 1;
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
    Jefe(std::string Ascender, std::string Descender, std::string Despedir, std::string Contratar) : Empleado(std::string Nombre, std::string Direccion, std::string EstadoCivil, std::string RFC, std::string Puesto, std::string EstadoEmpresa, int Salario, int NumeroCuenta, int NumeroSeguroSocial, int FechaContratacion_Dia, int FechaContratacion_Mes, int FechaContratacion_Year){
        this -> Ascender = Ascender;
        this -> Descender = Descender;
        this -> Despedir = Despedir;
        this -> Contratar = Contratar;
    }

    // Getters
    int getAscender(){
        return this -> Ascender;
    }
    int getDescender(){
        return this -> Descender;
    }
    int getDespedir(){
        return this -> Despedir;
    }
    int getContratar(){
        return this -> Contratar;
    }

    // Setters
    void setAscender(std::string Ascender){
        this -> Ascender = Ascender;
    }
    void setDescender(std::string Descender){
        this -> Descender = Descender;
    }
    void setDespedir(std::string Despedir){
        this -> Despedir = Despedir;
    }
    void setContratar(std::string Contratar){
        this -> Contratar = Contratar;
    }

    void ContratarEmpleado(){
        std::string filename = "BDPrincipal.csv";

        // Ingresar Datos del Empleado
        std::cout << "Ingrese los nuevos datos del Empleado procurando separar los datos con una coma (Puesto, Nombre, Dirección, Estado Civil, RFC, Salario, Numero de Cuenta, Numero de Seguro Social, Dia de Contratación, Mes de Contratación, Año de Contratación y Estado Actual en la Empresa): "
        std::string userInput;
        std::getline(std::cin, userInput);

        // Utiilizamos un stringstream para dividir los datos ingresados
        std::stringstream ss(userInput);
        std::vector<std::string> NewEmpleado;
        while (std::getline(ss, userInput, ',')) {
            newEmpleado.push_back(userInput);
        }

        // Abrimos la BD para ingresar los datos
        std::ofstream csvFile(filename, std::ios::app);

        if (!csvFile.is_open()) {
            std::cerr << "Error al abrir la Base de Datos" << filename << std::endl;
            return 1;
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
        for (size_t i = 0; i < NewEmpleado(); i++) {
            NewEmpleado[i][UpdateCol] = std::to_string(i + 1);
        }

        for (const auto& fila : NewEmpleado) {
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

        std::cout << "Escriba el ID del empleado a quien desea despedir: "
        std::cin >> ID;

        // Leer el archivo CSV
        std::ifstream csvFileIn(filename);
        if (!csvFileIn.is_open()) {
            std::cerr << "Error abriendo el archivo.";
            return 1;
        }

        // Almacenamos los datos en un vector para poder modificarlos
        std::vector<std::vector<std::string>> Data;
        std::string Line;
        while (std::getLine(csvFileIn, Line)) {
            std::stringstream ss(Line);
            std::string Item;
            std::vector<std::string> Fila;
            while (std::getline(ss, Item, ',')) {
                Fila.push_back(Item);
            }
            Data.push_back(Fila);
        }

        //Acomodamos los datos de la filas y columnas para cambiar el estado del empleado.
        size_t filaModificar = ID;
        size_t colModificar = 12;

        if (filaModificar < Data.size() && colModificar < Data[filaModificar].size()) {
            Data[filaModificar][colModificar] = "Despedido";
        } else {
            std::cerr << "La posición a modificar no existe.";
            return 1;
        }

        // Procedimiento para guardar los nuevos datos modificados en la BD
        std::ofstream csvFileOut(filename);
        if (!csvFileOut.is_open()) {
            std::cerr << "Error al abrir la Base de Datos.";
            return 1;
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

    void DescenderEmpleado(){
        std::string filename = "BDPrincipal.csv";

        std::cout << "Escriba el ID del empleado que desea descender: "
        std::cin >> ID;
        std::cout << "Escriba el nuevo puesto del Empleado: "
        std::cin >> NewPuesto;

        // Leer el archivo CSV
        std::ifstream csvFileIn(filename);
        if (!csvFileIn.is_open()) {
            std::cerr << "Error abriendo el archivo.";
            return 1;
        }

        // Almacenamos los datos en un vector para poder modificarlos
        std::vector<std::vector<std::string>> Data;
        std::string Line;
        while (std::getLine(csvFileIn, Line)) {
            std::stringstream ss(Line);
            std::string Item;
            std::vector<std::string> Fila;
            while (std::getline(ss, Item, ',')) {
                Fila.push_back(Item);
            }
            Data.push_back(Fila);
        }

        //Acomodamos los datos de la filas y columnas para cambiar el estado del empleado.
        size_t filaModificar = ID;
        size_t colModificar = 1;

        if (filaModificar < Data.size() && colModificar < Data[filaModificar].size()) {
            Data[filaModificar][colModificar] = NewPuesto;
        } else {
            std::cerr << "La posición a modificar no existe.";
            return 1;
        }

        // Procedimiento para guardar los nuevos datos modificados en la BD
        std::ofstream csvFileOut(filename);
        if (!csvFileOut.is_open()) {
            std::cerr << "Error al abrir la Base de Datos.";
            return 1;
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

        std::cout << "Escriba el ID del empleado que desea ascender: "
        std::cin >> ID;
        std::cout << "Escriba el nuevo puesto del Empleado: "
        std::cin >> NewPuesto;

        // Leer el archivo CSV
        std::ifstream csvFileIn(filename);
        if (!csvFileIn.is_open()) {
            std::cerr << "Error abriendo el archivo.";
            return 1;
        }

        // Almacenamos los datos en un vector para poder modificarlos
        std::vector<std::vector<std::string>> Data;
        std::string Line;
        while (std::getLine(csvFileIn, Line)) {
            std::stringstream ss(Line);
            std::string Item;
            std::vector<std::string> Fila;
            while (std::getline(ss, Item, ',')) {
                Fila.push_back(Item);
            }
            Data.push_back(Fila);
        }

        //Acomodamos los datos de la filas y columnas para cambiar el estado del empleado.
        size_t filaModificar = ID;
        size_t colModificar = 1;

        if (filaModificar < Data.size() && colModificar < Data[filaModificar].size()) {
            Data[filaModificar][colModificar] = NewPuesto;
        } else {
            std::cerr << "La posición a modificar no existe.";
            return 1;
        }

        // Procedimiento para guardar los nuevos datos modificados en la BD
        std::ofstream csvFileOut(filename);
        if (!csvFileOut.is_open()) {
            std::cerr << "Error al abrir la Base de Datos.";
            return 1;
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
            return 1;
        }

        // Almacenamos los datos en un vector para visualizarlos
        std::vector<std::vector<std::string>> Data;
        std::string Line;
        while (std::getLine(csvFileIn, Line)) {
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
            return 1;
        }

        // Almacenamos los datos en un vector para visualizarlos
        std::vector<std::vector<std::string>> Data;
        std::string Line;
        while (std::getLine(csvFileIn, Line)) {
            std::stringstream ss(Line);
            std::string Item;
            std::vector<std::string> Fila;
            while (std::getline(ss, Item, ',')) {
                Fila.push_back(Item);
            }
            Data.push_back(Fila);
        }

        // Imprimimos una fila especifica de datos
        size_t filaImprimir = ID;
        if (filaImprimir << Data.size()) {
            for (const auto& Item : Data[filaImprimir]) {
                std::cout << Item << " ";
            }
            std::cout << "\n";
        } else {
            std::cerr << "La Fila a Imprimir no Existe.";
            return 1;
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