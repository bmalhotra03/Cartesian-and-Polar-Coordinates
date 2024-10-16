// Brij Malhotra
// lab3.cpp
// Purpose: Multi file classes

#include <iostream>
#include "Polar.h"
#include "Cartesian.h"
#include <cmath>

using namespace std;

class Cartesian;

Polar::Polar(double rIn, double angleIn){
    r = rIn;
    angle = angleIn;

    if (angle > 0){
        while (angle >= 2*M_PI){
            angle -= 2*M_PI;
        }
    }
    else if (angle < 0){
        while (angle < -2*M_PI){
            angle += 2*M_PI;
        }
        angle = (-1) * angle;
        angle = 2*M_PI - angle;
    }
}

Polar::Polar(const Cartesian cartesianIn){
    double x = cartesianIn.getX();
    double y = cartesianIn.getY();

    r = sqrt(x*x + y*y);

    if (x == 0){
        angle = 0;
    } else if (x > 0  && y > 0){
        angle = atan(y/x);
    } else if (x < 0){
        angle = M_PI + atan(y/x);
    } else {
        angle = 2*M_PI + atan(y/x);
    }
}

double Polar::getAngle() const {
    return angle;
}

double Polar::getR() const {
    return r;
}

double Polar::toDegrees() const {
    double theta = ((angle * 180) / M_PI);

    return theta; 
}