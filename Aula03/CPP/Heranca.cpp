#include <stdio.h>
#include <string.h>

using namespace std;

// Classe mãe (classe base)
class Animal 
{
private:
    int numeroPatas;
    char nome[10];
    char especie[10];
    char som[10];

public:
    Animal(int numeroPatas, char* nome, char* especie, char* som) 
    {
        this->numeroPatas = numeroPatas;
        strcpy(this->nome, nome);
        strcpy(this->especie, especie);
        strcpy(this->som, som);
    }

    void emitirSom()
    {
        printf("O %s faz %s!\n", especie, som);
    }
};

// Classe filha (classe derivada)
class Cachorro : public Animal 
{
public:
    Cachorro() : Animal(4, "Cachorro", "Canino", "Auau") { }
};

// Classe filha (classe derivada)
class Gato : public Animal 
{
public:
    Gato() : Animal(4, "Gato", "Felino", "Miau") { }
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
