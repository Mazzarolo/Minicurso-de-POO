#include "Animal.h"

Animal::Animal(int numPatas, char* nome)
{
    this->numPatas = numPatas;
    this->nome = new char[strlen(nome) + 1];
    strcpy(this->nome, nome);
}

Animal::~Animal()
{
    delete[] nome;
    printf("Destrutor de Animal\n");
}

void Animal::andar()
{
    printf("%s andando com %d patas...\n", nome, numPatas);
}

void Animal::comer()
{
    printf("Comendo...\n");
}

void Animal::dormir()
{
    printf("Dormindo...\n");
}

int Animal::getNumPatas()
{
    return numPatas;
}

