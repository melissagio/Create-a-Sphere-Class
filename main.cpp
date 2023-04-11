//
//  main.cpp
//  CS 232 Classes Sphere Calculator
//
//  Created by Melissa Gio on 3/1/23.
//

#include <iostream>
#include <string>
#include "Sphere.h"

using namespace std;

int main() {
    
   //declaration
    double radiusTemp;
    Sphere basketball; //instantiation
    //basketball is the object(child), sphere is the class (parent)
        //basketball inherits everything that the sphere is
    //set to 0 when not given a radius value
    
    
    //get user input
    cout << "What is the radius for the basketball: ";
    cin >> radiusTemp;
    basketball.setRadius(radiusTemp); //set the radius as whatever value the user input (radiustemp)
    
    
    //calculations & output
    cout << endl;
    radiusTemp = basketball.getRadius();
    cout << "Basketball: " << endl;
    cout << "Surface Area: " << basketball.calcSurfaceArea(radiusTemp) << endl;
    cout << "Volume: " << basketball.calcVolume(radiusTemp) << endl;
    cout << "Radius: " << basketball.getRadius() << endl;
    cout << endl;
    
 
    return 0;
}
