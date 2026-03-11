#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    std::cout << "Введите стороны треугольника: ";
    std::cin >> a >> b >> c;

    // 1. Периметр
    double p = a + b + c;
    std::cout << "Периметр: " << p << std::endl;

    // 2. Площадь по формуле Герона
    double s_p = p / 2; // полупериметр
    double area = sqrt(s_p * (s_p - a) * (s_p - b) * (s_p - c));
    std::cout << "Площадь: " << area << std::endl;

    // 3. Проверка на равнобедренность
    if (a == b || b == c || a == c) {
        std::cout << "Треугольник равнобедренный" << std::endl;
    } else {
        std::cout << "Треугольник не равнобедренный" << std::endl;
    }

    return 0;
}