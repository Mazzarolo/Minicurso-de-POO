#include <stdio.h>
#include "Animal.h"

class Figura
{
private:
    int x, y;
    int tamLado, numLados;

public:
    Figura(int x, int y, int numLados, int tamLado)
    {
        this->x = x;
        this->y = y;
        this->numLados = numLados;
        this->tamLado = tamLado;
    }

    void desenhar()
    {
        printf("Desenhando figura com %d Lados\n", numLados);
    }
};

int main()
{
    Figura *quadrado = new Figura(30, 20, 4, 5);
    Figura *triangulo = new Figura(10, 0, 3, 6);
    Animal *cachorro = new Animal(4, (char*) "Magrelinho");

    quadrado->desenhar();
    triangulo->desenhar();
    cachorro->andar();
    
    return 0;
}