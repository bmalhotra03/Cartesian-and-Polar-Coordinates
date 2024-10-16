// Brij Malhotra
// lab3.cpp
// Purpose: Multi file classes

#ifndef POLAR_H
#define POLAR_H
#include <iostream>
#include "Polar.h"
#include <cmath>

using namespace std;

class Cartesian;

class Polar {

    private:
        double r;
        double angle;
    
    public: 
        Polar(double rIn, double angleIn);
        Polar(const Cartesian cartesianIn);
        double getR() const;
        double getAngle() const;
        double toDegrees() const;

};

#endif
