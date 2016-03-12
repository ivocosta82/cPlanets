#include <iostream>
#include <list>
#include "Planet.h"

using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    list<Planet*> universe;

    universe.push_back(new Planet(0, 0, new Vector(0,0), new Vector(0,0)));
    universe.push_back(new Planet(1, 1, new Vector(0,300), new Vector(0,0)));

    for(list<Planet*>::iterator iterator = universe.begin(); iterator != universe.end(); ++iterator) {
        for(list<Planet*>::iterator iterator2 = iterator; iterator2 != universe.end() ; ++iterator2) {
            cout << " " << (*iterator2)->getMass();
        }
    }

    return 0;
}