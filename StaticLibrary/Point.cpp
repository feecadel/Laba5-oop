#include "Point.h"

// ����������� �� �������������
Point::Point() : x(0), y(0) {}

// ����������� � �����������
Point::Point(double xVal, double yVal) : x(xVal), y(yVal) {}

// ����������� ���������
Point::Point(const Point& other) : x(other.x), y(other.y) {}

// ���������� �� �� X
void Point::moveX(double deltaX) {
    x += deltaX;
}

// ���������� �� �� Y
void Point::moveY(double deltaY) {
    y += deltaY;
}

// ³������ �� ������� ���������
double Point::distanceToOrigin() const {
    return std::sqrt(x * x + y * y);
}

// ³������ �� ���� �����
double Point::distanceTo(const Point& other) const {
    return std::sqrt((x - other.x) * (x - other.x) + (y - other.y) * (y - other.y));
}

// ������������ � ������ ����������
void Point::toPolar(double& r, double& theta) const {
    r = sqrt(x * x + y * y);   // �����
    theta = atan2(y, x);            // ��� � �������
}


// �������� �� ��� �����
bool Point::isEqual(const Point& other) const {
    return (x == other.x) && (y == other.y);
}

// �������� �� ��������� �����
bool Point::isNotEqual(const Point& other) const {
    return !isEqual(other);
}

// �������������� ��������� ==
bool Point::operator==(const Point& other) const {
    return isEqual(other);
}

// �������������� ��������� !=
bool Point::operator!=(const Point& other) const {
    return isNotEqual(other);
}

// �������������� ��������� << ��� ���������
std::ostream& operator<<(std::ostream& os, const Point& p) {
    os << "Point(" << p.x << ", " << p.y << ")";
    return os;
}
// �������������� ��������� >> ��� ��������
std::istream& operator>>(std::istream& is, Point& p) {
    std::cout << "������ ���������� X: ";
    is >> p.x; // ������� X
    std::cout << "������ ���������� Y: ";
    is >> p.y; // ������� Y
    return is; // ��������� ����
}
