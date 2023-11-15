#include <iostream>
using namespace std;

#define MAX(a, b) ( (a) > (b) ? (a) : (b) ) // макрос поиска максимального значения из 2 чисел
#define MIN(a, b) ((a) < (b) ? (a) : (b)) // макрос поиска минимального значения из 2 чисел
#define PI 3.14159 // поиск площади круга через константу PI
#define SQR(x) ((x) * (x)) // возведение числа в квадрат
#define POWER_4(x) (SQR(x) * SQR(x)) // возведение числа в 4 степень 

int main() {
    int x, y;
    cout << "Введите первое число: ";
    cin >> x;
    cout << "Введите второе число: ";
    cin >> y;
    cout << "Максимальное число: " << MAX(x, y) << endl;

    cout << "-------------------------------" << endl;

    int c, d;
    cout << "Введите первое число: ";
    cin >> c;
    cout << "Введите второе число: ";
    cin >> d;
    cout << "Минимальное число: " << MIN(c, d) << endl;

    cout << "-------------------------------" << endl;

    double radius = 5.0;
    double area = PI * radius * radius;
    cout << "Площадь круга: " << area << endl;

    cout << "-------------------------------" << endl;

    cout << "x = ";
    cin >> x;
    cout << "Число в квадрате  = " << SQR(x) << endl;
    cout << "Число в 4 степени = " << POWER_4(x) << endl;

    return 0;
}

