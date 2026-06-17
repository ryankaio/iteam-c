#include <iostream>
#include <string>

class Aluno{
    public:
        std::string nome;
        float nota1;
        float nota2;
    Aluno(std::string nome) : nome(nome){}
    double calcular_media(){
        return (nota1 + nota2) / 2;
    }

    void mostrar_media(){
        std::cout << "Sua media e: " << calcular_media() << std::endl;
    }
    void situacao(){
        if(calcular_media()>= 7){
            std::cout << "Aprovado" << std::endl;
        }
        else{
            std::cout << "Reprovado" << std::endl;
        }
    }
};

int main(){
    Aluno a1("Ryan");
    a1.nota1 = 3;
    a1.nota2 = 8;
    a1.mostrar_media();
    a1.situacao();
}
