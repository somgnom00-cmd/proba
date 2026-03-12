#include <iostream>
#include <numbers> 
using namespace std;


int main(){
    double pi = std::numbers::pi;
    double radius;
    double alpha;
    cout << "Введите радиус окружности - ";
    cin >> radius;

    cout << "Введите угловую меру сектора в градусах(от 0 до 360) - ";
    cin >> alpha;
    double S = pi*radius*radius;
    double P = 2*radius*pi;
    double sec = (pi*radius*radius*alpha)/360;
    cout << S << " " << P << " " << sec << endl;
    return 0;
}