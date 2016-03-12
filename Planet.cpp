//
// Created by Ivo on 04/02/2016.
//

#include "Planet.h"

Planet::Planet(long int mass, long int radius, Vector* position, Vector* velocity) {
    this->mass = mass;
    this->radius = radius;
    this->position = position;
    this->velocity = velocity;
}

long int Planet::getMass() {
    return this->mass;
}

long int Planet::getRadius() {
    return this->radius;
}

void Planet::move(long int seconds) {

}

void Planet::addForce(Vector externalForce) {

}
