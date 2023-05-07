#pragma once
#include <typeinfo>
#include <string>
#include <iostream>
using namespace std;

class Figure
{public:
    virtual double getPerimeter()
    {
        double result = 0;
        return result;
    }
    virtual void Show()
    {

    }
};

class Rectangle : public Figure  // класс прямоугольника
{
public:
    Rectangle(double w, double h) : width(w), height(h)
    { }
    double getPerimeter() override
    {
        double result = width * 2 + height * 2;
        return result;
    }
    void Show()
    {
        double P = this->getPerimeter();
        cout << " -Rectangle perimeter: " << P << endl;
    }
private:
    double width;   // ширина
    double height;  // высота
};

class Circle : public Figure     // круг
{
public:
    Circle(double r) : radius(r)
    { }
    double getPerimeter() override
    {
        return 2 * 3.14 * radius;
    }
    void Show() override
    {
        double P = this->getPerimeter();
        cout << " -Circle perimeter: " << P << endl;
    }
private:
    double radius;  // радиус круга
};

class Penta : public Figure     // пятиугольник
{
public:
    Penta(double s1, double s2, double s3, double s4, double s5) : side1(s1), side2(s2), side3(s3), side4(s4), side5(s5)
    { }
    double getPerimeter() override
    {
        double result = side1+side2+side3+side4+side5;
        return result;
    }
    void Show() override
    {
        double P = this->getPerimeter();
        cout << " -Penta perimeter: " << P << endl;
    }

private:
    double side1;
    double side2;
    double side3;
    double side4;
    double side5;
};

class Triangle : public Figure     // пятиугольник
{
public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3)
    { }
    double getPerimeter() override
    {
        double result = side1 + side2 + side3;
        return result;
    }
    void Show() override
    {
        double P = this->getPerimeter();
        cout << " -Triangle perimeter: " << P << endl;
    }

private:
    double side1;
    double side2;
    double side3;
};