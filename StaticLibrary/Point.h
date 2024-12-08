#pragma once

#include <iostream>
#include <cmath>
#include <utility> // ��� std::pair

class Point {
private:
    double x; // ���������� X
    double y; // ���������� Y

public:
    // ������������
    Point(); // ����������� �� �������������
    Point(double xVal, double yVal); // ����������� � �����������
    Point(const Point& other); // ����������� ���������

    // ������ ����������
    void moveX(double deltaX); // ���������� �� �� X
    void moveY(double deltaY); // ���������� �� �� Y

    // ���������� ��������
    double distanceToOrigin() const; // ������� �� ������� ���������
    double distanceTo(const Point& other) const; // ������� �� ���� �����

    // ������������ � ������ ����������
    void toPolar(double& r, double& theta) const;

    // ������ ���������
    bool isEqual(const Point& other) const; // ��������� �� ���
    bool isNotEqual(const Point& other) const; // ��������� �� ���������

    // ���������
    bool operator==(const Point& other) const;  // �������� ==
    bool operator!=(const Point& other) const;  // �������� !=
    friend std::ostream& operator<<(std::ostream& os, const Point& p); // �������� <<
    friend std::istream& operator>>(std::istream& is, Point& p); // �������� >>
};
