#include "point.h"
#include <cmath>
#include <iostream>

using namespace std;

/*Point::Point()
{
    x = 0;
    y = 0;
}*/

Point::Point(float _x, float _y)
{
    x = _x;
    y = _y;
}

Point::~Point()
{

}

void Point::setX(float _x)
{
    x = _x;
}

void Point::setY(float _y)
{
    y = _y;
}

void Point::setXY(float _x, float _y)
{
    x = _x; y = _y;
}

float Point::getX()
{
    return x;
}

float Point::getY()
{
    return y;
}

Point Point::add(Point p1)
{
    Point soma;
    soma.x = x + p1.x;
    soma.y = y + p1.y;
    return(soma);
}

Point Point::sub(Point p1)
{
    Point sub;
    sub.x = x - p1.x;
    sub.y = y - p1.y;
    return(sub);
}

float Point::norma()
{
    return sqrt(x*x + y*y);
}

void Point::translada(float a, float b)
{
    x = x + a;
    y = y + b;

}

void Point::imprime()
{
    cout << "<" << x << "," << y << ">";
}



