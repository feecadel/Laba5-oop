#include "Point.h"
#include <iostream>
#include <Windows.h>

using namespace std;


int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Point p1;
    cin >> p1;
    cout << "Визначено точку " << p1 << endl;
    Point initialPosition = p1; //фіксуємо перше положення точки

    cout << "Відстань точки до початку координат " << p1.distanceToOrigin() << endl;

    double r, theta;
    p1.toPolar(r, theta);
    cout << "Полярні координати точки r= " << r << ", theta= " << theta << endl;

    double deltaX;
    cout << "Введіть відстань зміщення точки по осі x:\n";
    cin >> deltaX;
    p1.moveX(deltaX);

    double deltaY;
    cout << "Введіть відстань зміщення точки по осі y:\n";
    cin >> deltaY;
    p1.moveY(deltaY);

    cout << "Після переміщення по осі X на " << deltaX << " одиниць, по  осі Y на " << deltaY << " одиниць: ";
    cout << p1 << endl;


    // Порівняння точок
    if (p1 == initialPosition) {
        std::cout << "Точка не змістилась, координати залишились тими ж." << std::endl;
    }
    else {
        std::cout << "Точка змістилась, координати змінились." << std::endl;
        cout << "Нова відстань точки до початку координат " << p1.distanceToOrigin() << endl;

        p1.toPolar(r, theta);
        cout << "Нові полярні координати точки r= " << r << ", theta= " << theta << endl;

        cout << "Відстань між точками: " << p1.distanceTo(initialPosition) << endl;

    }




    return 0;
}

