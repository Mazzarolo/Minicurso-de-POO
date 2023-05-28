using System;

namespace Figuras
{
    public class Figura
    {
        private double x;
        private double y;
        private double numLados;
        private double tamLado;
        private string cor;
        
        public Figura(double x, double y, double numLados, double tamLado, string cor)
        {
            this.x = x;
            this.y = y;
            this.numLados = numLados;
            this.tamLado = tamLado;
            this.cor = cor;
        }

        public double Perimetro()
        {
            return numLados * tamLado;
        }

        public void Desenhar()
        {
            Console.WriteLine("Desenhando figura com {0} lados da cor {1}", numLados, cor);
        }
    }
}