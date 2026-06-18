#include <iostream>
#include <string>

class Animal{
    public:
        std::string especie ;
        std::string som;
    Animal(std::string especie, std::string som) : especie(especie), som(som){}

    void emitir_som(){
        std::cout << especie << "Esta fazendo" << som << std::endl;
    }
};

int main(){
    Animal a1("vaca", "mouw");
    std::cout << a1.especie << std::endl;
    a1.emitir_som();
}