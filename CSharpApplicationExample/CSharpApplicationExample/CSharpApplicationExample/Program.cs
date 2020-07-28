using System;
using System.Runtime.InteropServices;

namespace CSharpApplicationExample
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Title = "Using QT Libraries in C# Aplication Example - TheCodeProgram";
            callQtFunctions();
            Console.ReadLine();
        }

        [DllImport("QtLibraryExample.dll")]
        static extern double add(int a, int b);

        [DllImport("QtLibraryExample.dll")]
        static extern double subtrack(int a, int b);

        [DllImport("QtLibraryExample.dll")]
        static extern double multiply(int a, int b);

        [DllImport("QtLibraryExample.dll")]
        static extern  double divide(int a, int b);

        static void callQtFunctions()
        {
            Console.WriteLine("Result of 5 + 7 is " + add(5, 7).ToString());
            Console.WriteLine("Result of 21 - 10 is " + subtrack(21, 10).ToString());
            Console.WriteLine("Result of 9 x 3 is " + multiply(9, 3).ToString());
            Console.WriteLine("Result of 70 / 5 is " + divide(70, 5).ToString());
        }


    }
}
