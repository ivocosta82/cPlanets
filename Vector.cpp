//
// Created by Ivo on 04/02/2016.
//

#include "Vector.h"

Vector::Vector(long int x, long int y) {
    this->x = x;
    this->y = y;
}

void Vector::setX(long int x) {
    this->x = x;
}

void Vector::setY(long int y) {
    this->y = y;
}

long int Vector::getX() {
    return this->x;
}

long int Vector::getY() {
    return this->y = y;
}

void Vector::add(Vector other) {
    this->x += other.getX();
    this->y += other.getY();
}
