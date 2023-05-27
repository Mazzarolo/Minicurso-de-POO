using System;

namespace Utils
{
    public class Calculator
    {
        Printer printer;

        public Calculator()
        {
            printer = new Printer();
        }

        public int Add(int a, int b)
        {
            return a + b;
        }
    }
}