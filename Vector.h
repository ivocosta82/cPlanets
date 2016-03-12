//
// Created by Ivo on 04/02/2016.
//

#ifndef GRAVITYEXPERIMENT_VECTOR_H
#define GRAVITYEXPERIMENT_VECTOR_H


class Vector {
private:
    long int x;
    long int y;

public:
    Vector(long int x, long int y);
    void setX(long int x);
    void setY(long int y);
    long int getX();
    long int getY();
    void add(Vector other);

};


#endif //GRAVITYEXPERIMENT_VECTOR_H
