//
// Created by Alumnos on 17/01/2024.
//

#include "menu.h"
#include <string>

int main() {
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
