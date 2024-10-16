// Brij Malhotra
// lab3.cpp
// Purpose: Multi file classes

#include <iostream>
#include "Cartesian.h"
#include "Polar.h"
#include <cmath>

using namespace std;

class Polar;

Cartesian::Cartesian(double x, double y)
:x(x)
,y(y)
{
}

Cartesian::Cartesian(const Polar conversion){
    double r = conversion.getR();
    double angle = conversion.getAngle();
    
    x = r * (cos(angle));
    y = r * (sin(angle));
}

double Cartesian::getX() const {
    return x;
}

double Cartesian::getY() const {
    return y;
}

Cartesian Cartesian::addX(double xIn) const {
    Cartesian copy(x + xIn, y);
    return copy;
}

Cartesian Cartesian::addY(double yIn) const {
    Cartesian copy(x, y + yIn);
    return copy;
}