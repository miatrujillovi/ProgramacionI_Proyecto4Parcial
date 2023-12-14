#ifndef PROGRAMACIONI_PROYECTO4PARCIAL_USUARIOS_H
#define PROGRAMACIONI_PROYECTO4PARCIAL_USUARIOS_H

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


private:
    // Declaracion de Variables
    int NumCajas;
    int EspacioDisponible;
    int EspacioOcupado;
    int PesoCajas;
    std::string ContenidoCajas;
};

#endif //PROGRAMACIONI_PROYECTO4PARCIAL_USUARIOS_H
