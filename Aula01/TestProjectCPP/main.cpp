#include <stdio.h>
#include <string.h>

using namespace std;

typedef struct cor
{
    int r, g, b;
} Cor;


class Carro
{
protected:
    int rodas;
    Cor cor;
    char marca[10];

public:
    Carro(Cor cor, char* marca)
    {
        rodas = 4;
        this->cor = cor;
        strcpy(this->marca, marca);
    }

    virtual void dirigindo()
    {
        printf("Dirigindo um carro...\n");
    }

protected:
    Carro(Cor cor) 
    {
        rodas = 4;
        this->cor = cor;
    };

};

class Kombi : public Carro
{
public:
    Kombi(Cor cor) : Carro(cor)
    {
        strcpy(marca, "Volkswagen");
    }

    void dirigindo()
    {
        printf("Dirigindo uma Kombi...\n");
    }

};

int main()
{
    Cor cor;
    cor.r = 255;
    cor.g = 150;
    cor.b = 200;
    Carro* carro = new Carro(cor, "Carro foda");
    carro->dirigindo();

    carro = new Kombi(cor);
    carro->dirigindo();

    return 0;
}