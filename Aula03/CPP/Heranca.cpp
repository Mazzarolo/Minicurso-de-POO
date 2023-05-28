#include <iostream>
using namespace std;

// Classe mãe (classe base)
class Animal 
{
public:
    virtual void emitirSom() const = 0;  // Método virtual puro
};

// Classe filha (classe derivada)
class Cachorro : public Animal 
{
public:
    void emitirSom() const override {
        cout << "O cachorro faz Au Au!" << endl;
    }
};

// Classe filha (classe derivada)
class Gato : public Animal 
{
public:
    void emitirSom() const override {
        cout << "O gato faz Miau!" << endl;
    }
};

int main() {
    int tam = 2;
    Animal* animal[2];  // Vetor de ponteiros para a classe Animal
    animal[0] = new Cachorro();
    animal[1] = new Gato();

    for (int i = 0; i < tam; i++)
    {
        animal[i]->emitirSom();
    }
    

    for (int i = 0; i < tam; i++)
    {
        delete animal[i];
    }
    

    return 0;
}
