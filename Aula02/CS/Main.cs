using System;
using Figuras;

namespace Program
{
    class MainClass
    {
        public static void Main(string[] args)
        {
            Figura f = new Figura(0, 0, 4, 10, "vermelha");
            f.Desenhar();
            Console.WriteLine("Perimetro: {0}", f.Perimetro());
        }
    }
}
