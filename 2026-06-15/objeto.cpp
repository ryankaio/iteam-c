#include <iostream>
#include <string>

using namespace std;

class Celular{

public:
    std::string nome;
    string cor;
    string modelo;
    Celular(std:: string nome){
        this -> nome = nome ;
    }
    void ligar(){
        std::cout << "\nLigado" << std::endl;
    }
    void caracteristicas(){
        cout << "nome do celular: " << nome << endl;
        cout << "Cor do celular: " << cor << endl;
        cout << "modelo do celular: " << modelo << endl;
    }
};

int main(){
    Celular C1("Poco");
    C1.modelo = "X6 pro";
    C1.cor = "Preto";
    C1.ligar();
    C1.caracteristicas();

    return 0;
}