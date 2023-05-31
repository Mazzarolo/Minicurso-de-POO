using System;

namespace Programa
{
    // Classe mãe (classe base)
    class Animal {
        int numeroPatas;
        string nome;
        string especie;
        string som;

        public Animal(int numeroPatas, string nome, string especie, string som) {
            this.numeroPatas = numeroPatas;
            this.nome = nome;
            this.especie = especie;
            this.som = som;
        }
        public void EmitirSom() {
            Console.WriteLine("{0} faz {1}", nome, som);
        }
    }

    // Classe filha (classe derivada)
    class Cachorro : Animal {
        public Cachorro() : base(4, "Cachorro", "Canis lupus familiaris", "Au au!") { }
    }

    // Classe filha (classe derivada)
    class Gato : Animal {
        public Gato() : base(4, "Gato", "Felis catus", "Miau!") { }
    }

    class MainClass {
        static void Main(string[] args) {
            Animal[] animals = {
                new Animal(6, "Formiga", "Formiga", "Nada"),
                new Cachorro(),
                new Gato()};

            foreach(Animal animal in animals) {
                animal.EmitirSom();
            }

            Console.ReadLine();
        }
    }
}