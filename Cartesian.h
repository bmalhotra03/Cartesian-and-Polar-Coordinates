// Brij Malhotra
// lab3.cpp
// Purpose: Multi file classes

#ifndef CARTESIAN_H
#define CARTESIAN_H
#include <iostream>
#include <cmath>
#include "Polar.h"

using namespace std;

class Polar;

class Cartesian {
    
    private:
        double x;
        double y;

    public: 
        Cartesian(double x, double y);
        Cartesian(const Polar conversion);
        double getX() const;
        double getY() const;
        Cartesian addX(double xIn) const;
        Cartesian addY(double yIn) const;

};

#endif
