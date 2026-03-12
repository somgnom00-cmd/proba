#include <iostream>
#include <cmath>

int main() {
    double a, b, c;

    std::cout << "Введите три стороны треугольника (через пробел): ";
    std::cin >> a >> b >> c;

    // ПРОВЕРКА
    if (a + b <= c || a + c <= b || b + c <= a) {
        std::cout << "Треугольник с такими сторонами не существует" << std::endl;
        return 1; 
    }

    // если все чикипуки, считаем дальше
    double P = a + b + c;
    double p = P / 2;
    double S = sqrt(p * (p - a) * (p - b) * (p - c));

    std::cout << "Периметр: " << P << std::endl;
    std::cout << "Площадь: " << S << std::endl;

    if (a == b || b == c || a == c) {
        std::cout << "Треугольник равнобедренный." << std::endl;
    } else {
        std::cout << "Треугольник не равнобедренный." << std::endl;
    }

    return 0;
}