#include <iostream>
class empleado{

public:
    empleado(){
    this->usuario="Octa";
    this->contra="1234";
    }


    void login (){
        std::cout<<("Ingresa usuario")<<std::endl;
        std::cin>>usuariologin;
        std::cout<<("Ingresa contraseña")<<std::endl;
        std::cin>>contralogin;
        if (usuariologin==usuario && contralogin==contra){
            std::cout<<("Inicio correcto")<<std::endl;
        }
        else
            std::cout<<("Inicio fallido")<<std::endl;
    }


private:
    std::string usuario;
    std::string contra;
    std::string usuariologin;
    std::string contralogin;
};




int main (){
    empleado a;
    a.login();






    return 0;
}