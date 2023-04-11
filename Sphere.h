//
//  Sphere.h
//  CS 232 Classes Sphere Calculator
//
//  Created by Melissa Gio on 3/1/23.
//

#ifndef Sphere_h
#define Sphere_h

class Sphere {
    public: //everyone has access
    //mutators and accessors have to be in public
        void setRadius(double radiusPar); //mutator, setter will change based on a critiria
    double getRadius(void); //accessor, getter getting the data but not giving anything back (void)
    
    double calcSurfaceArea(double radiusPar);
    double calcVolume(double radiusPar);
    
    Sphere(); //default constructor
    Sphere(double radiusPar); //overloaded constructor
    
    private: //some have access, data is being protected
        double radius; //this is an important data item, make sure the data asigned is good date (good date = positive number)
};

#endif /* Sphere_h */

