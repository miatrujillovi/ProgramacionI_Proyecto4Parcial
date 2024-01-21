//
// Created by Alumnos on 17/01/2024.
//

#ifndef PROGRAMACIONI_PROYECTO4PARCIAL_MENU_H
#define PROGRAMACIONI_PROYECTO4PARCIAL_MENU_H

#include "Usuarios.h"
#include <string>

// FUNCIONES GERENTE

void MenuGerente() {
    int value;
    Gerente gerente; //Invocación de clase Gerente de Usuarios

    std::cout << "===== MENU GERENTE =====" << std::endl;
    std::cout << "Bienvenido. Porfavor elije una opcion." << std::endl;
    std::cout << "[1] Registrar nuevo empleado" << std::endl;
    std::cout << "[2] Dar de baja empleado" << std::endl;
    std::cout << "[3] Revisar datos de un empleado" << std::endl;
    std::cout << "[4] Revisar datos de todos los empleados" << std::endl;
    std::cout << "======================" << std::endl;

    std::cin >> value;

    switch (value) {
        case 1:
            gerente.ContratarEmpleado();
        case 2:
            gerente.DespedirEmpleado();
        case 3:
            gerente.RevisarDatosEmpleados();
        case 4:
            gerente.RevisarDatos();
    }
}

// FUNCIONES JEFE

void MenuJefe() {
    int value;
    Jefe jefe; //Invocación de clase Jefe de Usuarios

    std::cout << "===== MENU JEFE =====" << std::endl;
    std::cout << "Bienvenido. Porfavor elije una opcion." << std::endl;
    std::cout << "[1] Registrar nuevo empleado" << std::endl;
    std::cout << "[2] Dar de baja empleado" << std::endl;
    std::cout << "[3] Revisar datos de un empleado" << std::endl;
    std::cout << "[4] Revisar datos de todos los empleados" << std::endl;
    std::cout << "[5] Promover a un empleado" << std::endl;
    std::cout << "[6] Demotear a un empleado" << std::endl;
    std::cout << "[7] Revisar datos de todos los empleados" << std::endl;
    std::cout << "======================" << std::endl;

    std::cin >> value;

    switch (value) {
        case 1:
            jefe.ContratarEmpleado();
        case 2:
            jefe.DespedirEmpleado();
        case 3:
            jefe.RevisarDatosEmpleados();
        case 4:
            jefe.RevisarDatos();
        case 5:
            jefe.AscenderEmpleado();
        case 6:
            jefe.DescenderEmpleado();
    }
}

// FUNCIONES CONTADOR

void MenuContador() {
    int value;
    Contador contador; //Invocación de clase Contador de Usuarios

    std::cout << "===== MENU CONTADOR =====" << std::endl;
    std::cout << "Bienvenido. Porfavor elije una opcion." << std::endl;
    std::cout << "[1] Revisar datos" << std::endl;
    std::cout << "[2] Revisar salario de un empleado" << std::endl;
    std::cout << "[3] Revisar la clave SAT de un empleado" << std::endl;
    std::cout << "[4] Revisar una constancia fiscal" << std::endl;
    std::cout << "======================" << std::endl;

    std::cin >> value;

    switch (value) {
        case 1:
            contador.RevisarDatos();
        case 2:
            contador.SalarioEmpleado();
        case 3:
            contador.ClavesSAT();
        case 4:
            contador.ConstanciasFiscales();
    }
}

void MenuAlmacen() {
    int value;
    Almacen almacen;

    std::cout << "===== MENU ALMACEN =====" << std::endl;
    std::cout << "Bienvenido. Porfavor elije una opcion." << std::endl;
    std::cout << "[1] Revisar datos" << std::endl;
    std::cout << "[2] Revisar el inventario de sucursal" << std::endl;
    std::cout << "======================" << std::endl;

    std::cin >> value;

    switch (value) {
        case 1:
            almacen.RevisarDatos();
        case 2:
            almacen.SucursalesInventario();
    }
}

#endif //PROGRAMACIONI_PROYECTO4PARCIAL_MENU_H
