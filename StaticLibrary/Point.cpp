#include "Point.h"

// Конструктор за замовчуванням
Point::Point() : x(0), y(0) {}

// Конструктор з параметрами
Point::Point(double xVal, double yVal) : x(xVal), y(yVal) {}

// Конструктор копіювання
Point::Point(const Point& other) : x(other.x), y(other.y) {}

// Переміщення по осі X
void Point::moveX(double deltaX) {
    x += deltaX;
}

// Переміщення по осі Y
void Point::moveY(double deltaY) {
    y += deltaY;
}

// Відстань до початку координат
double Point::distanceToOrigin() const {
    return std::sqrt(x * x + y * y);
}

// Відстань до іншої точки
double Point::distanceTo(const Point& other) const {
    return std::sqrt((x - other.x) * (x - other.x) + (y - other.y) * (y - other.y));
}

// Перетворення в полярні координати
void Point::toPolar(double& r, double& theta) const {
    r = sqrt(x * x + y * y);   // Радіус
    theta = atan2(y, x);            // Кут у радіанах
}


// Перевірка на збіг точок
bool Point::isEqual(const Point& other) const {
    return (x == other.x) && (y == other.y);
}

// Перевірка на розбіжність точок
bool Point::isNotEqual(const Point& other) const {
    return !isEqual(other);
}

// Перевантаження оператора ==
bool Point::operator==(const Point& other) const {
    return isEqual(other);
}

// Перевантаження оператора !=
bool Point::operator!=(const Point& other) const {
    return isNotEqual(other);
}

// Перевантаження оператора << для виведення
std::ostream& operator<<(std::ostream& os, const Point& p) {
    os << "Point(" << p.x << ", " << p.y << ")";
    return os;
}
// Перевантаження оператора >> для введення
std::istream& operator>>(std::istream& is, Point& p) {
    std::cout << "Введіть координату X: ";
    is >> p.x; // Зчитуємо X
    std::cout << "Введіть координату Y: ";
    is >> p.y; // Зчитуємо Y
    return is; // Повертаємо потік
}
