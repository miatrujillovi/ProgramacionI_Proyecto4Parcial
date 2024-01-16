#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winaccessible-base"
#ifndef PROGRAMACIONI_PROYECTO4PARCIAL_USUARIOS_H
#define PROGRAMACIONI_PROYECTO4PARCIAL_USUARIOS_H

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>

class Empleado{
public:
    // Constructor Implicito de Empleado
    Empleado(){
        this -> Nombre = "N/A";
        this -> Direccion = "N/A";
        this -> EstadoCivil = "N/A";
        this -> RFC = "N/A";
        this -> Puesto = "N/A";
        this -> Salario = 0;
        this -> NumeroCuenta = 0;
        this -> NumeroSeguroSocial = 0;
        this -> FechaContratacion_Dia = 0;
        this -> FechaContratacion_Mes = 0;
        this -> FechaContratacion_Year = 0;
    }

    // Constructor Explicito de Empleado
    Empleado(std::string Nombre, std::string Direccion, std::string EstadoCivil, std::string RFC, std::string Puesto, int Salario, int NumeroCuenta, int NumeroSeguroSocial, int FechaContratacion_Dia, int FechaContratacion_Mes, int FechaContratacion_Year){
        this -> Nombre = Nombre;
        this -> Direccion = Direccion;
        this -> EstadoCivil = EstadoCivil;
        this -> RFC = RFC;
        this -> Puesto = Puesto;
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

    void RevisarDatos(){

    }

private:
    // Declaracion de Variables
    std::string Nombre;
    std::string Direccion;
    std::string EstadoCivil;
    std::string RFC;
    std::string Puesto;
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
    Contador(int Saldo, std::string Sucursal, std::string SATKeys, std::string ConstanciaSituacionFiscal, std::string PuestoEmpleado): Empleado(std::string Nombre, std::string Direccion, std::string EstadoCivil, std::string RFC, std::string Puesto, int Salario, int NumeroCuenta, int NumeroSeguroSocial, int FechaContratacion_Dia, int FechaContratacion_Mes, int FechaContratacion_Year){
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
        return this -> SETKeys;
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
    Almacen(int NumCajas, int EspacioDisponible, int EspacioOcupado, int PesoCajas, std::string ContenidoCajas) : Empleado(std::string Nombre, std::string Direccion, std::string EstadoCivil, std::string RFC, std::string Puesto, int Salario, int NumeroCuenta, int NumeroSeguroSocial, int FechaContratacion_Dia, int FechaContratacion_Mes, int FechaContratacion_Year){
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
    Gerente(std::string Contratar, std::string Despedir) : Empleado(std::string Nombre, std::string Direccion, std::string EstadoCivil, std::string RFC, std::string Puesto, int Salario, int NumeroCuenta, int NumeroSeguroSocial, int FechaContratacion_Dia, int FechaContratacion_Mes, int FechaContratacion_Year){
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
    Jefe(std::string Ascender, std::string Descender) : Empleado(std::string Nombre, std::string Direccion, std::string EstadoCivil, std::string RFC, std::string Puesto, int Salario, int NumeroCuenta, int NumeroSeguroSocial, int FechaContratacion_Dia, int FechaContratacion_Mes, int FechaContratacion_Year){
        this -> Ascender = Contratar;
        this -> Descender = Contratar;
        this -> Despedir = Contratar;
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

        std::ofstream csvFile(filename, std::ios::app);

        if (!csvFile.is_open()) {
            std::cerr << "Error al abrir la Base de Datos" << filename << std::endl;
            return 1;
        }

        // Comando para agregar a la base de datos usando setters y getters...
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