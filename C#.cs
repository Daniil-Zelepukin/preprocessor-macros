using System;

class Program
{
    static void Main()
    {
        int x, y;
        Console.Write("Введите первое число: ");
        x = Convert.ToInt32(Console.ReadLine());
        Console.Write("Введите второе число: ");
        y = Convert.ToInt32(Console.ReadLine());
        Console.WriteLine("Максимальное число: " + Math.Max(x, y));

        Console.WriteLine("-------------------------------");

        int c, d;
        Console.Write("Введите первое число: ");
        c = Convert.ToInt32(Console.ReadLine());
        Console.Write("Введите второе число: ");
        d = Convert.ToInt32(Console.ReadLine());
        Console.WriteLine("Максимальное число: " + Math.Min(c, d));

        Console.WriteLine("-------------------------------");

        double radius = 5.0;
        double area = Math.PI * radius * radius;
        Console.WriteLine("Площадь круга: " + area);

        Console.WriteLine("-------------------------------");

        Console.Write("x = ");
        x = Convert.ToInt32(Console.ReadLine());
        Console.WriteLine("Число в квадрате: " + Math.Pow(x, 2));
        Console.WriteLine("Число в 4-й степени: " + Math.Pow(x, 4));

    }
}