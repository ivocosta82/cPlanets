//
// Created by Ivo on 04/02/2016.
//

#ifndef GRAVITYEXPERIMENT_PLANET_H
#define GRAVITYEXPERIMENT_PLANET_H


#include "Vector.h"

class Planet {
private:

    Vector* position;
    Vector* velocity;
    Vector* force = 0;
    long int mass;
    long int radius;
public:
    Planet(long mass, long radius, Vector* position, Vector* velocity);
    long int getMass ();
    long int getRadius ();
    void move(long int seconds);
    void addForce(Vector externalForce);
};


#endif //GRAVITYEXPERIMENT_PLANET_H
