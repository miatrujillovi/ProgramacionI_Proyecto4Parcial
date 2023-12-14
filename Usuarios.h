#ifndef PROGRAMACIONI_PROYECTO4PARCIAL_USUARIOS_H
#define PROGRAMACIONI_PROYECTO4PARCIAL_USUARIOS_H

class Empleado{
public:
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

private:
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
    Contador():Empleado(){
        this -> Saldo = 0;
        this -> Sucursal = "N/A";
        this -> SATKeys = "N/A";
    }
};

#endif //PROGRAMACIONI_PROYECTO4PARCIAL_USUARIOS_H
