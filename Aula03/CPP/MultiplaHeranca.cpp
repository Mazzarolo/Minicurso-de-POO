#include <iostream>
using namespace std;

// Primeira classe mãe
class ClasseMae1 {
public:
    void metodoMae1() {
        cout << "Método da ClasseMae1" << endl;
    }
};

// Segunda classe mãe
class ClasseMae2 {
public:
    void metodoMae2() {
        cout << "Método da ClasseMae2" << endl;
    }
};

// Primeira classe filha
class ClasseFilha1 : public ClasseMae1, public ClasseMae2 {
public:
    void metodoFilha1() {
        cout << "Método da ClasseFilha1" << endl;
    }
};

// Segunda classe filha
class ClasseFilha2 : public ClasseMae1, public ClasseMae2 {
public:
    void metodoFilha2() {
        cout << "Método da ClasseFilha2" << endl;
    }
};

int main() {
    ClasseFilha1 objetoFilha1;
    ClasseFilha2 objetoFilha2;

    objetoFilha1.metodoMae1();   // Chama o método da ClasseMae1
    objetoFilha1.metodoMae2();   // Chama o método da ClasseMae2
    objetoFilha1.metodoFilha1(); // Chama o método da ClasseFilha1

    objetoFilha2.metodoMae1();   // Chama o método da ClasseMae1
    objetoFilha2.metodoMae2();   // Chama o método da ClasseMae2
    objetoFilha2.metodoFilha2(); // Chama o método da ClasseFilha2

    return 0;
}