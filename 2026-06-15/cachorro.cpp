#include <iostream>
#include <string>

using namespace std;

class Cachorro{
    public:
        string nome;
        string raca;

        Cachorro(string nome){
            this -> nome = nome;
        }

        void latir(){
            cout << nome << " esta latindo...\nAu AU AU" << endl;
        }

        void caracteristicas(){
            cout << "Nome do cachorro: " << nome << endl;
            cout << "Raca do "<< nome << ": " << raca << endl;
        }
};

int main(){
    Cachorro c1("Rex");
    c1.raca = "PitBull";
    c1.caracteristicas();
    c1.latir();
}