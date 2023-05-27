using System;

namespace Figuras
{
    public class Figura
    {
        private double x;
        private double y;
        private double numLados;
        private double tamLado;
        
        public Figura(double x, double y, double numLados, double tamLado)
        {
            this.x = x;
            this.y = y;
            this.numLados = numLados;
            this.tamLado = tamLado;
        }

        public double Perimetro()
        {
            return numLados * tamLado;
        }

        public void Desenhar()
        {
            Console.WriteLine("Desenhando figura com {0} lados", numLados);
        }
    }
}