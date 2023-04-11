//
//  Sphere.cpp
//  CS 232 Classes Sphere Calculator
//
//  Created by Melissa Gio on 3/1/23.
//

#include "Sphere.h"
#include <iostream>
#include <cmath>

//long way
void Sphere::setRadius(double radiusPar){ //access all available members
    if (radiusPar > 0) { //has to be positive and greater than 0
        radius = radiusPar;
    } else {
        radius = 0;
    }
}

//shortcut, copy from h file
double Sphere::getRadius(void){ //returning but not giving anything
    //will return the radius, hence why we have it as a double
    return radius;
    
}

double Sphere::calcSurfaceArea(double radiusPar){
    return 4.0 * 3.141596 * pow(radiusPar, 2.0); //a = 4 pi r^2
    
}

double Sphere::calcVolume(double radiusPar){
    return 4.0 / 3.0 * pow(radiusPar, 3.0) * 3.141596;
    
}

Sphere::Sphere(){
    radius = 0.0;
    
}

Sphere::Sphere(double radiusPar){
    if (radiusPar > 0) {
        radius = radiusPar;
    } else {
        radius = 0.0;
    }
}
