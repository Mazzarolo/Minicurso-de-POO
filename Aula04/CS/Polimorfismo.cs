using System;

namespace Programa
{
    // Classe mãe (classe base)
    class Animal {
        public virtual void EmitirSom() {
            Console.WriteLine("Animal emitindo som");
        }
    }

    // Classe filha (classe derivada)
    class Cachorro : Animal {
        public override void EmitirSom() {
            Console.WriteLine("O cachorro faz 'Au Au!'");
        }
    }

    // Classe filha (classe derivada)
    class Gato : Animal {
        public override void EmitirSom() {
            Console.WriteLine("O gato faz 'Miau!'");
        }
    }

    class MainClass {
        static void Main(string[] args) {
            Animal[] animals = {
                new Animal(),
                new Cachorro(),
                new Gato()};

            foreach(Animal animal in animals) {
                animal.EmitirSom();
            }

            Console.ReadLine();
        }
    }
}