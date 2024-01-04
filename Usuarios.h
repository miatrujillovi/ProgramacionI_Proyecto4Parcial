#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winaccessible-base"
#ifndef PROGRAMACIONI_PROYECTO4PARCIAL_USUARIOS_H
#define PROGRAMACIONI_PROYECTO4PARCIAL_USUARIOS_H

#include <iostream>
#include <string>

class Empleado{
public:
    // Constructor Implicito de Empleado
    Empleado(){
        this -> Nombre = "N/A";
        this -> Direccion = "N/A";
        this -> EstadoCivil = "N/A";
        this -> RFC = "N/A";
        this -> NumeroCuenta = 0;
        this -> NumeroSeguroSocial = 0;
        this -> FechaContratacion_Dia = 0;
        this -> FechaContratacion_Mes = 0;
        this -> FechaContratacion_Year = 0;
    }

    // Constructor Explicito de Empleado
    Empleado(std::string Nombre, std::string Direccion, std::string EstadoCivil, std::string RFC, int NumeroCuenta, int NumeroSeguroSocial, int FechaContratacion_Dia, int FechaContratacion_Mes, int FechaContratacion_Year){
        this -> Nombre = Nombre;
        this -> Direccion = Direccion;
        this -> EstadoCivil = EstadoCivil;
        this -> RFC = RFC;
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
    Contador(int Saldo, std::string Sucursal, std::string SATKeys, std::string ConstanciaSituacionFiscal, std::string PuestoEmpleado): Empleado(std::string Nombre, std::string Direccion, std::string EstadoCivil, std::string RFC, int NumeroCuenta, int NumeroSeguroSocial, int FechaContratacion_Dia, int FechaContratacion_Mes, int FechaContratacion_Year){
        this -> Saldo = Saldo;
        this -> Sucursal = Sucursal;
        this -> SATKeys = SATKeys;
        this -> ConstanciaSituacionFiscal = ConstanciaSituacionFiscal;
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
    Almacen(int NumCajas, int EspacioDisponible, int EspacioOcupado, int PesoCajas, std::string ContenidoCajas) : Empleado(){
        this -> NumCajas = NumCajas;
        this -> EspacioDisponible = EspacioDisponible;
        this -> EspacioOcupado = EspacioOcupado;
        this -> PesoCajas = PesoCajas;
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

class Gerente : public Empleado, public Contador, public Almacen {
public:
    // Constructor Implicito de Gerente con Herencia de Empleado, Contador y Almacen
    Gerente():Empleado(), Contador(), Almacen(){
        this -> Contratar = "N/A";
        this -> Despedir = "N/A";
    }

    // Constructor Explicito de Gerente con Herencia de Empleado, Contador y Almacen
    Gerente(std::string Contratar, std::string Despedir) : Empleado(), Contador(), Almacen(){
        this -> Contratar = Contratar;
        this -> Despedir = Despedir;
    }

private:
    std::string Contratar;
    std::string Despedir;
};

class Jefe : public Empleado, public Contador, public Almacen, public Gerente{
public:
    // Constructor Implicito de Jefe con Herencia de Empleado, Contador, Almacen y Gerente
    Jefe():Empleado(), Contador(), Almacen(), Gerente(){}

};

#endif //PROGRAMACIONI_PROYECTO4PARCIAL_USUARIOS_H

#pragma clang diagnostic pop