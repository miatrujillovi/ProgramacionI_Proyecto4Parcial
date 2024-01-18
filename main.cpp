#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

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

    return 0;
}
