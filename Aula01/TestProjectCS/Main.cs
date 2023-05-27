using System;
using Utils;

namespace Program
{
    class Program
    {
        static void Main(string[] args)
        {
            Printer printer = new Printer();
            Calculator calculator = new Calculator();
            printer.Print("Poggers");
            printer.Print("5 + 5 = " + calculator.Add(5, 5));
        }
    }
}