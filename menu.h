//
// Created by Alumnos on 17/01/2024.
//

#ifndef PROGRAMACIONI_PROYECTO4PARCIAL_MENU_H
#define PROGRAMACIONI_PROYECTO4PARCIAL_MENU_H

#include "Usuarios.h"
#include <string>


// MENU EMPLEADO

void MenuEmpleado() {
    int value;
    Empleado empleado;

    std::cout << "===== MENU EMPLEADO =====" << std::endl;
    std::cout << "Bienvenido. Porfavor elije una opcion." << std::endl;
    std::cout << "[1] Revisar datos" << std::endl;
    std::cout << "[2] Salir del menu" << std::endl;
    std::cout << "======================" << std::endl;

    std::cin >> value;

    switch (value) {
        case 1:
            empleado.RevisarDatos();
        case 2:
            break;
        default:
            std::cout << "Opcion no valida" << std::endl;
            break;
    }
}


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
    std::cout << "[5] Salir del menu" << std::endl;
    std::cout << "======================" << std::endl;

    std::cin >> value;

    switch (value) {
        case 1:
            gerente.ContratarEmpleado();
            MenuGerente();
            break;
        case 2:
            gerente.DespedirEmpleado();
            MenuGerente();
            break;
        case 3:
            gerente.RevisarDatos();
            MenuGerente();
            break;
        case 4:
            gerente.RevisarDatosEmpleados();
            MenuGerente();
            break;
        case 5:
            break;
        default:
            std::cout << "Opcion no valida" << std::endl;
            break;
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
    std::cout << "[7] Salir del menu" << std::endl;
    std::cout << "======================" << std::endl;

    std::cin >> value;

    switch (value) {
        case 1:
            jefe.ContratarEmpleado();
            MenuJefe();
            break;
        case 2:
            jefe.DespedirEmpleado();
            MenuJefe();
            break;
        case 3:
            jefe.RevisarDatosEmpleados();
            MenuJefe();
            break;
        case 4:
            jefe.RevisarDatos();
            MenuJefe();
            break;
        case 5:
            jefe.AscenderEmpleado();
            MenuJefe();
            break;
        case 6:
            jefe.DescenderEmpleado();
            MenuJefe();
            break;
        case 7:
            break;
        default:
            std::cout << "Opcion no valida" << std::endl;
            MenuJefe();
            break;
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
    std::cout << "[5] Salir del menu" << std::endl;
    std::cout << "======================" << std::endl;

    std::cin >> value;

    switch (value) {
        case 1:
            contador.RevisarDatos();
            MenuContador();
            break;
        case 2:
            contador.SalarioEmpleado();
            MenuContador();
            break;
        case 3:
            contador.ClavesSAT();
            MenuContador();
            break;
        case 4:
            contador.ConstanciasFiscales();
            MenuContador();
            break;
        case 5:
            break;
        default:
            std::cout << "Opcion no valida" << std::endl;
            break;
    }
}

//MENU ALMACEN
void MenuAlmacen() {
    int value;
    Almacen almacen;

    std::cout << "===== MENU ALMACEN =====" << std::endl;
    std::cout << "Bienvenido. Porfavor elije una opcion." << std::endl;
    std::cout << "[1] Revisar datos" << std::endl;
    std::cout << "[2] Revisar el inventario de sucursal" << std::endl;
    std::cout << "[3] Salir del menu" << std::endl;
    std::cout << "======================" << std::endl;

    std::cin >> value;

    switch (value) {
        case 1:
            almacen.RevisarDatos();
            MenuAlmacen();
            break;
        case 2:
            almacen.SucursalesInventario(); //Esta función retornará un COUT simple. Actualmente no cuenta con información, el COUT solo es para asegurarnos de que funciona.
            MenuAlmacen();
            break;
        case 3:
            break;
        default:
            std::cout << "Opcion no valida" << std::endl;
            break;
    }
}

#endif //PROGRAMACIONI_PROYECTO4PARCIAL_MENU_H

