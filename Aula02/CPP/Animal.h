#ifndef ANIMAL_H
#define ANIMAL_H

#include <stdio.h>
#include <string.h>

class Animal
{
private:
    int numPatas;
    char* nome;

public:
    Animal(int numPatas, char* nome);
    ~Animal();
    void andar();
    void comer();
    void dormir();
    int getNumPatas();
};

#endif // ANIMAL_H