#pragma once

#include <iostream>
#include <cmath>
#include <utility> // Для std::pair

class Point {
private:
    double x; // координата X
    double y; // координата Y

public:
    // Конструктори
    Point(); // Конструктор за замовчуванням
    Point(double xVal, double yVal); // Конструктор з параметрами
    Point(const Point& other); // Конструктор копіювання

    // Методи переміщення
    void moveX(double deltaX); // переміщення по осі X
    void moveY(double deltaY); // переміщення по осі Y

    // Обчислення відстаней
    double distanceToOrigin() const; // відстань до початку координат
    double distanceTo(const Point& other) const; // відстань до іншої точки

    // Перетворення в полярні координати
    void toPolar(double& r, double& theta) const;

    // Методи порівняння
    bool isEqual(const Point& other) const; // порівняння на збіг
    bool isNotEqual(const Point& other) const; // порівняння на розбіжність

    // Оператори
    bool operator==(const Point& other) const;  // Оператор ==
    bool operator!=(const Point& other) const;  // Оператор !=
    friend std::ostream& operator<<(std::ostream& os, const Point& p); // Оператор <<
    friend std::istream& operator>>(std::istream& is, Point& p); // Оператор >>
};
